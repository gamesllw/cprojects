switch(afd->a_af) {
#ifdef INET6
			case AF_INET6:
			{
				int error;

				if ((error = ip6_parsenumeric(sa, addr, host,
							      hostlen,
							      flags)) != 0)
					return(error);
				break;
			}
#endif
			default:
				if (inet_ntop(afd->a_af, addr, host,
				    hostlen) == NULL)
					return ENI_SYSTEM;
				break;
			}
