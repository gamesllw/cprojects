switch (node->type) {
	case XML_ELEMENT_NODE:
	    list = node->children;
	    break;
	case XML_DOCUMENT_NODE:
	case XML_HTML_DOCUMENT_NODE:
#ifdef LIBXML_DOCB_ENABLED
	case XML_DOCB_DOCUMENT_NODE:
#endif
	    list = ((xmlDocPtr) node)->children;
	    break;
	case XML_ATTRIBUTE_NODE:
	    list = ((xmlAttrPtr) node)->children;
	    break;
	case XML_TEXT_NODE:
	case XML_CDATA_SECTION_NODE:
	case XML_PI_NODE:
	case XML_COMMENT_NODE:
	    if (node->content != NULL) {
		ret = xmlStrlen(node->content);
            }
	    break;
	case XML_ENTITY_REF_NODE:
	case XML_DOCUMENT_TYPE_NODE:
	case XML_ENTITY_NODE:
	case XML_DOCUMENT_FRAG_NODE:
	case XML_NOTATION_NODE:
	case XML_DTD_NODE:
        case XML_ELEMENT_DECL:
        case XML_ATTRIBUTE_DECL:
        case XML_ENTITY_DECL:
	case XML_NAMESPACE_DECL:
	case XML_XINCLUDE_START:
	case XML_XINCLUDE_END:
	    ret = 1;
	    break;
    }