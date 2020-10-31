/*** Autogenerated by WIDL 5.20 from include/msdadc.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __msdadc_h__
#define __msdadc_h__

/* Forward declarations */

#ifndef __IDataConvert_FWD_DEFINED__
#define __IDataConvert_FWD_DEFINED__
typedef interface IDataConvert IDataConvert;
#ifdef __cplusplus
interface IDataConvert;
#endif /* __cplusplus */
#endif

#ifndef __IDCInfo_FWD_DEFINED__
#define __IDCInfo_FWD_DEFINED__
typedef interface IDCInfo IDCInfo;
#ifdef __cplusplus
interface IDCInfo;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <oledb.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDataConvert interface
 */
#ifndef __IDataConvert_INTERFACE_DEFINED__
#define __IDataConvert_INTERFACE_DEFINED__

typedef DWORD DBDATACONVERT;
enum DBDATACONVERTENUM {
    DBDATACONVERT_DEFAULT = 0,
    DBDATACONVERT_SETDATABEHAVIOR = 1,
    DBDATACONVERT_LENGTHFROMNTS = 2,
    DBDATACONVERT_DSTISFIXEDLENGTH = 4,
    DBDATACONVERT_DECIMALSCALE = 8
};
DEFINE_GUID(IID_IDataConvert, 0x0c733a8d, 0x2a1c, 0x11ce, 0xad,0xe5, 0x00,0xaa,0x00,0x44,0x77,0x3d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0c733a8d-2a1c-11ce-ade5-00aa0044773d")
IDataConvert : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE DataConvert(
        DBTYPE wSrcType,
        DBTYPE wDstType,
        DBLENGTH cbSrcLength,
        DBLENGTH *pcbDstLength,
        void *pSrc,
        void *pDst,
        DBLENGTH cbDstMaxLength,
        DBSTATUS dbsSrcStatus,
        DBSTATUS *pdbsDstStatus,
        BYTE bPrecision,
        BYTE bScale,
        DBDATACONVERT dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CanConvert(
        DBTYPE wSrcType,
        DBTYPE wDstType) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConversionSize(
        DBTYPE wSrcType,
        DBTYPE wDstType,
        DBLENGTH *pcbSrcLength,
        DBLENGTH *pcbDstLength,
        void *pSrc) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDataConvert, 0x0c733a8d, 0x2a1c, 0x11ce, 0xad,0xe5, 0x00,0xaa,0x00,0x44,0x77,0x3d)
#endif
#else
typedef struct IDataConvertVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDataConvert *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDataConvert *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDataConvert *This);

    /*** IDataConvert methods ***/
    HRESULT (STDMETHODCALLTYPE *DataConvert)(
        IDataConvert *This,
        DBTYPE wSrcType,
        DBTYPE wDstType,
        DBLENGTH cbSrcLength,
        DBLENGTH *pcbDstLength,
        void *pSrc,
        void *pDst,
        DBLENGTH cbDstMaxLength,
        DBSTATUS dbsSrcStatus,
        DBSTATUS *pdbsDstStatus,
        BYTE bPrecision,
        BYTE bScale,
        DBDATACONVERT dwFlags);

    HRESULT (STDMETHODCALLTYPE *CanConvert)(
        IDataConvert *This,
        DBTYPE wSrcType,
        DBTYPE wDstType);

    HRESULT (STDMETHODCALLTYPE *GetConversionSize)(
        IDataConvert *This,
        DBTYPE wSrcType,
        DBTYPE wDstType,
        DBLENGTH *pcbSrcLength,
        DBLENGTH *pcbDstLength,
        void *pSrc);

    END_INTERFACE
} IDataConvertVtbl;

