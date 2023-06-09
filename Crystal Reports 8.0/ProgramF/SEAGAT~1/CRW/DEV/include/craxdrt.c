/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Nov 08 02:23:50 1999
 */
/* Compiler settings for crvb60r.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_ICrystalReportSource = {0x3DCC8FB4,0xC434,0x11d1,{0xA8,0x17,0x00,0xA0,0xC9,0x27,0x84,0xCD}};


const IID IID_ICrystalReportSourceEx = {0x3DCC8FB6,0xC434,0x11d1,{0xA8,0x17,0x00,0xA0,0xC9,0x27,0x84,0xCD}};


const IID IID_ICrystalReportProperties = {0x3DCC8FB5,0xC434,0x11d1,{0xA8,0x17,0x00,0xA0,0xC9,0x27,0x84,0xCD}};


const IID IID_ICrystalReportSourceProperties = {0x6876D971,0xF0F2,0x11d1,{0xBE,0xDF,0x00,0xA0,0xC9,0x5A,0x6A,0x5C}};


const IID IID_ICrystalReportPrinterPort = {0xb4742013,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const IID IID_ICrystalReportExport = {0xBD10A9C0,0x07CC,0x11D2,{0xBE,0xFF,0x00,0xA0,0xC9,0x5A,0x6A,0x5C}};


const IID IID_ICrystalReportSourceEvents = {0x3DCC8FB3,0xC434,0x11d1,{0xA8,0x17,0x00,0xA0,0xC9,0x27,0x84,0xCD}};


const IID IID_ICrystalReportExportEvents = {0x4D773761,0x0AD4,0x11d2,{0xBF,0x01,0x00,0xA0,0xC9,0x5A,0x6A,0x5C}};


const IID IID_IOlapGridObject = {0x0bac5dd2,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const IID LIBID_CRAXDRT = {0xb4741c00,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Report = {0xb4741e10,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Areas = {0xb4741e20,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Sections = {0xb4741e30,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Area = {0xb4741e40,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Section = {0xb4741e50,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_ReportObjects = {0xb4741e60,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_FieldObject = {0xb4741e70,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_TextObject = {0xb4741e90,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SubreportObject = {0xb4741ea0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_DatabaseFieldDefinition = {0xb4741ec0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_FormulaFieldDefinition = {0x0bac5b90,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_ParameterFieldDefinition = {0x0bac5bb0,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_GroupNameFieldDefinition = {0x0bac5bd0,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SpecialVarFieldDefinition = {0x0bac5be0,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SummaryFieldDefinition = {0x0bac5bf0,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_RunningTotalFieldDefinition = {0xb4742070,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SQLExpressionFieldDefinition = {0xb47420a0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Database = {0xb4741ee0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_DatabaseTables = {0xb4741ef0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_DatabaseTable = {0xb4741f00,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_DatabaseFieldDefinitions = {0xb4741f10,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_FormulaFieldDefinitions = {0x0bac5b80,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_ParameterFieldDefinitions = {0x0bac5ba0,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_GroupNameFieldDefinitions = {0x0bac5bc0,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SummaryFieldDefinitions = {0x0bac5c00,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_RunningTotalFieldDefinitions = {0xb4742080,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SQLExpressionFieldDefinitions = {0xb4742090,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_GraphObject = {0xb4741f20,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_MapObject = {0xb4742060,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_OleObject = {0xb4741f30,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_BlobFieldObject = {0xb4741f40,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_LineObject = {0xb4741f50,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_BoxObject = {0xb4741f60,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_OlapGridObject = {0xb47420b0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_CrossTabObject = {0xb4741f70,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_PageEngine = {0xb4741f80,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_PageGenerator = {0xb4741f90,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Pages = {0xb4741fa0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Page = {0xb4741fb0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_ExportOptions = {0xb4741fc0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_Application = {0xb4741fd0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_FormattingInfo = {0xb4741fe0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SortFields = {0xb4741ff0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SortField = {0xb4742000,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_PrintingStatus = {0xb4742030,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SubreportLink = {0xb4742130,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_SubreportLinks = {0xb4742120,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_CrossTabGroups = {0xb4742100,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_CrossTabGroup = {0xb4742110,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_FieldDefinitions = {0xb47420e0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_ObjectSummaryFieldDefinitions = {0xb47420f0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_TableLink = {0xb47420d0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_TableLinks = {0xb47420c0,0x45a6,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


const CLSID CLSID_FieldMappingData = {0x0bac5e60,0x44c9,0x11d1,{0xab,0xec,0x00,0xa0,0xc9,0x27,0x4b,0x91}};


#ifdef __cplusplus
}
#endif

