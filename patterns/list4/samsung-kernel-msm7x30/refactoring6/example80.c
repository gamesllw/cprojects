if( (pAdapter->device_mode == WLAN_HDD_INFRA_STATION)
#ifdef WLAN_FEATURE_P2P
     || (pAdapter->device_mode == WLAN_HDD_P2P_CLIENT)
#endif
      )
    {
        hdd_wext_state_t *pWextState = WLAN_HDD_GET_WEXT_STATE_PTR(pAdapter); 
        tCsrRoamProfile * pRoamProfile = &pWextState->roamProfile;
        hdd_station_ctx_t *pHddStaCtx = WLAN_HDD_GET_STATION_CTX_PTR(pAdapter);

        if (eConnectionState_IbssConnected == pHddStaCtx->conn_info.connState)
        {
           /* Link is up then return cant set channel*/
            hddLog( VOS_TRACE_LEVEL_ERROR, 
                   "%s: IBSS Associated, can't set the channel\n", __func__);
            return -EINVAL;
        }

        num_ch = pRoamProfile->ChannelInfo.numOfChannels = 1;
        pHddStaCtx->conn_info.operationChannel = channel; 
        pRoamProfile->ChannelInfo.ChannelList = 
            &pHddStaCtx->conn_info.operationChannel; 
    }
    else if ((pAdapter->device_mode == WLAN_HDD_SOFTAP) 
#ifdef WLAN_FEATURE_P2P
        ||   (pAdapter->device_mode == WLAN_HDD_P2P_GO)
#endif
            ) 
    {
        (WLAN_HDD_GET_AP_CTX_PTR(pAdapter))->sapConfig.channel = channel;

        if ( WLAN_HDD_SOFTAP == pAdapter->device_mode )
        {
            hdd_config_t *cfg_param = (WLAN_HDD_GET_CTX(pAdapter))->cfg_ini;

            /* If auto channel selection is configured as enable/ 1 then ignore
            channel set by supplicant
            */
            if ( cfg_param->apAutoChannelSelection )
            {
                (WLAN_HDD_GET_AP_CTX_PTR(pAdapter))->sapConfig.channel = AUTO_CHANNEL_SELECT;

                hddLog(VOS_TRACE_LEVEL_INFO_HIGH,
                       "%s: set channel to auto channel (0) for device mode =%d",
                       __func__, pAdapter->device_mode);
            }
        }
    }
    else 
    {
        hddLog(VOS_TRACE_LEVEL_FATAL, 
               "%s: Invalid device mode failed to set valid channel", __func__);
        return -EINVAL;
    }
