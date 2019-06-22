### --- icu ---###

#set(ICU_FULL_DIR
#  #third_party/icu/
#  #../../thirdparty/skia/third_party/externals/icu/
#  #../../thirdparty/icu/
#  ${CHROMIUM_DIR}/third_party/icu/
#)
#
#set(OWN_ICU_INCLUDE_DIRS
#  ${ICU_FULL_DIR}
#  #${ICU_FULL_DIR}source/common/unicode
#  #${ICU_FULL_DIR}source/common
#  #${ICU_FULL_DIR}source/i18n
#  ${ICU_FULL_DIR}unicode
#)
#
## find source/i18n -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
## find source/common -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
## see https://github.com/unicode-org/icu/tree/master/icu4c/source/common
## see https://chromium.googlesource.com/chromium/deps/icu/+/refs/heads/master/icu.gypi
#set(ICU_SOURCES
# ${ICU_FULL_DIR}cmemory.c
# ${ICU_FULL_DIR}cstring.c
# ${ICU_FULL_DIR}cwchar.c
# ${ICU_FULL_DIR}decContext.c
# ${ICU_FULL_DIR}decNumber.c
# ${ICU_FULL_DIR}icudataver.c
# ${ICU_FULL_DIR}locmap.c
# ${ICU_FULL_DIR}propsvec.c
# ${ICU_FULL_DIR}uarrsort.c
# ${ICU_FULL_DIR}ubidi.c
# ${ICU_FULL_DIR}ubidiln.c
# ${ICU_FULL_DIR}ubidiwrt.c
# ${ICU_FULL_DIR}ubidi_props.c
# ${ICU_FULL_DIR}ucat.c
# ${ICU_FULL_DIR}uchar.c
# ${ICU_FULL_DIR}ucmndata.c
# ${ICU_FULL_DIR}ucnv.c
# ${ICU_FULL_DIR}ucnvdisp.c
# ${ICU_FULL_DIR}ucnvhz.c
# ${ICU_FULL_DIR}ucnvisci.c
# ${ICU_FULL_DIR}ucnvlat1.c
# ${ICU_FULL_DIR}ucnvscsu.c
# ${ICU_FULL_DIR}ucnv_cb.c
# ${ICU_FULL_DIR}ucnv_cnv.c
# ${ICU_FULL_DIR}ucnv_ct.c
# ${ICU_FULL_DIR}ucnv_err.c
# ${ICU_FULL_DIR}ucnv_lmb.c
# ${ICU_FULL_DIR}ucnv_set.c
# ${ICU_FULL_DIR}ucnv_u16.c
# ${ICU_FULL_DIR}ucnv_u32.c
# ${ICU_FULL_DIR}ucnv_u7.c
# ${ICU_FULL_DIR}ucnv_u8.c
# ${ICU_FULL_DIR}udatamem.c
# ${ICU_FULL_DIR}udataswp.c
# ${ICU_FULL_DIR}uenum.c
# ${ICU_FULL_DIR}uhash.c
# ${ICU_FULL_DIR}uinvchar.c
# ${ICU_FULL_DIR}ulist.c
# ${ICU_FULL_DIR}ulocdata.c
# ${ICU_FULL_DIR}uloc_tag.c
# ${ICU_FULL_DIR}umapfile.c
# ${ICU_FULL_DIR}umath.c
# ${ICU_FULL_DIR}uresdata.c
# ${ICU_FULL_DIR}ures_cnv.c
# ${ICU_FULL_DIR}uscript.c
# ${ICU_FULL_DIR}usc_impl.c
# ${ICU_FULL_DIR}ustrfmt.c
# ${ICU_FULL_DIR}utf_impl.c
# ${ICU_FULL_DIR}utmscale.c
# ${ICU_FULL_DIR}utrace.c
# ${ICU_FULL_DIR}utypes.c
# ${ICU_FULL_DIR}wintz.c
# ${ICU_FULL_DIR}stubdata.c
# ${ICU_FULL_DIR}affixpatternparser.cpp
# ${ICU_FULL_DIR}alphaindex.cpp
# ${ICU_FULL_DIR}anytrans.cpp
# ${ICU_FULL_DIR}appendable.cpp
# ${ICU_FULL_DIR}astro.cpp
# ${ICU_FULL_DIR}basictz.cpp
# ${ICU_FULL_DIR}bmpset.cpp
# ${ICU_FULL_DIR}bocsu.cpp
# ${ICU_FULL_DIR}brkeng.cpp
# ${ICU_FULL_DIR}brkiter.cpp
# ${ICU_FULL_DIR}brktrans.cpp
# ${ICU_FULL_DIR}buddhcal.cpp
# ${ICU_FULL_DIR}bytestream.cpp
# ${ICU_FULL_DIR}bytestrie.cpp
# ${ICU_FULL_DIR}bytestriebuilder.cpp
# ${ICU_FULL_DIR}bytestrieiterator.cpp
# ${ICU_FULL_DIR}calendar.cpp
# ${ICU_FULL_DIR}caniter.cpp
# ${ICU_FULL_DIR}casetrn.cpp
# ${ICU_FULL_DIR}cecal.cpp
# ${ICU_FULL_DIR}chariter.cpp
# ${ICU_FULL_DIR}charstr.cpp
# ${ICU_FULL_DIR}chnsecal.cpp
# ${ICU_FULL_DIR}choicfmt.cpp
# ${ICU_FULL_DIR}coleitr.cpp
# ${ICU_FULL_DIR}coll.cpp
# ${ICU_FULL_DIR}collation.cpp
# ${ICU_FULL_DIR}collationbuilder.cpp
# ${ICU_FULL_DIR}collationcompare.cpp
# ${ICU_FULL_DIR}collationdata.cpp
# ${ICU_FULL_DIR}collationdatabuilder.cpp
# ${ICU_FULL_DIR}collationdatareader.cpp
# ${ICU_FULL_DIR}collationdatawriter.cpp
# ${ICU_FULL_DIR}collationfastlatin.cpp
# ${ICU_FULL_DIR}collationfastlatinbuilder.cpp
# ${ICU_FULL_DIR}collationfcd.cpp
# ${ICU_FULL_DIR}collationiterator.cpp
# ${ICU_FULL_DIR}collationkeys.cpp
# ${ICU_FULL_DIR}collationroot.cpp
# ${ICU_FULL_DIR}collationrootelements.cpp
# ${ICU_FULL_DIR}collationruleparser.cpp
# ${ICU_FULL_DIR}collationsets.cpp
# ${ICU_FULL_DIR}collationsettings.cpp
# ${ICU_FULL_DIR}collationtailoring.cpp
# ${ICU_FULL_DIR}collationweights.cpp
# ${ICU_FULL_DIR}compactdecimalformat.cpp
# ${ICU_FULL_DIR}coptccal.cpp
# ${ICU_FULL_DIR}cpdtrans.cpp
# ${ICU_FULL_DIR}csdetect.cpp
# ${ICU_FULL_DIR}csmatch.cpp
# ${ICU_FULL_DIR}csr2022.cpp
# ${ICU_FULL_DIR}csrecog.cpp
# ${ICU_FULL_DIR}csrmbcs.cpp
# ${ICU_FULL_DIR}csrsbcs.cpp
# ${ICU_FULL_DIR}csrucode.cpp
# ${ICU_FULL_DIR}csrutf8.cpp
# ${ICU_FULL_DIR}curramt.cpp
# ${ICU_FULL_DIR}currfmt.cpp
# ${ICU_FULL_DIR}currpinf.cpp
# ${ICU_FULL_DIR}currunit.cpp
# ${ICU_FULL_DIR}dangical.cpp
# ${ICU_FULL_DIR}datefmt.cpp
# ${ICU_FULL_DIR}dcfmtsym.cpp
# ${ICU_FULL_DIR}decfmtst.cpp
# ${ICU_FULL_DIR}decimalformatpattern.cpp
# ${ICU_FULL_DIR}decimfmt.cpp
# ${ICU_FULL_DIR}decimfmtimpl.cpp
# ${ICU_FULL_DIR}dictbe.cpp
# ${ICU_FULL_DIR}dictionarydata.cpp
# ${ICU_FULL_DIR}digitaffix.cpp
# ${ICU_FULL_DIR}digitaffixesandpadding.cpp
# ${ICU_FULL_DIR}digitformatter.cpp
# ${ICU_FULL_DIR}digitgrouping.cpp
# ${ICU_FULL_DIR}digitinterval.cpp
# ${ICU_FULL_DIR}digitlst.cpp
# ${ICU_FULL_DIR}dtfmtsym.cpp
# ${ICU_FULL_DIR}dtintrv.cpp
# ${ICU_FULL_DIR}dtitvfmt.cpp
# ${ICU_FULL_DIR}dtitvinf.cpp
# ${ICU_FULL_DIR}dtptngen.cpp
# ${ICU_FULL_DIR}dtrule.cpp
# ${ICU_FULL_DIR}errorcode.cpp
# ${ICU_FULL_DIR}esctrn.cpp
# ${ICU_FULL_DIR}ethpccal.cpp
# ${ICU_FULL_DIR}filteredbrk.cpp
# ${ICU_FULL_DIR}filterednormalizer2.cpp
# ${ICU_FULL_DIR}fmtable.cpp
# ${ICU_FULL_DIR}fmtable_cnv.cpp
# ${ICU_FULL_DIR}format.cpp
# ${ICU_FULL_DIR}fphdlimp.cpp
# ${ICU_FULL_DIR}fpositer.cpp
# ${ICU_FULL_DIR}funcrepl.cpp
# ${ICU_FULL_DIR}gender.cpp
# ${ICU_FULL_DIR}gregocal.cpp
# ${ICU_FULL_DIR}gregoimp.cpp
# ${ICU_FULL_DIR}hebrwcal.cpp
# ${ICU_FULL_DIR}icuplug.cpp
# ${ICU_FULL_DIR}identifier_info.cpp
# ${ICU_FULL_DIR}indiancal.cpp
# ${ICU_FULL_DIR}inputext.cpp
# ${ICU_FULL_DIR}islamcal.cpp
# ${ICU_FULL_DIR}japancal.cpp
# ${ICU_FULL_DIR}listformatter.cpp
# ${ICU_FULL_DIR}loadednormalizer2impl.cpp
# ${ICU_FULL_DIR}locavailable.cpp
# ${ICU_FULL_DIR}locbased.cpp
# ${ICU_FULL_DIR}locdispnames.cpp
# ${ICU_FULL_DIR}locdspnm.cpp
# ${ICU_FULL_DIR}locid.cpp
# ${ICU_FULL_DIR}loclikely.cpp
# ${ICU_FULL_DIR}locresdata.cpp
# ${ICU_FULL_DIR}locutil.cpp
# ${ICU_FULL_DIR}measfmt.cpp
# ${ICU_FULL_DIR}measunit.cpp
# ${ICU_FULL_DIR}measure.cpp
# ${ICU_FULL_DIR}messagepattern.cpp
# ${ICU_FULL_DIR}msgfmt.cpp
# ${ICU_FULL_DIR}name2uni.cpp
# ${ICU_FULL_DIR}nfrs.cpp
# ${ICU_FULL_DIR}nfrule.cpp
# ${ICU_FULL_DIR}nfsubs.cpp
# ${ICU_FULL_DIR}normalizer2.cpp
# ${ICU_FULL_DIR}normalizer2impl.cpp
# ${ICU_FULL_DIR}normlzr.cpp
# ${ICU_FULL_DIR}nortrans.cpp
# ${ICU_FULL_DIR}nultrans.cpp
# ${ICU_FULL_DIR}numfmt.cpp
# ${ICU_FULL_DIR}numsys.cpp
# ${ICU_FULL_DIR}olsontz.cpp
# ${ICU_FULL_DIR}parsepos.cpp
# ${ICU_FULL_DIR}patternprops.cpp
# ${ICU_FULL_DIR}persncal.cpp
# ${ICU_FULL_DIR}pluralaffix.cpp
# ${ICU_FULL_DIR}pluralmap.cpp
# ${ICU_FULL_DIR}plurfmt.cpp
# ${ICU_FULL_DIR}plurrule.cpp
# ${ICU_FULL_DIR}precision.cpp
# ${ICU_FULL_DIR}propname.cpp
# ${ICU_FULL_DIR}punycode.cpp
# ${ICU_FULL_DIR}putil.cpp
# ${ICU_FULL_DIR}quant.cpp
# ${ICU_FULL_DIR}quantityformatter.cpp
# ${ICU_FULL_DIR}rbbi.cpp
# ${ICU_FULL_DIR}rbbidata.cpp
# ${ICU_FULL_DIR}rbbinode.cpp
# ${ICU_FULL_DIR}rbbirb.cpp
# ${ICU_FULL_DIR}rbbiscan.cpp
# ${ICU_FULL_DIR}rbbisetb.cpp
# ${ICU_FULL_DIR}rbbistbl.cpp
# ${ICU_FULL_DIR}rbbitblb.cpp
# ${ICU_FULL_DIR}rbnf.cpp
# ${ICU_FULL_DIR}rbt.cpp
# ${ICU_FULL_DIR}rbtz.cpp
# ${ICU_FULL_DIR}rbt_data.cpp
# ${ICU_FULL_DIR}rbt_pars.cpp
# ${ICU_FULL_DIR}rbt_rule.cpp
# ${ICU_FULL_DIR}rbt_set.cpp
# ${ICU_FULL_DIR}regexcmp.cpp
# ${ICU_FULL_DIR}regeximp.cpp
# ${ICU_FULL_DIR}regexst.cpp
# ${ICU_FULL_DIR}regextxt.cpp
# ${ICU_FULL_DIR}region.cpp
# ${ICU_FULL_DIR}reldatefmt.cpp
# ${ICU_FULL_DIR}reldtfmt.cpp
# ${ICU_FULL_DIR}rematch.cpp
# ${ICU_FULL_DIR}remtrans.cpp
# ${ICU_FULL_DIR}repattrn.cpp
# ${ICU_FULL_DIR}resbund.cpp
# ${ICU_FULL_DIR}resbund_cnv.cpp
# ${ICU_FULL_DIR}rulebasedcollator.cpp
# ${ICU_FULL_DIR}ruleiter.cpp
# ${ICU_FULL_DIR}schriter.cpp
# ${ICU_FULL_DIR}scientificnumberformatter.cpp
# ${ICU_FULL_DIR}scriptset.cpp
# ${ICU_FULL_DIR}search.cpp
# ${ICU_FULL_DIR}selfmt.cpp
# ${ICU_FULL_DIR}serv.cpp
# ${ICU_FULL_DIR}servlk.cpp
# ${ICU_FULL_DIR}servlkf.cpp
# ${ICU_FULL_DIR}servls.cpp
# ${ICU_FULL_DIR}servnotf.cpp
# ${ICU_FULL_DIR}servrbf.cpp
# ${ICU_FULL_DIR}servslkf.cpp
# ${ICU_FULL_DIR}sharedbreakiterator.cpp
# ${ICU_FULL_DIR}sharedobject.cpp
# ${ICU_FULL_DIR}simplepatternformatter.cpp
# ${ICU_FULL_DIR}simpletz.cpp
# ${ICU_FULL_DIR}smallintformatter.cpp
# ${ICU_FULL_DIR}smpdtfmt.cpp
# ${ICU_FULL_DIR}smpdtfst.cpp
# ${ICU_FULL_DIR}sortkey.cpp
# ${ICU_FULL_DIR}stringpiece.cpp
# ${ICU_FULL_DIR}stringtriebuilder.cpp
# ${ICU_FULL_DIR}strmatch.cpp
# ${ICU_FULL_DIR}strrepl.cpp
# ${ICU_FULL_DIR}stsearch.cpp
# ${ICU_FULL_DIR}taiwncal.cpp
# ${ICU_FULL_DIR}timezone.cpp
# ${ICU_FULL_DIR}titletrn.cpp
# ${ICU_FULL_DIR}tmunit.cpp
# ${ICU_FULL_DIR}tmutamt.cpp
# ${ICU_FULL_DIR}tmutfmt.cpp
# ${ICU_FULL_DIR}tolowtrn.cpp
# ${ICU_FULL_DIR}toupptrn.cpp
# ${ICU_FULL_DIR}translit.cpp
# ${ICU_FULL_DIR}transreg.cpp
# ${ICU_FULL_DIR}tridpars.cpp
# ${ICU_FULL_DIR}tzfmt.cpp
# ${ICU_FULL_DIR}tzgnames.cpp
# ${ICU_FULL_DIR}tznames.cpp
# ${ICU_FULL_DIR}tznames_impl.cpp
# ${ICU_FULL_DIR}tzrule.cpp
# ${ICU_FULL_DIR}tztrans.cpp
# ${ICU_FULL_DIR}ubrk.cpp
# ${ICU_FULL_DIR}ucal.cpp
# ${ICU_FULL_DIR}ucase.cpp
# ${ICU_FULL_DIR}ucasemap.cpp
# ${ICU_FULL_DIR}ucasemap_titlecase_brkiter.cpp
# ${ICU_FULL_DIR}ucharstrie.cpp
# ${ICU_FULL_DIR}ucharstriebuilder.cpp
# ${ICU_FULL_DIR}ucharstrieiterator.cpp
# ${ICU_FULL_DIR}uchriter.cpp
# ${ICU_FULL_DIR}ucln_cmn.cpp
# ${ICU_FULL_DIR}ucln_in.cpp
# ${ICU_FULL_DIR}ucnv2022.cpp
# ${ICU_FULL_DIR}ucnvbocu.cpp
# ${ICU_FULL_DIR}ucnvmbcs.cpp
# ${ICU_FULL_DIR}ucnvsel.cpp
# ${ICU_FULL_DIR}ucnv_bld.cpp
# ${ICU_FULL_DIR}ucnv_ext.cpp
# ${ICU_FULL_DIR}ucnv_io.cpp
# ${ICU_FULL_DIR}ucol.cpp
# ${ICU_FULL_DIR}ucoleitr.cpp
# ${ICU_FULL_DIR}ucol_res.cpp
# ${ICU_FULL_DIR}ucol_sit.cpp
# ${ICU_FULL_DIR}ucol_swp.cpp
# ${ICU_FULL_DIR}ucsdet.cpp
# ${ICU_FULL_DIR}ucurr.cpp
# ${ICU_FULL_DIR}udat.cpp
# ${ICU_FULL_DIR}udata.cpp
# ${ICU_FULL_DIR}udateintervalformat.cpp
# ${ICU_FULL_DIR}udatpg.cpp
# ${ICU_FULL_DIR}ufieldpositer.cpp
# ${ICU_FULL_DIR}uhash_us.cpp
# ${ICU_FULL_DIR}uidna.cpp
# ${ICU_FULL_DIR}uinit.cpp
# ${ICU_FULL_DIR}uiter.cpp
# ${ICU_FULL_DIR}uitercollationiterator.cpp
# ${ICU_FULL_DIR}ulistformatter.cpp
# ${ICU_FULL_DIR}uloc.cpp
# ${ICU_FULL_DIR}uloc_keytype.cpp
# ${ICU_FULL_DIR}umsg.cpp
# ${ICU_FULL_DIR}umutex.cpp
# ${ICU_FULL_DIR}unames.cpp
# ${ICU_FULL_DIR}unesctrn.cpp
# ${ICU_FULL_DIR}uni2name.cpp
# ${ICU_FULL_DIR}unifiedcache.cpp
# ${ICU_FULL_DIR}unifilt.cpp
# ${ICU_FULL_DIR}unifunct.cpp
# ${ICU_FULL_DIR}uniset.cpp
# ${ICU_FULL_DIR}unisetspan.cpp
# ${ICU_FULL_DIR}uniset_closure.cpp
# ${ICU_FULL_DIR}uniset_props.cpp
# ${ICU_FULL_DIR}unistr.cpp
# ${ICU_FULL_DIR}unistr_case.cpp
# ${ICU_FULL_DIR}unistr_case_locale.cpp
# ${ICU_FULL_DIR}unistr_cnv.cpp
# ${ICU_FULL_DIR}unistr_props.cpp
# ${ICU_FULL_DIR}unistr_titlecase_brkiter.cpp
# ${ICU_FULL_DIR}unorm.cpp
# ${ICU_FULL_DIR}unormcmp.cpp
# ${ICU_FULL_DIR}unum.cpp
# ${ICU_FULL_DIR}unumsys.cpp
# ${ICU_FULL_DIR}uobject.cpp
# ${ICU_FULL_DIR}upluralrules.cpp
# ${ICU_FULL_DIR}uprops.cpp
# ${ICU_FULL_DIR}uregex.cpp
# ${ICU_FULL_DIR}uregexc.cpp
# ${ICU_FULL_DIR}uregion.cpp
# ${ICU_FULL_DIR}uresbund.cpp
# ${ICU_FULL_DIR}uscript_props.cpp
# ${ICU_FULL_DIR}usearch.cpp
# ${ICU_FULL_DIR}uset.cpp
# ${ICU_FULL_DIR}usetiter.cpp
# ${ICU_FULL_DIR}uset_props.cpp
# ${ICU_FULL_DIR}ushape.cpp
# ${ICU_FULL_DIR}uspoof.cpp
# ${ICU_FULL_DIR}uspoof_build.cpp
# ${ICU_FULL_DIR}uspoof_conf.cpp
# ${ICU_FULL_DIR}uspoof_impl.cpp
# ${ICU_FULL_DIR}uspoof_wsconf.cpp
# ${ICU_FULL_DIR}usprep.cpp
# ${ICU_FULL_DIR}ustack.cpp
# ${ICU_FULL_DIR}ustrcase.cpp
# ${ICU_FULL_DIR}ustrcase_locale.cpp
# ${ICU_FULL_DIR}ustrenum.cpp
# ${ICU_FULL_DIR}ustring.cpp
# ${ICU_FULL_DIR}ustrtrns.cpp
# ${ICU_FULL_DIR}ustr_cnv.cpp
# ${ICU_FULL_DIR}ustr_titlecase_brkiter.cpp
# ${ICU_FULL_DIR}ustr_wcs.cpp
# ${ICU_FULL_DIR}utext.cpp
# ${ICU_FULL_DIR}utf16collationiterator.cpp
# ${ICU_FULL_DIR}utf8collationiterator.cpp
# ${ICU_FULL_DIR}util.cpp
# ${ICU_FULL_DIR}util_props.cpp
# ${ICU_FULL_DIR}utrans.cpp
# ${ICU_FULL_DIR}utrie.cpp
# ${ICU_FULL_DIR}utrie2.cpp
# ${ICU_FULL_DIR}utrie2_builder.cpp
# ${ICU_FULL_DIR}uts46.cpp
# ${ICU_FULL_DIR}uvector.cpp
# ${ICU_FULL_DIR}uvectr32.cpp
# ${ICU_FULL_DIR}uvectr64.cpp
# ${ICU_FULL_DIR}valueformatter.cpp
# ${ICU_FULL_DIR}visibledigits.cpp
# ${ICU_FULL_DIR}vtzone.cpp
# ${ICU_FULL_DIR}vzone.cpp
# ${ICU_FULL_DIR}windtfmt.cpp
# ${ICU_FULL_DIR}winnmfmt.cpp
# ${ICU_FULL_DIR}wintzimpl.cpp
# ${ICU_FULL_DIR}zonemeta.cpp
# ${ICU_FULL_DIR}zrule.cpp
# ${ICU_FULL_DIR}ztrans.cpp
#)