interface IDataConvert {
    CONST_VTBL IDataConvertVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDataConvert_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDataConvert_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDataConvert_Release(This) (This)->lpVtbl->Release(This)
/*** IDataConvert methods ***/
#define IDataConvert_DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsDstStatus,bPrecision,bScale,dwFlags) (This)->lpVtbl->DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsDstStatus,bPrecision,bScale,dwFlags)
#define IDataConvert_CanConvert(This,wSrcType,wDstType) (This)->lpVtbl->CanConvert(This,wSrcType,wDstType)
#define IDataConvert_GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc) (This)->lpVtbl->GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDataConvert_QueryInterface(IDataConvert* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDataConvert_AddRef(IDataConvert* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDataConvert_Release(IDataConvert* This) {
    return This->lpVtbl->Release(This);
}
/*** IDataConvert methods ***/
static FORCEINLINE HRESULT IDataConvert_DataConvert(IDataConvert* This,DBTYPE wSrcType,DBTYPE wDstType,DBLENGTH cbSrcLength,DBLENGTH *pcbDstLength,void *pSrc,void *pDst,DBLENGTH cbDstMaxLength,DBSTATUS dbsSrcStatus,DBSTATUS *pdbsDstStatus,BYTE bPrecision,BYTE bScale,DBDATACONVERT dwFlags) {
    return This->lpVtbl->DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsDstStatus,bPrecision,bScale,dwFlags);
}
static FORCEINLINE HRESULT IDataConvert_CanConvert(IDataConvert* This,DBTYPE wSrcType,DBTYPE wDstType) {
    return This->lpVtbl->CanConvert(This,wSrcType,wDstType);
}
static FORCEINLINE HRESULT IDataConvert_GetConversionSize(IDataConvert* This,DBTYPE wSrcType,DBTYPE wDstType,DBLENGTH *pcbSrcLength,DBLENGTH *pcbDstLength,void *pSrc) {
    return This->lpVtbl->GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc);
}
#endif
#endif

#endif


#endif  /* __IDataConvert_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDCInfo interface
 */
#ifndef __IDCInfo_INTERFACE_DEFINED__
#define __IDCInfo_INTERFACE_DEFINED__

typedef DWORD DCINFOTYPE;
enum DCINFOTYPEENUM {
    DCINFOTYPE_VERSION = 1
};
typedef struct tagDCINFO {
    DCINFOTYPE eInfoType;
    VARIANT vData;
} DCINFO;
DEFINE_GUID(IID_IDCInfo, 0x0c733a9c, 0x2a1c, 0x11ce, 0xad,0xe5, 0x00,0xaa,0x00,0x44,0x77,0x3d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0c733a9c-2a1c-11ce-ade5-00aa0044773d")
IDCInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetInfo(
        ULONG cInfo,
        DCINFOTYPE rgeInfoType[],
        DCINFO **prgInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInfo(
        ULONG cInfo,
        DCINFO prgInfo[]) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDCInfo, 0x0c733a9c, 0x2a1c, 0x11ce, 0xad,0xe5, 0x00,0xaa,0x00,0x44,0x77,0x3d)
#endif
#else
typedef struct IDCInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDCInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDCInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDCInfo *This);

    /*** IDCInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        IDCInfo *This,
        ULONG cInfo,
        DCINFOTYPE rgeInfoType[],
        DCINFO **prgInfo);

    HRESULT (STDMETHODCALLTYPE *SetInfo)(
        IDCInfo *This,
        ULONG cInfo,
        DCINFO prgInfo[]);

    END_INTERFACE
} IDCInfoVtbl;

interface IDCInfo {
    CONST_VTBL IDCInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDCInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDCInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDCInfo_Release(This) (This)->lpVtbl->Release(This)
/*** IDCInfo methods ***/
#define IDCInfo_GetInfo(This,cInfo,rgeInfoType,prgInfo) (This)->lpVtbl->GetInfo(This,cInfo,rgeInfoType,prgInfo)
#define IDCInfo_SetInfo(This,cInfo,prgInfo) (This)->lpVtbl->SetInfo(This,cInfo,prgInfo)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDCInfo_QueryInterface(IDCInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDCInfo_AddRef(IDCInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDCInfo_Release(IDCInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** IDCInfo methods ***/
static FORCEINLINE HRESULT IDCInfo_GetInfo(IDCInfo* This,ULONG cInfo,DCINFOTYPE rgeInfoType[],DCINFO **prgInfo) {
    return This->lpVtbl->GetInfo(This,cInfo,rgeInfoType,prgInfo);
}
static FORCEINLINE HRESULT IDCInfo_SetInfo(IDCInfo* This,ULONG cInfo,DCINFO prgInfo[]) {
    return This->lpVtbl->SetInfo(This,cInfo,prgInfo);
}
#endif
#endif

#endif


#endif  /* __IDCInfo_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __msdadc_h__ */
