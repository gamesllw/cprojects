if (nla_put_string(skb, IFLA_IFNAME, dev->name) ||
	    nla_put_u32(skb, IFLA_TXQLEN, dev->tx_queue_len) ||
	    nla_put_u8(skb, IFLA_OPERSTATE,
		       netif_running(dev) ? dev->operstate : IF_OPER_DOWN) ||
	    nla_put_u8(skb, IFLA_LINKMODE, dev->link_mode) ||
	    nla_put_u32(skb, IFLA_MTU, dev->mtu) ||
	    nla_put_u32(skb, IFLA_GROUP, dev->group) ||
	    nla_put_u32(skb, IFLA_PROMISCUITY, dev->promiscuity) ||
	    nla_put_u32(skb, IFLA_NUM_TX_QUEUES, dev->num_tx_queues) ||
#ifdef CONFIG_RPS
	    nla_put_u32(skb, IFLA_NUM_RX_QUEUES, dev->num_rx_queues) ||
#endif
	    (dev->ifindex != dev_get_iflink(dev) &&
	     nla_put_u32(skb, IFLA_LINK, dev_get_iflink(dev))) ||
	    (upper_dev &&
	     nla_put_u32(skb, IFLA_MASTER, upper_dev->ifindex)) ||
	    nla_put_u8(skb, IFLA_CARRIER, netif_carrier_ok(dev)) ||
	    (dev->qdisc &&
	     nla_put_string(skb, IFLA_QDISC, dev->qdisc->ops->id)) ||
	    (dev->ifalias &&
	     nla_put_string(skb, IFLA_IFALIAS, dev->ifalias)) ||
	    nla_put_u32(skb, IFLA_CARRIER_CHANGES,
			atomic_read(&dev->carrier_changes)) ||
	    nla_put_u8(skb, IFLA_PROTO_DOWN, dev->proto_down))
		goto nla_put_failure;
