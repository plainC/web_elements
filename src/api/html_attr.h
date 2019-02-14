#ifndef __WE_API_HTML_ATTR_H
#define __WE_API_HTML_ATTR_H

#define we_api_html_attr_build(Tag,Value) \
    W_NEW(we_elem_html_attr, .tag = W_CAT(we_elem_html_attr_tag_,Tag), .value = Value)

#define attrACCEPT(v) we_api_html_attr_build(accept,v)
#define attrACCEPT_CHARSET(v) we_api_html_attr_build(accept_charset,v)
#define attrACCESSKEY(v) we_api_html_attr_build(accesskey,v)
#define attrACTION(v) we_api_html_attr_build(action,v)
#define attrALIGN(v) we_api_html_attr_build(align,v)
#define attrALLOW(v) we_api_html_attr_build(allow,v)
#define attrALT(v) we_api_html_attr_build(alt,v)
#define attrASYNC(v) we_api_html_attr_build(async,v)
#define attrAUTOCAPITALIZE(v) we_api_html_attr_build(autocapitalize,v)
#define attrAUTOCOMPLETE(v) we_api_html_attr_build(autocomplete,v)
#define attrAUTOFOCUS(v) we_api_html_attr_build(autofocus,v)
#define attrAUTOPLAY(v) we_api_html_attr_build(autoplay,v)
#define attrBGCOLOR(v) we_api_html_attr_build(bgcolor,v)
#define attrBORDER(v) we_api_html_attr_build(border,v)
#define attrBUFFERED(v) we_api_html_attr_build(buffered,v)
#define attrCHALLENGE(v) we_api_html_attr_build(challenge,v)
#define attrCHARSET(v) we_api_html_attr_build(charset,v)
#define attrCHECKED(v) we_api_html_attr_build(checked,v)
#define attrCITE(v) we_api_html_attr_build(cite,v)
#define attrCLASS(v) we_api_html_attr_build(class,v)
#define attrCODE(v) we_api_html_attr_build(code,v)
#define attrCODEBASE(v) we_api_html_attr_build(codebase,v)
#define attrCOLOR(v) we_api_html_attr_build(color,v)
#define attrCOLS(v) we_api_html_attr_build(cols,v)
#define attrCOLSPAN(v) we_api_html_attr_build(colspan,v)
#define attrCONTENT(v) we_api_html_attr_build(content,v)
#define attrCONTENTEDITABLE(v) we_api_html_attr_build(contenteditable,v)
#define attrCONTEXTMENU(v) we_api_html_attr_build(contextmenu,v)
#define attrCONTROLS(v) we_api_html_attr_build(controls,v)
#define attrCOORDS(v) we_api_html_attr_build(coords,v)
#define attrCROSSORIGIN(v) we_api_html_attr_build(crossorigin,v)
#define attrCSP(v) we_api_html_attr_build(csp,v)
#define attrDATA(v) we_api_html_attr_build(data,v)
#define attrDATA_(v) we_api_html_attr_build(data_,v)
#define attrDATETIME(v) we_api_html_attr_build(datetime,v)
#define attrDECODING(v) we_api_html_attr_build(decoding,v)
#define attrDEFAULT(v) we_api_html_attr_build(default,v)
#define attrDEFER(v) we_api_html_attr_build(defer,v)
#define attrDIR(v) we_api_html_attr_build(dir,v)
#define attrDIRNAME(v) we_api_html_attr_build(dirname,v)
#define attrDISABLED(v) we_api_html_attr_build(disabled,v)
#define attrDOWNLOAD(v) we_api_html_attr_build(download,v)
#define attrDRAGGABLE(v) we_api_html_attr_build(draggable,v)
#define attrDROPZONE(v) we_api_html_attr_build(dropzone,v)
#define attrENCTYPE(v) we_api_html_attr_build(enctype,v)
#define attrFOR(v) we_api_html_attr_build(for,v)
#define attrFORM(v) we_api_html_attr_build(form,v)
#define attrFORMACTION(v) we_api_html_attr_build(formaction,v)
#define attrHEADERS(v) we_api_html_attr_build(headers,v)
#define attrHEIGHT(v) we_api_html_attr_build(height,v)
#define attrHIDDEN(v) we_api_html_attr_build(hidden,v)
#define attrHIGH(v) we_api_html_attr_build(high,v)
#define attrHREF(v) we_api_html_attr_build(href,v)
#define attrHREFLANG(v) we_api_html_attr_build(hreflang,v)
#define attrHTTP_EQUIV(v) we_api_html_attr_build(http_equiv,v)
#define attrICON(v) we_api_html_attr_build(icon,v)
#define attrID(v) we_api_html_attr_build(id,v)
#define attrIMPORTANCE(v) we_api_html_attr_build(importance,v)
#define attrINTEGRITY(v) we_api_html_attr_build(integrity,v)
#define attrISMAP(v) we_api_html_attr_build(ismap,v)
#define attrITEMPROP(v) we_api_html_attr_build(itemprop,v)
#define attrKEYTYPE(v) we_api_html_attr_build(keytype,v)
#define attrKIND(v) we_api_html_attr_build(kind,v)
#define attrLABEL(v) we_api_html_attr_build(label,v)
#define attrLANG(v) we_api_html_attr_build(lang,v)
#define attrLANGUAGE(v) we_api_html_attr_build(language,v)
#define attrLAZYLOAD(v) we_api_html_attr_build(lazyload,v)
#define attrLIST(v) we_api_html_attr_build(list,v)
#define attrLOOP(v) we_api_html_attr_build(loop,v)
#define attrLOW(v) we_api_html_attr_build(low,v)
#define attrMANIFEST(v) we_api_html_attr_build(manifest,v)
#define attrMAX(v) we_api_html_attr_build(max,v)
#define attrMAXLENGTH(v) we_api_html_attr_build(maxlength,v)
#define attrMINLENGTH(v) we_api_html_attr_build(minlength,v)
#define attrMEDIA(v) we_api_html_attr_build(media,v)
#define attrMETHOD(v) we_api_html_attr_build(method,v)
#define attrMIN(v) we_api_html_attr_build(min,v)
#define attrMULTIPLE(v) we_api_html_attr_build(multiple,v)
#define attrMUTED(v) we_api_html_attr_build(muted,v)
#define attrNAME(v) we_api_html_attr_build(name,v)
#define attrNOVALIDATE(v) we_api_html_attr_build(novalidate,v)
#define attrOPEN(v) we_api_html_attr_build(open,v)
#define attrOPTIMUM(v) we_api_html_attr_build(optimum,v)
#define attrPATTERN(v) we_api_html_attr_build(pattern,v)
#define attrPING(v) we_api_html_attr_build(ping,v)
#define attrPLACEHOLDER(v) we_api_html_attr_build(placeholder,v)
#define attrPOSTER(v) we_api_html_attr_build(poster,v)
#define attrPRELOAD(v) we_api_html_attr_build(preload,v)
#define attrRADIOGROUP(v) we_api_html_attr_build(radiogroup,v)
#define attrREADONLY(v) we_api_html_attr_build(readonly,v)
#define attrREFERRERPOLICY(v) we_api_html_attr_build(referrerpolicy,v)
#define attrREL(v) we_api_html_attr_build(rel,v)
#define attrREQUIRED(v) we_api_html_attr_build(required,v)
#define attrREVERSED(v) we_api_html_attr_build(reversed,v)
#define attrROWS(v) we_api_html_attr_build(rows,v)
#define attrROWSPAN(v) we_api_html_attr_build(rowspan,v)
#define attrSANDBOX(v) we_api_html_attr_build(sandbox,v)
#define attrSCOPE(v) we_api_html_attr_build(scope,v)
#define attrSCOPED(v) we_api_html_attr_build(scoped,v)
#define attrSELECTED(v) we_api_html_attr_build(selected,v)
#define attrSHAPE(v) we_api_html_attr_build(shape,v)
#define attrSIZE(v) we_api_html_attr_build(size,v)
#define attrSIZEZ(v) we_api_html_attr_build(sizes,v)
#define attrSLOT(v) we_api_html_attr_build(slot,v)
#define attrSPAN(v) we_api_html_attr_build(span,v)
#define attrSPELLCHECK(v) we_api_html_attr_build(spellcheck,v)
#define attrSRC(v) we_api_html_attr_build(src,v)
#define attrSRCDOC(v) we_api_html_attr_build(srcdoc,v)
#define attrSRCLANG(v) we_api_html_attr_build(srclang,v)
#define attrSRCSET(v) we_api_html_attr_build(srcset,v)
#define attrSTART(v) we_api_html_attr_build(start,v)
#define attrSTEP(v) we_api_html_attr_build(step,v)
#define attrSTYLE(v) we_api_html_attr_build(style,v)
#define attrSUMMARY(v) we_api_html_attr_build(summary,v)
#define attrTABINDEX(v) we_api_html_attr_build(tabindex,v)
#define attrTARGET(v) we_api_html_attr_build(target,v)
#define attrTITLE(v) we_api_html_attr_build(title,v)
#define attrTRANSLATE(v) we_api_html_attr_build(translate,v)
#define attrTYPE(v) we_api_html_attr_build(type,v)
#define attrUSEMAP(v) we_api_html_attr_build(usemap,v)
#define attrVALUE(v) we_api_html_attr_build(value,v)
#define attrWIDTH(v) we_api_html_attr_build(width,v)

#endif