message(WARNING "TODO: add icu data file for BLINK, see stubdata.cpp, ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE, U_ICUDATAENTRY_IN_COMMON, icu_use_data_file_flag")

# find source/i18n -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
# find source/common -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
# see https://github.com/unicode-org/icu/tree/master/icu4c/source/common
# see https://chromium.googlesource.com/chromium/deps/icu/+/refs/heads/master/icu.gypi
set(ICU_SOURCES
  ## ${ICU_FULL_DIR}cmemory.c
 ${ICU_FULL_DIR}source/stubdata/stubdata.cpp # if 'OS == "win" or icu_use_data_file_flag==1'
  # I18N_SRC_START
 ${ICU_FULL_DIR}source/i18n/alphaindex.cpp
 ${ICU_FULL_DIR}source/i18n/anytrans.cpp
 ${ICU_FULL_DIR}source/i18n/astro.cpp
 ${ICU_FULL_DIR}source/i18n/basictz.cpp
 ${ICU_FULL_DIR}source/i18n/bocsu.cpp
 ${ICU_FULL_DIR}source/i18n/brktrans.cpp
 ${ICU_FULL_DIR}source/i18n/buddhcal.cpp
 ${ICU_FULL_DIR}source/i18n/calendar.cpp
 ${ICU_FULL_DIR}source/i18n/casetrn.cpp
 ${ICU_FULL_DIR}source/i18n/cecal.cpp
 ${ICU_FULL_DIR}source/i18n/chnsecal.cpp
 ${ICU_FULL_DIR}source/i18n/choicfmt.cpp
 ${ICU_FULL_DIR}source/i18n/coleitr.cpp
 ${ICU_FULL_DIR}source/i18n/collationbuilder.cpp
 ${ICU_FULL_DIR}source/i18n/collationcompare.cpp
 ${ICU_FULL_DIR}source/i18n/collation.cpp
 ${ICU_FULL_DIR}source/i18n/collationdatabuilder.cpp
 ${ICU_FULL_DIR}source/i18n/collationdata.cpp
 ${ICU_FULL_DIR}source/i18n/collationdatareader.cpp
 ${ICU_FULL_DIR}source/i18n/collationdatawriter.cpp
 ${ICU_FULL_DIR}source/i18n/collationfastlatinbuilder.cpp
 ${ICU_FULL_DIR}source/i18n/collationfastlatin.cpp
 ${ICU_FULL_DIR}source/i18n/collationfcd.cpp
 ${ICU_FULL_DIR}source/i18n/collationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/collationkeys.cpp
 ${ICU_FULL_DIR}source/i18n/collationroot.cpp
 ${ICU_FULL_DIR}source/i18n/collationrootelements.cpp
 ${ICU_FULL_DIR}source/i18n/collationruleparser.cpp
 ${ICU_FULL_DIR}source/i18n/collationsets.cpp
 ${ICU_FULL_DIR}source/i18n/collationsettings.cpp
 ${ICU_FULL_DIR}source/i18n/collationtailoring.cpp
 ${ICU_FULL_DIR}source/i18n/collationweights.cpp
 ${ICU_FULL_DIR}source/i18n/coll.cpp
 ${ICU_FULL_DIR}source/i18n/compactdecimalformat.cpp
 ${ICU_FULL_DIR}source/i18n/coptccal.cpp
 ${ICU_FULL_DIR}source/i18n/cpdtrans.cpp
 ${ICU_FULL_DIR}source/i18n/csdetect.cpp
 ${ICU_FULL_DIR}source/i18n/csmatch.cpp
 ${ICU_FULL_DIR}source/i18n/csr2022.cpp
 ${ICU_FULL_DIR}source/i18n/csrecog.cpp
 ${ICU_FULL_DIR}source/i18n/csrmbcs.cpp
 ${ICU_FULL_DIR}source/i18n/csrsbcs.cpp
 ${ICU_FULL_DIR}source/i18n/csrucode.cpp
 ${ICU_FULL_DIR}source/i18n/csrutf8.cpp
 ${ICU_FULL_DIR}source/i18n/curramt.cpp
 ${ICU_FULL_DIR}source/i18n/currfmt.cpp
 ${ICU_FULL_DIR}source/i18n/currpinf.cpp
 ${ICU_FULL_DIR}source/i18n/currunit.cpp
 ${ICU_FULL_DIR}source/i18n/dangical.cpp
 ${ICU_FULL_DIR}source/i18n/datefmt.cpp
 ${ICU_FULL_DIR}source/i18n/dayperiodrules.cpp
 ${ICU_FULL_DIR}source/i18n/dcfmtsym.cpp
 ${ICU_FULL_DIR}source/i18n/decContext.cpp
 ${ICU_FULL_DIR}source/i18n/decimfmt.cpp
 ${ICU_FULL_DIR}source/i18n/decNumber.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-bignum.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-bignum-dtoa.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-cached-powers.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-diy-fp.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-fast-dtoa.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-strtod.cpp
 ${ICU_FULL_DIR}source/i18n/dtfmtsym.cpp
 ${ICU_FULL_DIR}source/i18n/dtitvfmt.cpp
 ${ICU_FULL_DIR}source/i18n/dtitvinf.cpp
 ${ICU_FULL_DIR}source/i18n/dtptngen.cpp
 ${ICU_FULL_DIR}source/i18n/dtrule.cpp
 ${ICU_FULL_DIR}source/i18n/erarules.cpp
 ${ICU_FULL_DIR}source/i18n/esctrn.cpp
 ${ICU_FULL_DIR}source/i18n/ethpccal.cpp
 ${ICU_FULL_DIR}source/i18n/fmtable_cnv.cpp
 ${ICU_FULL_DIR}source/i18n/fmtable.cpp
 ${ICU_FULL_DIR}source/i18n/format.cpp
 ${ICU_FULL_DIR}source/i18n/formatted_string_builder.cpp
 ${ICU_FULL_DIR}source/i18n/formattedval_iterimpl.cpp
 ${ICU_FULL_DIR}source/i18n/formattedval_sbimpl.cpp
 ${ICU_FULL_DIR}source/i18n/formattedvalue.cpp
 ${ICU_FULL_DIR}source/i18n/fphdlimp.cpp
 ${ICU_FULL_DIR}source/i18n/fpositer.cpp
 ${ICU_FULL_DIR}source/i18n/funcrepl.cpp
 ${ICU_FULL_DIR}source/i18n/gender.cpp
 ${ICU_FULL_DIR}source/i18n/gregocal.cpp
 ${ICU_FULL_DIR}source/i18n/gregoimp.cpp
 ${ICU_FULL_DIR}source/i18n/hebrwcal.cpp
 ${ICU_FULL_DIR}source/i18n/indiancal.cpp
 ${ICU_FULL_DIR}source/i18n/inputext.cpp
 ${ICU_FULL_DIR}source/i18n/islamcal.cpp
 ${ICU_FULL_DIR}source/i18n/japancal.cpp
 ${ICU_FULL_DIR}source/i18n/listformatter.cpp
 ${ICU_FULL_DIR}source/i18n/measfmt.cpp
 ${ICU_FULL_DIR}source/i18n/measunit.cpp
 ${ICU_FULL_DIR}source/i18n/measure.cpp
 ${ICU_FULL_DIR}source/i18n/msgfmt.cpp
 ${ICU_FULL_DIR}source/i18n/name2uni.cpp
 ${ICU_FULL_DIR}source/i18n/nfrs.cpp
 ${ICU_FULL_DIR}source/i18n/nfrule.cpp
 ${ICU_FULL_DIR}source/i18n/nfsubs.cpp
 ${ICU_FULL_DIR}source/i18n/nortrans.cpp
 ${ICU_FULL_DIR}source/i18n/nounit.cpp
 ${ICU_FULL_DIR}source/i18n/nultrans.cpp
 ${ICU_FULL_DIR}source/i18n/number_affixutils.cpp
 ${ICU_FULL_DIR}source/i18n/number_asformat.cpp
 ${ICU_FULL_DIR}source/i18n/number_capi.cpp
 ${ICU_FULL_DIR}source/i18n/number_compact.cpp
 ${ICU_FULL_DIR}source/i18n/number_currencysymbols.cpp
 ${ICU_FULL_DIR}source/i18n/number_decimalquantity.cpp
 ${ICU_FULL_DIR}source/i18n/number_decimfmtprops.cpp
 ${ICU_FULL_DIR}source/i18n/number_fluent.cpp
 ${ICU_FULL_DIR}source/i18n/number_formatimpl.cpp
 ${ICU_FULL_DIR}source/i18n/number_grouping.cpp
 ${ICU_FULL_DIR}source/i18n/number_integerwidth.cpp
 ${ICU_FULL_DIR}source/i18n/number_longnames.cpp
 ${ICU_FULL_DIR}source/i18n/number_mapper.cpp
 ${ICU_FULL_DIR}source/i18n/number_modifiers.cpp
 ${ICU_FULL_DIR}source/i18n/number_multiplier.cpp
 ${ICU_FULL_DIR}source/i18n/number_notation.cpp
 ${ICU_FULL_DIR}source/i18n/number_output.cpp
 ${ICU_FULL_DIR}source/i18n/number_padding.cpp
 ${ICU_FULL_DIR}source/i18n/number_patternmodifier.cpp
 ${ICU_FULL_DIR}source/i18n/number_patternstring.cpp
 ${ICU_FULL_DIR}source/i18n/number_rounding.cpp
 ${ICU_FULL_DIR}source/i18n/number_scientific.cpp
 ${ICU_FULL_DIR}source/i18n/number_skeletons.cpp
 ${ICU_FULL_DIR}source/i18n/number_utils.cpp
 ${ICU_FULL_DIR}source/i18n/numfmt.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_affixes.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_compositions.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_currency.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_decimal.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_impl.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_parsednumber.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_scientific.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_symbols.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_validators.cpp
 ${ICU_FULL_DIR}source/i18n/numrange_fluent.cpp
 ${ICU_FULL_DIR}source/i18n/numrange_impl.cpp
 ${ICU_FULL_DIR}source/i18n/numsys.cpp
 ${ICU_FULL_DIR}source/i18n/olsontz.cpp
 ${ICU_FULL_DIR}source/i18n/persncal.cpp
 ${ICU_FULL_DIR}source/i18n/plurfmt.cpp
 ${ICU_FULL_DIR}source/i18n/plurrule.cpp
 ${ICU_FULL_DIR}source/i18n/quant.cpp
 ${ICU_FULL_DIR}source/i18n/quantityformatter.cpp
 ${ICU_FULL_DIR}source/i18n/rbnf.cpp
 ${ICU_FULL_DIR}source/i18n/rbt.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_data.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_pars.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_rule.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_set.cpp
 ${ICU_FULL_DIR}source/i18n/rbtz.cpp
 ${ICU_FULL_DIR}source/i18n/regexcmp.cpp
 ${ICU_FULL_DIR}source/i18n/regeximp.cpp
 ${ICU_FULL_DIR}source/i18n/regexst.cpp
 ${ICU_FULL_DIR}source/i18n/regextxt.cpp
 ${ICU_FULL_DIR}source/i18n/region.cpp
 ${ICU_FULL_DIR}source/i18n/reldatefmt.cpp
 ${ICU_FULL_DIR}source/i18n/reldtfmt.cpp
 ${ICU_FULL_DIR}source/i18n/rematch.cpp
 ${ICU_FULL_DIR}source/i18n/remtrans.cpp
 ${ICU_FULL_DIR}source/i18n/repattrn.cpp
 ${ICU_FULL_DIR}source/i18n/rulebasedcollator.cpp
 ${ICU_FULL_DIR}source/i18n/scientificnumberformatter.cpp
 ${ICU_FULL_DIR}source/i18n/scriptset.cpp
 ${ICU_FULL_DIR}source/i18n/search.cpp
 ${ICU_FULL_DIR}source/i18n/selfmt.cpp
 ${ICU_FULL_DIR}source/i18n/sharedbreakiterator.cpp
 ${ICU_FULL_DIR}source/i18n/simpletz.cpp
 ${ICU_FULL_DIR}source/i18n/smpdtfmt.cpp
 ${ICU_FULL_DIR}source/i18n/smpdtfst.cpp
 ${ICU_FULL_DIR}source/i18n/sortkey.cpp
 ${ICU_FULL_DIR}source/i18n/standardplural.cpp
 ${ICU_FULL_DIR}source/i18n/string_segment.cpp
 ${ICU_FULL_DIR}source/i18n/strmatch.cpp
 ${ICU_FULL_DIR}source/i18n/strrepl.cpp
 ${ICU_FULL_DIR}source/i18n/stsearch.cpp
 ${ICU_FULL_DIR}source/i18n/taiwncal.cpp
 ${ICU_FULL_DIR}source/i18n/timezone.cpp
 ${ICU_FULL_DIR}source/i18n/titletrn.cpp
 ${ICU_FULL_DIR}source/i18n/tmunit.cpp
 ${ICU_FULL_DIR}source/i18n/tmutamt.cpp
 ${ICU_FULL_DIR}source/i18n/tmutfmt.cpp
 ${ICU_FULL_DIR}source/i18n/tolowtrn.cpp
 ${ICU_FULL_DIR}source/i18n/toupptrn.cpp
 ${ICU_FULL_DIR}source/i18n/translit.cpp
 ${ICU_FULL_DIR}source/i18n/transreg.cpp
 ${ICU_FULL_DIR}source/i18n/tridpars.cpp
 ${ICU_FULL_DIR}source/i18n/tzfmt.cpp
 ${ICU_FULL_DIR}source/i18n/tzgnames.cpp
 ${ICU_FULL_DIR}source/i18n/tznames.cpp
 ${ICU_FULL_DIR}source/i18n/tznames_impl.cpp
 ${ICU_FULL_DIR}source/i18n/tzrule.cpp
 ${ICU_FULL_DIR}source/i18n/tztrans.cpp
 ${ICU_FULL_DIR}source/i18n/ucal.cpp
 ${ICU_FULL_DIR}source/i18n/ucln_in.cpp
 ${ICU_FULL_DIR}source/i18n/ucol.cpp
 ${ICU_FULL_DIR}source/i18n/ucoleitr.cpp
 ${ICU_FULL_DIR}source/i18n/ucol_res.cpp
 ${ICU_FULL_DIR}source/i18n/ucol_sit.cpp
 ${ICU_FULL_DIR}source/i18n/ucsdet.cpp
 ${ICU_FULL_DIR}source/i18n/udat.cpp
 ${ICU_FULL_DIR}source/i18n/udateintervalformat.cpp
 ${ICU_FULL_DIR}source/i18n/udatpg.cpp
 ${ICU_FULL_DIR}source/i18n/ufieldpositer.cpp
 ${ICU_FULL_DIR}source/i18n/uitercollationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/ulistformatter.cpp
 ${ICU_FULL_DIR}source/i18n/ulocdata.cpp
 ${ICU_FULL_DIR}source/i18n/umsg.cpp
 ${ICU_FULL_DIR}source/i18n/unesctrn.cpp
 ${ICU_FULL_DIR}source/i18n/uni2name.cpp
 ${ICU_FULL_DIR}source/i18n/unum.cpp
 ${ICU_FULL_DIR}source/i18n/unumsys.cpp
 ${ICU_FULL_DIR}source/i18n/upluralrules.cpp
 ${ICU_FULL_DIR}source/i18n/uregexc.cpp
 ${ICU_FULL_DIR}source/i18n/uregex.cpp
 ${ICU_FULL_DIR}source/i18n/uregion.cpp
 ${ICU_FULL_DIR}source/i18n/usearch.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof_build.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof_conf.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof_impl.cpp
 ${ICU_FULL_DIR}source/i18n/utf16collationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/utf8collationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/utmscale.cpp
 ${ICU_FULL_DIR}source/i18n/utrans.cpp
 ${ICU_FULL_DIR}source/i18n/vtzone.cpp
 ${ICU_FULL_DIR}source/i18n/vzone.cpp
 ${ICU_FULL_DIR}source/i18n/windtfmt.cpp
 ${ICU_FULL_DIR}source/i18n/winnmfmt.cpp
 ${ICU_FULL_DIR}source/i18n/wintzimpl.cpp
 ${ICU_FULL_DIR}source/i18n/zonemeta.cpp
 ${ICU_FULL_DIR}source/i18n/zrule.cpp
 ${ICU_FULL_DIR}source/i18n/ztrans.cpp
  # I18N_SRC_END
  # COMMON_SRC_START
 ${ICU_FULL_DIR}source/common/appendable.cpp
 ${ICU_FULL_DIR}source/common/bmpset.cpp
 ${ICU_FULL_DIR}source/common/brkeng.cpp
 ${ICU_FULL_DIR}source/common/brkiter.cpp
 ${ICU_FULL_DIR}source/common/bytesinkutil.cpp
 ${ICU_FULL_DIR}source/common/bytestream.cpp
 ${ICU_FULL_DIR}source/common/bytestriebuilder.cpp
 ${ICU_FULL_DIR}source/common/bytestrie.cpp
 ${ICU_FULL_DIR}source/common/bytestrieiterator.cpp
 ${ICU_FULL_DIR}source/common/caniter.cpp
 ${ICU_FULL_DIR}source/common/characterproperties.cpp
 ${ICU_FULL_DIR}source/common/chariter.cpp
 ${ICU_FULL_DIR}source/common/charstr.cpp
 ${ICU_FULL_DIR}source/common/cmemory.cpp
 ${ICU_FULL_DIR}source/common/cstr.cpp
 ${ICU_FULL_DIR}source/common/cstring.cpp
 ${ICU_FULL_DIR}source/common/cwchar.cpp
 ${ICU_FULL_DIR}source/common/dictbe.cpp
 ${ICU_FULL_DIR}source/common/dictionarydata.cpp
 ${ICU_FULL_DIR}source/common/dtintrv.cpp
 ${ICU_FULL_DIR}source/common/edits.cpp
 ${ICU_FULL_DIR}source/common/errorcode.cpp
 ${ICU_FULL_DIR}source/common/filteredbrk.cpp
 ${ICU_FULL_DIR}source/common/filterednormalizer2.cpp
 ${ICU_FULL_DIR}source/common/icudataver.cpp
 ${ICU_FULL_DIR}source/common/icuplug.cpp
 ${ICU_FULL_DIR}source/common/loadednormalizer2impl.cpp
 ${ICU_FULL_DIR}source/common/localebuilder.cpp
 ${ICU_FULL_DIR}source/common/locavailable.cpp
 ${ICU_FULL_DIR}source/common/locbased.cpp
 ${ICU_FULL_DIR}source/common/locdispnames.cpp
 ${ICU_FULL_DIR}source/common/locdspnm.cpp
 ${ICU_FULL_DIR}source/common/locid.cpp
 ${ICU_FULL_DIR}source/common/loclikely.cpp
 ${ICU_FULL_DIR}source/common/locmap.cpp
 ${ICU_FULL_DIR}source/common/locresdata.cpp
 ${ICU_FULL_DIR}source/common/locutil.cpp
 ${ICU_FULL_DIR}source/common/messagepattern.cpp
 ${ICU_FULL_DIR}source/common/normalizer2.cpp
 ${ICU_FULL_DIR}source/common/normalizer2impl.cpp
 ${ICU_FULL_DIR}source/common/normlzr.cpp
 ${ICU_FULL_DIR}source/common/parsepos.cpp
 ${ICU_FULL_DIR}source/common/patternprops.cpp
 ${ICU_FULL_DIR}source/common/pluralmap.cpp
 ${ICU_FULL_DIR}source/common/propname.cpp
 ${ICU_FULL_DIR}source/common/propsvec.cpp
 ${ICU_FULL_DIR}source/common/punycode.cpp
 ${ICU_FULL_DIR}source/common/putil.cpp
 ${ICU_FULL_DIR}source/common/rbbi_cache.cpp
 ${ICU_FULL_DIR}source/common/rbbi.cpp
 ${ICU_FULL_DIR}source/common/rbbidata.cpp
 ${ICU_FULL_DIR}source/common/rbbinode.cpp
 ${ICU_FULL_DIR}source/common/rbbirb.cpp
 ${ICU_FULL_DIR}source/common/rbbiscan.cpp
 ${ICU_FULL_DIR}source/common/rbbisetb.cpp
 ${ICU_FULL_DIR}source/common/rbbistbl.cpp
 ${ICU_FULL_DIR}source/common/rbbitblb.cpp
 ${ICU_FULL_DIR}source/common/resbund_cnv.cpp
 ${ICU_FULL_DIR}source/common/resbund.cpp
 ${ICU_FULL_DIR}source/common/resource.cpp
 ${ICU_FULL_DIR}source/common/ruleiter.cpp
 ${ICU_FULL_DIR}source/common/schriter.cpp
 ${ICU_FULL_DIR}source/common/serv.cpp
 ${ICU_FULL_DIR}source/common/servlk.cpp
 ${ICU_FULL_DIR}source/common/servlkf.cpp
 ${ICU_FULL_DIR}source/common/servls.cpp
 ${ICU_FULL_DIR}source/common/servnotf.cpp
 ${ICU_FULL_DIR}source/common/servrbf.cpp
 ${ICU_FULL_DIR}source/common/servslkf.cpp
 ${ICU_FULL_DIR}source/common/sharedobject.cpp
 ${ICU_FULL_DIR}source/common/simpleformatter.cpp
 ${ICU_FULL_DIR}source/common/static_unicode_sets.cpp
 ${ICU_FULL_DIR}source/common/stringpiece.cpp
 ${ICU_FULL_DIR}source/common/stringtriebuilder.cpp
 ${ICU_FULL_DIR}source/common/uarrsort.cpp
 ${ICU_FULL_DIR}source/common/ubidi.cpp
 ${ICU_FULL_DIR}source/common/ubidiln.cpp
 ${ICU_FULL_DIR}source/common/ubidi_props.cpp
 ${ICU_FULL_DIR}source/common/ubiditransform.cpp
 ${ICU_FULL_DIR}source/common/ubidiwrt.cpp
 ${ICU_FULL_DIR}source/common/ubrk.cpp
 ${ICU_FULL_DIR}source/common/ucase.cpp
 ${ICU_FULL_DIR}source/common/ucasemap.cpp
 ${ICU_FULL_DIR}source/common/ucasemap_titlecase_brkiter.cpp
 ${ICU_FULL_DIR}source/common/ucat.cpp
 ${ICU_FULL_DIR}source/common/uchar.cpp
 ${ICU_FULL_DIR}source/common/ucharstriebuilder.cpp
 ${ICU_FULL_DIR}source/common/ucharstrie.cpp
 ${ICU_FULL_DIR}source/common/ucharstrieiterator.cpp
 ${ICU_FULL_DIR}source/common/uchriter.cpp
 ${ICU_FULL_DIR}source/common/ucln_cmn.cpp
 ${ICU_FULL_DIR}source/common/ucmndata.cpp
 ${ICU_FULL_DIR}source/common/ucnv2022.cpp
 ${ICU_FULL_DIR}source/common/ucnv_bld.cpp
 ${ICU_FULL_DIR}source/common/ucnvbocu.cpp
 ${ICU_FULL_DIR}source/common/ucnv_cb.cpp
 ${ICU_FULL_DIR}source/common/ucnv_cnv.cpp
 ${ICU_FULL_DIR}source/common/ucnv.cpp
 ${ICU_FULL_DIR}source/common/ucnv_ct.cpp
 ${ICU_FULL_DIR}source/common/ucnvdisp.cpp
 ${ICU_FULL_DIR}source/common/ucnv_err.cpp
 ${ICU_FULL_DIR}source/common/ucnv_ext.cpp
 ${ICU_FULL_DIR}source/common/ucnvhz.cpp
 ${ICU_FULL_DIR}source/common/ucnv_io.cpp
 ${ICU_FULL_DIR}source/common/ucnvisci.cpp
 ${ICU_FULL_DIR}source/common/ucnvlat1.cpp
 ${ICU_FULL_DIR}source/common/ucnv_lmb.cpp
 ${ICU_FULL_DIR}source/common/ucnvmbcs.cpp
 ${ICU_FULL_DIR}source/common/ucnvscsu.cpp
 ${ICU_FULL_DIR}source/common/ucnvsel.cpp
 ${ICU_FULL_DIR}source/common/ucnv_set.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u16.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u32.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u7.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u8.cpp
 ${ICU_FULL_DIR}source/common/ucol_swp.cpp
 ${ICU_FULL_DIR}source/common/ucptrie.cpp
 ${ICU_FULL_DIR}source/common/ucurr.cpp
 ${ICU_FULL_DIR}source/common/udata.cpp
 ${ICU_FULL_DIR}source/common/udatamem.cpp
 ${ICU_FULL_DIR}source/common/udataswp.cpp
 ${ICU_FULL_DIR}source/common/uenum.cpp
 ${ICU_FULL_DIR}source/common/uhash.cpp
 ${ICU_FULL_DIR}source/common/uhash_us.cpp
 ${ICU_FULL_DIR}source/common/uidna.cpp
 ${ICU_FULL_DIR}source/common/uinit.cpp
 ${ICU_FULL_DIR}source/common/uinvchar.cpp
 ${ICU_FULL_DIR}source/common/uiter.cpp
 ${ICU_FULL_DIR}source/common/ulist.cpp
 ${ICU_FULL_DIR}source/common/uloc.cpp
 ${ICU_FULL_DIR}source/common/uloc_keytype.cpp
 ${ICU_FULL_DIR}source/common/uloc_tag.cpp
 ${ICU_FULL_DIR}source/common/umapfile.cpp
 ${ICU_FULL_DIR}source/common/umath.cpp
 ${ICU_FULL_DIR}source/common/umutablecptrie.cpp
 ${ICU_FULL_DIR}source/common/umutex.cpp
 ${ICU_FULL_DIR}source/common/unames.cpp
 ${ICU_FULL_DIR}source/common/unifiedcache.cpp
 ${ICU_FULL_DIR}source/common/unifilt.cpp
 ${ICU_FULL_DIR}source/common/unifunct.cpp
 ${ICU_FULL_DIR}source/common/uniset_closure.cpp
 ${ICU_FULL_DIR}source/common/uniset.cpp
 ${ICU_FULL_DIR}source/common/uniset_props.cpp
 ${ICU_FULL_DIR}source/common/unisetspan.cpp
 ${ICU_FULL_DIR}source/common/unistr_case.cpp
 ${ICU_FULL_DIR}source/common/unistr_case_locale.cpp
 ${ICU_FULL_DIR}source/common/unistr_cnv.cpp
 ${ICU_FULL_DIR}source/common/unistr.cpp
 ${ICU_FULL_DIR}source/common/unistr_props.cpp
 ${ICU_FULL_DIR}source/common/unistr_titlecase_brkiter.cpp
 ${ICU_FULL_DIR}source/common/unormcmp.cpp
 ${ICU_FULL_DIR}source/common/unorm.cpp
 ${ICU_FULL_DIR}source/common/uobject.cpp
 ${ICU_FULL_DIR}source/common/uprops.cpp
 ${ICU_FULL_DIR}source/common/uresbund.cpp
 ${ICU_FULL_DIR}source/common/ures_cnv.cpp
 ${ICU_FULL_DIR}source/common/uresdata.cpp
 ${ICU_FULL_DIR}source/common/usc_impl.cpp
 ${ICU_FULL_DIR}source/common/uscript.cpp
 ${ICU_FULL_DIR}source/common/uscript_props.cpp
 ${ICU_FULL_DIR}source/common/uset.cpp
 ${ICU_FULL_DIR}source/common/usetiter.cpp
 ${ICU_FULL_DIR}source/common/uset_props.cpp
 ${ICU_FULL_DIR}source/common/ushape.cpp
 ${ICU_FULL_DIR}source/common/usprep.cpp
 ${ICU_FULL_DIR}source/common/ustack.cpp
 ${ICU_FULL_DIR}source/common/ustrcase.cpp
 ${ICU_FULL_DIR}source/common/ustrcase_locale.cpp
 ${ICU_FULL_DIR}source/common/ustr_cnv.cpp
 ${ICU_FULL_DIR}source/common/ustrenum.cpp
 ${ICU_FULL_DIR}source/common/ustrfmt.cpp
 ${ICU_FULL_DIR}source/common/ustring.cpp
 ${ICU_FULL_DIR}source/common/ustr_titlecase_brkiter.cpp
 ${ICU_FULL_DIR}source/common/ustrtrns.cpp
 ${ICU_FULL_DIR}source/common/ustr_wcs.cpp
 ${ICU_FULL_DIR}source/common/utext.cpp
 ${ICU_FULL_DIR}source/common/utf_impl.cpp
 ${ICU_FULL_DIR}source/common/util.cpp
 ${ICU_FULL_DIR}source/common/util_props.cpp
 ${ICU_FULL_DIR}source/common/utrace.cpp
 ${ICU_FULL_DIR}source/common/utrie2_builder.cpp
 ${ICU_FULL_DIR}source/common/utrie2.cpp
 ${ICU_FULL_DIR}source/common/utrie.cpp
 ${ICU_FULL_DIR}source/common/utrie_swap.cpp
 ${ICU_FULL_DIR}source/common/uts46.cpp
 ${ICU_FULL_DIR}source/common/utypes.cpp
 ${ICU_FULL_DIR}source/common/uvector.cpp
 ${ICU_FULL_DIR}source/common/uvectr32.cpp
 ${ICU_FULL_DIR}source/common/uvectr64.cpp
 ${ICU_FULL_DIR}source/common/wintz.cpp
  # COMMON_SRC_END
)

