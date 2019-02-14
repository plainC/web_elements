#ifndef __WE_API_HTML_H
#define __WE_API_HTML_H

#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/control/expr_if.hpp>
#include <boost/preprocessor/comparison/equal.hpp>

#include <stdarg.h>
#include <stdlib.h>
#include <wondermacros/meta/variadic_rest_n.h>
#include <wondermacros/array/dynamic_array.h>


static inline struct we_elem_html*
we_api_html_append_children(struct we_elem_html* self, struct we** elems)
{
    for (int i=0; elems[i]; i++) {
        W_CALL(self,append_child)(elems[i]);
    }

    return self;
}

static inline struct we**
we_api_html_dynamic_array_build(int nbr_of_elems, ...)
{
    struct we** array = NULL;
    va_list ap;
    va_start(ap, nbr_of_elems);
    for (int i=0; i < nbr_of_elems; i++)
        W_DYNAMIC_ARRAY_PUSH(array, va_arg(ap, struct we*));
    va_end(ap);
    return array;
}

#define we_api_html_build(...)                                                       \
    (void*) we_api_html_append_children(                                             \
        W_NEW(we_elem_html,                                                          \
            .tag = W_CAT(we_elem_html_tag_,BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)),   \
            .attrs = NULL,                                                           \
            .next = NULL),                                                           \
        (struct we*[BOOST_PP_VARIADIC_SIZE(__VA_ARGS__)])                            \
            {W_VARIADIC_REST_N(0,__VA_ARGS__)} )


