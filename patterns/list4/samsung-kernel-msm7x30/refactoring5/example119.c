#ifdef FEATURE_WLAN_LFR
if (csrRoamIsFastRoamEnabled(pMac))
    {
        /* Always the BSS info in the head is the handoff candidate */
        pBssNode = csrNeighborRoamGetRoamableAPListNextEntry(pMac, &pNeighborRoamInfo->FTRoamInfo.preAuthDoneList, NULL);
        NEIGHBOR_ROAM_DEBUG(pMac, LOG1, FL("Number of Handoff candidates = %d"), csrLLCount(&pNeighborRoamInfo->FTRoamInfo.preAuthDoneList));
    }
    else
#endif
    {
        pBssNode = csrNeighborRoamGetRoamableAPListNextEntry(pMac, &pNeighborRoamInfo->roamableAPList, NULL);
        NEIGHBOR_ROAM_DEBUG(pMac, LOG1, FL("Number of Handoff candidates = %d"), csrLLCount(&pNeighborRoamInfo->roamableAPList));
    }