#if(TARGET_EMSCRIPTEN)
#  set(USE_OWN_ICU TRUE)
#elseif(TARGET_LINUX)
#  set(USE_OWN_ICU TRUE)
#  if (NOT USE_OWN_ICU)
#    # todo
#    set(EXTRA_ICU_DEFINITIONS
#      USING_SYSTEM_ICU=1
#      #ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE
#      ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC
#      U_ICUDATAENTRY_IN_COMMON # if 'OS == "win" or icu_use_data_file_flag==1'
#      UCHAR_TYPE=uint16_t
#    )
#  endif(NOT USE_OWN_ICU)
#else()
#  message(FATAL_ERROR "icu platform not supported")
#endif()

#if(USE_OWN_ICU)
  add_library(icu STATIC
    ${ICU_SOURCES}
  )

  set_property(TARGET icu PROPERTY CXX_STANDARD 17)

  # In your source, include files from base/ like normal.
  # So if you want to use the string printf API, do:
  # #include <base/stringprintf.h>
  target_include_directories(icu PUBLIC
    ${CHROMIUM_DIR}
    ${OWN_ICU_INCLUDE_DIRS}
  )

  target_include_directories(icu PRIVATE
    #${BASE_DIR}
  )

  # http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
  set(ICU_PUBLIC_DEFINES
    U_ENABLE_DYLOAD=0
    ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE
    #ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC
  )

  set(ICU_PRIVATE_DEFINES
    HAVE_DLOPEN=0
    # see http://icu-project.org/apiref/icu4c561/uconfig_8h.html
    #
    #UCONFIG_ONLY_HTML_CONVERSION=1
    U_CHARSET_IS_UTF8=1
    # custom
    HAVE_DLFCN_H=0
  )

  if (WIN32)
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=wchar_t
    )
  elseif(TARGET_EMSCRIPTEN)
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=uint16_t
    )
  else()
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=uint16_t
    )
  endif()

  # see https://github.com/webrtc-uwp/chromium-build/blob/master/linux/unbundle/icu.gn#L37
  list(APPEND ICU_PUBLIC_DEFINES
    U_IMPORT=U_EXPORT
  )

  #    "USING_SYSTEM_ICU=1",a_
  #    "ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC",
  #    "UCHAR_TYPE=uint16_t",
  #
  #    # U_EXPORT (defined in unicode/platform.h) is used to set public visibility
  #    # on classes through the U_COMMON_API and U_I18N_API macros (among others).
  #    # When linking against the system ICU library, we want its symbols to have
  #    # public LTO visibility. This disables CFI checks for the ICU classes and
  #    # allows whole-program optimization to be applied to the rest of Chromium.
  #    #
  #    # Both U_COMMON_API and U_I18N_API macros would be defined to U_EXPORT only
  #    # when U_COMBINED_IMPLEMENTATION is defined (see unicode/utypes.h). Because
  #    # we override the default system UCHAR_TYPE (char16_t), it is not possible
  #    # to use U_COMBINED_IMPLEMENTATION at this moment, meaning the U_COMMON_API
  #    # and U_I18N_API macros are set to U_IMPORT which is an empty definition.
  #    #
  #    # Until building with UCHAR_TYPE=char16_t is supported, one way to apply
  #    # public visibility (and thus public LTO visibility) to all ICU classes is
  #    # to define U_IMPORT to have the same value as U_EXPORT. For more details,
  #    # please see: https://crbug.com/822820
  #    "U_IMPORT=U_EXPORT",

  target_compile_definitions(icu PUBLIC
    ${ICU_PUBLIC_DEFINES}
    ${WTF_EMCC_DEFINITIONS}
    ${WTF_COMMON_DEFINITIONS}
    LIB_ICU_I18N_STATIC=1
    U_CHARSET_IS_UTF8=1
    #U_NO_DEFAULT_INCLUDE_UTF_HEADERS=0
    #U_NO_DEFAULT_INCLUDE_UTF_HEADERS
    #U_ATTRIBUTE_DEPRECATED
  )

  target_compile_definitions(icu PRIVATE
    ICU_IMPLEMENTATION=1
    U_STATIC_IMPLEMENTATION=1
    U_COMMON_IMPLEMENTATION=1
    U_I18N_IMPLEMENTATION=1
    U_ATTRIBUTE_DEPRECATED=
    ${ICU_PRIVATE_DEFINES}
    OFFICIAL_BUILD=1
    # https://cs.chromium.org/chromium/src/build/build_config.h?g=0&l=86
    COMPONENT_BUILD=1
    # https://github.com/cool-easy/libchromiumbase/blob/master/build/config/linux/BUILD.gn#L88
    # USE_GLIB=1
    __STDC_FORMAT_MACROS
    ${WTF_EMCC_DEFINITIONS}
    ${WTF_COMMON_DEFINITIONS}

    #SYSTEM_NATIVE_UTF8
    #COM_INIT_CHECK_HOOK_DISABLED
    #USE_SYMBOLIZE
    #BASE_I18N_IMPLEMENTATION
    #MALLOC_WRAPPER_LIB=\"${shlib_prefix}malloc_wrapper${shlib_extension}\"
    #MEMORY_TOOL_REPLACES_ALLOCATOR=1
  )

  target_compile_options(icu PRIVATE
    -Wno-error
    # TODO: remove rtti from icu
    # https://bugs.chromium.org/p/chromium/issues/detail?id=463085
    -frtti
  )
#endif(USE_OWN_ICU)

#if(TARGET_EMSCRIPTEN)
#  # Tell ICU that we are a 32 bit platform, otherwise,
#  # double-conversion-utils.h doesn't know how to operate.
#  set(ICU_DEFINES "${ICU_DEFINES} -D__i386__=1")
#endif()