#define htmlA(...) we_api_html_build(a,__VA_ARGS__)
#define htmlABBR(...) we_api_html_build(abbr,__VA_ARGS__)
#define htmlADDRESS(...) we_api_html_build(address,__VA_ARGS__)
#define htmlAREA(...) we_api_html_build(area,__VA_ARGS__)
#define htmlARTICLE(...) we_api_html_build(article,__VA_ARGS__)
#define htmlASIDE(...) we_api_html_build(aside,__VA_ARGS__)
#define htmlAPPLET(...) we_api_html_build(applet,__VA_ARGS__)
#define htmlAUDIO(...) we_api_html_build(audio,__VA_ARGS__)
#define htmlB(...) we_api_html_build(b,__VA_ARGS__)
#define htmlBASE(...) we_api_html_build(base,__VA_ARGS__)
#define htmlBASEFONT(...) we_api_html_build(basefont,__VA_ARGS__)
#define htmlBDI(...) we_api_html_build(bdi,__VA_ARGS__)
#define htmlBDO(...) we_api_html_build(bdo,__VA_ARGS__)
#define htmlBLOCKQUOTE(...) we_api_html_build(blockquote,__VA_ARGS__)
#define htmlBODY(...) we_api_html_build(body,__VA_ARGS__)
#define htmlBR(...) we_api_html_build(br,__VA_ARGS__)
#define htmlBUTTON(...) we_api_html_build(button,__VA_ARGS__)
#define htmlCANVAS(...) we_api_html_build(canvas,__VA_ARGS__)
#define htmlCAPTION(...) we_api_html_build(caption,__VA_ARGS__)
#define htmlCENTER(...) we_api_html_build(center,__VA_ARGS__)
#define htmlCITE(...) we_api_html_build(cite,__VA_ARGS__)
#define htmlCODE(...) we_api_html_build(code,__VA_ARGS__)
#define htmlCOL(...) we_api_html_build(col,__VA_ARGS__)
#define htmlCOLGROUP(...) we_api_html_build(colgroup,__VA_ARGS__)
#define htmlDATA(...) we_api_html_build(data,__VA_ARGS__)
#define htmlDATALIST(...) we_api_html_build(datalist,__VA_ARGS__)
#define htmlDD(...) we_api_html_build(dd,__VA_ARGS__)
#define htmlDEL(...) we_api_html_build(del,__VA_ARGS__)
#define htmlDETAILS(...) we_api_html_build(details,__VA_ARGS__)
#define htmlDFN(...) we_api_html_build(dfn,__VA_ARGS__)
#define htmlDIALOG(...) we_api_html_build(dialog,__VA_ARGS__)
#define htmlDIR(...) we_api_html_build(dir,__VA_ARGS__)
#define htmlDIV(...) we_api_html_build(div,__VA_ARGS__)
#define htmlDL(...) we_api_html_build(dl,__VA_ARGS__)
#define htmlDT(...) we_api_html_build(dt,__VA_ARGS__)
#define htmlEM(...) we_api_html_build(em,__VA_ARGS__)
#define htmlEMBED(...) we_api_html_build(embed,__VA_ARGS__)
#define htmlFIELDSET(...) we_api_html_build(fieldset,__VA_ARGS__)
#define htmlFIGCAPTION(...) we_api_html_build(figcaption,__VA_ARGS__)
#define htmlFIGURE(...) we_api_html_build(figure,__VA_ARGS__)
#define htmlFONT(...) we_api_html_build(font,__VA_ARGS__)
#define htmlFOOTER(...) we_api_html_build(footer,__VA_ARGS__)
#define htmlform(...) we_api_html_build(form,__VA_ARGS__)
#define htmlH1(...) we_api_html_build(h1,__VA_ARGS__)
#define htmlH2(...) we_api_html_build(h2,__VA_ARGS__)
#define htmlH3(...) we_api_html_build(h3,__VA_ARGS__)
#define htmlH4(...) we_api_html_build(h4,__VA_ARGS__)
#define htmlH5(...) we_api_html_build(h5,__VA_ARGS__)
#define htmlH6(...) we_api_html_build(h6,__VA_ARGS__)
#define htmlHEAD(...) we_api_html_build(head,__VA_ARGS__)
#define htmlHEADER(...) we_api_html_build(header,__VA_ARGS__)
#define htmlHGROUP(...) we_api_html_build(hgroup,__VA_ARGS__)
#define htmlHR(...) we_api_html_build(hr,__VA_ARGS__)
#define htmlHTML(...) we_api_html_build(html,__VA_ARGS__)
#define htmlI(...) we_api_html_build(i,__VA_ARGS__)
#define htmlIFRAME(...) we_api_html_build(iframe,__VA_ARGS__)
#define htmlIMG(...) we_api_html_build(img,__VA_ARGS__)
#define htmlINPUT(...) we_api_html_build(input,__VA_ARGS__)
#define htmlINS(...) we_api_html_build(ins,__VA_ARGS__)
#define htmlKDB(...) we_api_html_build(kbd,__VA_ARGS__)
#define htmlLABEL(...) we_api_html_build(label,__VA_ARGS__)
#define htmlLEGEND(...) we_api_html_build(legend,__VA_ARGS__)
#define htmlLI(...) we_api_html_build(li,__VA_ARGS__)
#define htmlLINK(...) we_api_html_build(link,__VA_ARGS__)
#define htmlLSINDEX(...) we_api_html_build(lsindex,__VA_ARGS__)
#define htmlMAIN(...) we_api_html_build(main,__VA_ARGS__)
#define htmlMAP(...) we_api_html_build(map,__VA_ARGS__)
#define htmlMARK(...) we_api_html_build(mark,__VA_ARGS__)
#define htmlMENU(...) we_api_html_build(menu,__VA_ARGS__)
#define htmlMETA(...) we_api_html_build(meta,__VA_ARGS__)
#define htmlMETER(...) we_api_html_build(meter,__VA_ARGS__)
#define htmlNAV(...) we_api_html_build(nav,__VA_ARGS__)
#define htmlNOFRAMES(...) we_api_html_build(noframes,__VA_ARGS__)
#define htmlNOSCRIPT(...) we_api_html_build(noscript,__VA_ARGS__)
#define htmlOBJECT(...) we_api_html_build(object,__VA_ARGS__)
#define htmlOL(...) we_api_html_build(ol,__VA_ARGS__)
#define htmlOPTGROUP(...) we_api_html_build(optgroup,__VA_ARGS__)
#define htmlOPTION(...) we_api_html_build(option,__VA_ARGS__)
#define htmlOUTPUT(...) we_api_html_build(output,__VA_ARGS__)
#define htmlP(...) we_api_html_build(p,__VA_ARGS__)
#define htmlPARAM(...) we_api_html_build(param,__VA_ARGS__)
#define htmlPICTURE(...) we_api_html_build(picture,__VA_ARGS__)
#define htmlPRE(...) we_api_html_build(pre,__VA_ARGS__)
#define htmlPROGRESS(...) we_api_html_build(progress,__VA_ARGS__)
#define htmlQ(...) we_api_html_build(q,__VA_ARGS__)
#define htmlRP(...) we_api_html_build(rp,__VA_ARGS__)
#define htmlRT(...) we_api_html_build(rt,__VA_ARGS__)
#define htmlRTC(...) we_api_html_build(rtc,__VA_ARGS__)
#define htmlRUBY(...) we_api_html_build(ruby,__VA_ARGS__)
#define htmlS(...) we_api_html_build(s,__VA_ARGS__)
#define htmlSAMP(...) we_api_html_build(samp,__VA_ARGS__)
#define htmlSCRIPT(...) we_api_html_build(script,__VA_ARGS__)
#define htmlSECTION(...) we_api_html_build(section,__VA_ARGS__)
#define htmlSELECT(...) we_api_html_build(select,__VA_ARGS__)
#define htmlSLOT(...) we_api_html_build(slot,__VA_ARGS__)
#define htmlSMALL(...) we_api_html_build(small,__VA_ARGS__)
#define htmlSOURCE(...) we_api_html_build(source,__VA_ARGS__)
#define htmlSPAN(...) we_api_html_build(span,__VA_ARGS__)
#define htmlSTRIKE(...) we_api_html_build(strike,__VA_ARGS__)
#define htmlSTRONG(...) we_api_html_build(strong,__VA_ARGS__)
#define htmlSTYLE(...) we_api_html_build(style,__VA_ARGS__)
#define htmlSUB(...) we_api_html_build(sub,__VA_ARGS__)
#define htmlSUMMARY(...) we_api_html_build(summary,__VA_ARGS__)
#define htmlSUP(...) we_api_html_build(sup,__VA_ARGS__)
#define htmlTABLE(...) we_api_html_build(table,__VA_ARGS__)
#define htmlTBODY(...) we_api_html_build(tbody,__VA_ARGS__)
#define htmlTD(...) we_api_html_build(td,__VA_ARGS__)
#define htmlTEMPLATE(...) we_api_html_build(template,__VA_ARGS__)
#define htmlTEXTAREA(...) we_api_html_build(textarea,__VA_ARGS__)
#define htmlTFOOT(...) we_api_html_build(tfoot,__VA_ARGS__)
#define htmlTH(...) we_api_html_build(th,__VA_ARGS__)
#define htmlTHEAD(...) we_api_html_build(thead,__VA_ARGS__)
#define htmlTIME(...) we_api_html_build(time,__VA_ARGS__)
#define htmlTITLE(...) we_api_html_build(title,__VA_ARGS__)
#define htmlTR(...) we_api_html_build(tr,__VA_ARGS__)
#define htmlTRACK(...) we_api_html_build(track,__VA_ARGS__)
#define htmlU(...) we_api_html_build(u,__VA_ARGS__)
#define htmlUL(...) we_api_html_build(ul,__VA_ARGS__)
#define htmlVAR(...) we_api_html_build(var,__VA_ARGS__)
#define htmlVIDEO(...) we_api_html_build(video,__VA_ARGS__)
#define htmlWBR(...) we_api_html_build(wbr,__VA_ARGS__)

#endif
