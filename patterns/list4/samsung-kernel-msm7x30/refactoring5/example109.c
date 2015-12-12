#ifdef WLAN_FEATURE_VOWIFI_11R
if (csrRoamIsHandoffInProgress(pMac) && 
                                                csrRoamIs11rAssoc(pMac))
                        {
                            status = csrRoamIssueReassociate(pMac, sessionId, pBssDesc, 
                                    (tDot11fBeaconIEs *)( pScanResult->Result.pvIes ), &pCommand->u.roamCmd.roamProfile);
                        }
                        else
#endif
#ifdef FEATURE_WLAN_CCX
                        if (csrRoamIsHandoffInProgress(pMac) && 
                                                csrRoamIsCCXAssoc(pMac))
                        {
                            // Now serialize the reassoc command.
                            status = csrRoamIssueReassociateCmd(pMac, sessionId);
                        }
                        else
#endif
#ifdef FEATURE_WLAN_LFR
                        if (csrRoamIsHandoffInProgress(pMac) && 
                                                csrRoamIsFastRoamEnabled(pMac))
                        {
                            // Now serialize the reassoc command.
                            status = csrRoamIssueReassociateCmd(pMac, sessionId);
                        }
                        else
#endif
                        // else we are not connected and attempting to Join.  Issue the
                        // Join request.
                        {
                            status = csrRoamIssueJoin( pMac, sessionId, pBssDesc, 
                                                (tDot11fBeaconIEs *)( pScanResult->Result.pvIes ),
                                                &pCommand->u.roamCmd.roamProfile, pCommand->u.roamCmd.roamId );
                        }
