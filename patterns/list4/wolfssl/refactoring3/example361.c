switch (version) {
#ifndef NO_OLD_TLS
    #ifdef WOLFSSL_ALLOW_SSLV3
        case 0:
            method = SSLv3_server_method();
            break;
    #endif

    #ifndef NO_TLS
        case 1:
            method = TLSv1_server_method();
            break;


        case 2:
            method = TLSv1_1_server_method();
            break;

        #endif
#endif

#ifndef NO_TLS
        case 3:
            method = TLSv1_2_server_method();
            break;
#endif

#ifdef CYASSL_DTLS
    #ifndef NO_OLD_TLS
        case -1:
            method = DTLSv1_server_method();
            break;
    #endif

        case -2:
            method = DTLSv1_2_server_method();
            break;
#endif

        default:
            err_sys("Bad SSL version");
    }
