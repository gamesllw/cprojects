switch( eDest ){
    case SRT_Table:
    case SRT_EphemTab: {
      testcase( eDest==SRT_Table );
      testcase( eDest==SRT_EphemTab );
      sqlite3VdbeAddOp2(v, OP_NewRowid, iParm, regRowid);
      sqlite3VdbeAddOp3(v, OP_Insert, iParm, regRow, regRowid);
      sqlite3VdbeChangeP5(v, OPFLAG_APPEND);
      break;
    }
#ifndef SQLITE_OMIT_SUBQUERY
    case SRT_Set: {
      assert( nColumn==1 );
      sqlite3VdbeAddOp4(v, OP_MakeRecord, regRow, 1, regRowid, &p->affinity, 1);
      sqlite3ExprCacheAffinityChange(pParse, regRow, 1);
      sqlite3VdbeAddOp2(v, OP_IdxInsert, iParm, regRowid);
      break;
    }
    case SRT_Mem: {
      assert( nColumn==1 );
      sqlite3ExprCodeMove(pParse, regRow, iParm, 1);
      /* The LIMIT clause will terminate the loop for us */
      break;
    }
#endif
    default: {
      int i;
      assert( eDest==SRT_Output || eDest==SRT_Coroutine ); 
      testcase( eDest==SRT_Output );
      testcase( eDest==SRT_Coroutine );
      for(i=0; i<nColumn; i++){
        assert( regRow!=pDest->iMem+i );
        sqlite3VdbeAddOp3(v, OP_Column, pseudoTab, i, pDest->iMem+i);
        if( i==0 ){
          sqlite3VdbeChangeP5(v, OPFLAG_CLEARCACHE);
        }
      }
      if( eDest==SRT_Output ){
        sqlite3VdbeAddOp2(v, OP_ResultRow, pDest->iMem, nColumn);
        sqlite3ExprCacheAffinityChange(pParse, pDest->iMem, nColumn);
      }else{
        sqlite3VdbeAddOp1(v, OP_Yield, pDest->iParm);
      }
      break;
    }
  }