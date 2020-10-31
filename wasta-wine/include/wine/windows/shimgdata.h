/*** Autogenerated by WIDL 5.20 from include/shimgdata.idl - Do not edit ***/

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

#ifndef __shimgdata_h__
#define __shimgdata_h__

/* Forward declarations */

#ifndef __IShellImageDataAbort_FWD_DEFINED__
#define __IShellImageDataAbort_FWD_DEFINED__
typedef interface IShellImageDataAbort IShellImageDataAbort;
#ifdef __cplusplus
interface IShellImageDataAbort;
#endif /* __cplusplus */
#endif

#ifndef __IShellImageData_FWD_DEFINED__
#define __IShellImageData_FWD_DEFINED__
typedef interface IShellImageData IShellImageData;
#ifdef __cplusplus
interface IShellImageData;
#endif /* __cplusplus */
#endif

#ifndef __IShellImageDataFactory_FWD_DEFINED__
#define __IShellImageDataFactory_FWD_DEFINED__
typedef interface IShellImageDataFactory IShellImageDataFactory;
#ifdef __cplusplus
interface IShellImageDataFactory;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <propidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _GDIPLUSPIXELFORMATS_H
typedef DWORD PixelFormat;
#endif
#ifndef _GDIPLUSENUMS_H
typedef DWORD InterpolationMode;
#endif
#ifndef _GDIPLUSIMAGING_H
typedef BYTE EncoderParameters;
#endif
#ifndef _GDIPLUSHEADERS_H
typedef BYTE Image;
#endif
#define SHIMGDEC_DEFAULT   0x0
#define SHIMGDEC_THUMBNAIL 0x1
#define SHIMGDEC_LOADFULL  0x2
/*****************************************************************************
 * IShellImageDataAbort interface
 */
#ifndef __IShellImageDataAbort_INTERFACE_DEFINED__
#define __IShellImageDataAbort_INTERFACE_DEFINED__

DEFINE_GUID(IID_IShellImageDataAbort, 0x53fb8e58, 0x50c0, 0x4003, 0xb4,0xaa, 0x0c,0x8d,0xf2,0x8e,0x7f,0x3a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("53fb8e58-50c0-4003-b4aa-0c8df28e7f3a")
IShellImageDataAbort : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE QueryAbort(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IShellImageDataAbort, 0x53fb8e58, 0x50c0, 0x4003, 0xb4,0xaa, 0x0c,0x8d,0xf2,0x8e,0x7f,0x3a)
#endif
#else
typedef struct IShellImageDataAbortVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellImageDataAbort *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellImageDataAbort *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellImageDataAbort *This);

    /*** IShellImageDataAbort methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryAbort)(
        IShellImageDataAbort *This);

    END_INTERFACE
} IShellImageDataAbortVtbl;

interface IShellImageDataAbort {
    CONST_VTBL IShellImageDataAbortVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IShellImageDataAbort_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IShellImageDataAbort_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IShellImageDataAbort_Release(This) (This)->lpVtbl->Release(This)
/*** IShellImageDataAbort methods ***/
#define IShellImageDataAbort_QueryAbort(This) (This)->lpVtbl->QueryAbort(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IShellImageDataAbort_QueryInterface(IShellImageDataAbort* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IShellImageDataAbort_AddRef(IShellImageDataAbort* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IShellImageDataAbort_Release(IShellImageDataAbort* This) {
    return This->lpVtbl->Release(This);
}
/*** IShellImageDataAbort methods ***/
static FORCEINLINE HRESULT IShellImageDataAbort_QueryAbort(IShellImageDataAbort* This) {
    return This->lpVtbl->QueryAbort(This);
}
#endif
#endif

#endif


#endif  /* __IShellImageDataAbort_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellImageData interface
 */
#ifndef __IShellImageData_INTERFACE_DEFINED__
#define __IShellImageData_INTERFACE_DEFINED__

DEFINE_GUID(IID_IShellImageData, 0xbfdeec12, 0x8040, 0x4403, 0xa5,0xea, 0x9e,0x07,0xda,0xfc,0xf5,0x30);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bfdeec12-8040-4403-a5ea-9e07dafcf530")
IShellImageData : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Decode(
        DWORD flags,
        ULONG cx_desired,
        ULONG cy_desired) = 0;

    virtual HRESULT STDMETHODCALLTYPE Draw(
        HDC hdc,
        RECT *dest,
        RECT *src) = 0;

    virtual HRESULT STDMETHODCALLTYPE NextFrame(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE NextPage(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE PrevPage(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsTransparent(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsAnimated(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsVector(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsMultipage(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsEditable(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsPrintable(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsDecoded(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCurrentPage(
        ULONG *page) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPageCount(
        ULONG *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE SelectPage(
        ULONG page) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSize(
        SIZE *size) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRawDataFormat(
        GUID *format) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPixelFormat(
        PixelFormat *format) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDelay(
        DWORD *delay) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperties(
        DWORD mode,
        IPropertySetStorage **props) = 0;

    virtual HRESULT STDMETHODCALLTYPE Rotate(
        DWORD angle) = 0;

    virtual HRESULT STDMETHODCALLTYPE Scale(
        ULONG cx,
        ULONG cy,
        InterpolationMode mode) = 0;

    virtual HRESULT STDMETHODCALLTYPE DiscardEdit(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEncoderParams(
        IPropertyBag *params) = 0;

    virtual HRESULT STDMETHODCALLTYPE DisplayName(
        LPWSTR name,
        UINT count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetResolution(
        ULONG *res_x,
        ULONG *res_y) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEncoderParams(
        GUID *format,
        EncoderParameters **params) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterAbort(
        IShellImageDataAbort *abort,
        IShellImageDataAbort **prev) = 0;

    virtual HRESULT STDMETHODCALLTYPE CloneFrame(
        Image **frame) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReplaceFrame(
        Image *frame) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IShellImageData, 0xbfdeec12, 0x8040, 0x4403, 0xa5,0xea, 0x9e,0x07,0xda,0xfc,0xf5,0x30)
#endif
#else
typedef struct IShellImageDataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellImageData *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellImageData *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellImageData *This);

    /*** IShellImageData methods ***/
    HRESULT (STDMETHODCALLTYPE *Decode)(
        IShellImageData *This,
        DWORD flags,
        ULONG cx_desired,
        ULONG cy_desired);

    HRESULT (STDMETHODCALLTYPE *Draw)(
        IShellImageData *This,
        HDC hdc,
        RECT *dest,
        RECT *src);

    HRESULT (STDMETHODCALLTYPE *NextFrame)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *NextPage)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *PrevPage)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsTransparent)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsAnimated)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsVector)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsMultipage)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsEditable)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsPrintable)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *IsDecoded)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentPage)(
        IShellImageData *This,
        ULONG *page);

    HRESULT (STDMETHODCALLTYPE *GetPageCount)(
        IShellImageData *This,
        ULONG *count);

    HRESULT (STDMETHODCALLTYPE *SelectPage)(
        IShellImageData *This,
        ULONG page);

    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IShellImageData *This,
        SIZE *size);

    HRESULT (STDMETHODCALLTYPE *GetRawDataFormat)(
        IShellImageData *This,
        GUID *format);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IShellImageData *This,
        PixelFormat *format);

    HRESULT (STDMETHODCALLTYPE *GetDelay)(
        IShellImageData *This,
        DWORD *delay);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IShellImageData *This,
        DWORD mode,
        IPropertySetStorage **props);

    HRESULT (STDMETHODCALLTYPE *Rotate)(
        IShellImageData *This,
        DWORD angle);

    HRESULT (STDMETHODCALLTYPE *Scale)(
        IShellImageData *This,
        ULONG cx,
        ULONG cy,
        InterpolationMode mode);

    HRESULT (STDMETHODCALLTYPE *DiscardEdit)(
        IShellImageData *This);

    HRESULT (STDMETHODCALLTYPE *SetEncoderParams)(
        IShellImageData *This,
        IPropertyBag *params);

    HRESULT (STDMETHODCALLTYPE *DisplayName)(
        IShellImageData *This,
        LPWSTR name,
        UINT count);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IShellImageData *This,
        ULONG *res_x,
        ULONG *res_y);

    HRESULT (STDMETHODCALLTYPE *GetEncoderParams)(
        IShellImageData *This,
        GUID *format,
        EncoderParameters **params);

    HRESULT (STDMETHODCALLTYPE *RegisterAbort)(
        IShellImageData *This,
        IShellImageDataAbort *abort,
        IShellImageDataAbort **prev);

    HRESULT (STDMETHODCALLTYPE *CloneFrame)(
        IShellImageData *This,
        Image **frame);

    HRESULT (STDMETHODCALLTYPE *ReplaceFrame)(
        IShellImageData *This,
        Image *frame);

    END_INTERFACE
} IShellImageDataVtbl;

interface IShellImageData {
    CONST_VTBL IShellImageDataVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IShellImageData_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IShellImageData_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IShellImageData_Release(This) (This)->lpVtbl->Release(This)
/*** IShellImageData methods ***/
#define IShellImageData_Decode(This,flags,cx_desired,cy_desired) (This)->lpVtbl->Decode(This,flags,cx_desired,cy_desired)
#define IShellImageData_Draw(This,hdc,dest,src) (This)->lpVtbl->Draw(This,hdc,dest,src)
#define IShellImageData_NextFrame(This) (This)->lpVtbl->NextFrame(This)
#define IShellImageData_NextPage(This) (This)->lpVtbl->NextPage(This)
#define IShellImageData_PrevPage(This) (This)->lpVtbl->PrevPage(This)
#define IShellImageData_IsTransparent(This) (This)->lpVtbl->IsTransparent(This)
#define IShellImageData_IsAnimated(This) (This)->lpVtbl->IsAnimated(This)
#define IShellImageData_IsVector(This) (This)->lpVtbl->IsVector(This)
#define IShellImageData_IsMultipage(This) (This)->lpVtbl->IsMultipage(This)
#define IShellImageData_IsEditable(This) (This)->lpVtbl->IsEditable(This)
#define IShellImageData_IsPrintable(This) (This)->lpVtbl->IsPrintable(This)
#define IShellImageData_IsDecoded(This) (This)->lpVtbl->IsDecoded(This)
#define IShellImageData_GetCurrentPage(This,page) (This)->lpVtbl->GetCurrentPage(This,page)
#define IShellImageData_GetPageCount(This,count) (This)->lpVtbl->GetPageCount(This,count)
#define IShellImageData_SelectPage(This,page) (This)->lpVtbl->SelectPage(This,page)
#define IShellImageData_GetSize(This,size) (This)->lpVtbl->GetSize(This,size)
#define IShellImageData_GetRawDataFormat(This,format) (This)->lpVtbl->GetRawDataFormat(This,format)
#define IShellImageData_GetPixelFormat(This,format) (This)->lpVtbl->GetPixelFormat(This,format)
#define IShellImageData_GetDelay(This,delay) (This)->lpVtbl->GetDelay(This,delay)
#define IShellImageData_GetProperties(This,mode,props) (This)->lpVtbl->GetProperties(This,mode,props)
#define IShellImageData_Rotate(This,angle) (This)->lpVtbl->Rotate(This,angle)
#define IShellImageData_Scale(This,cx,cy,mode) (This)->lpVtbl->Scale(This,cx,cy,mode)
#define IShellImageData_DiscardEdit(This) (This)->lpVtbl->DiscardEdit(This)
#define IShellImageData_SetEncoderParams(This,params) (This)->lpVtbl->SetEncoderParams(This,params)
#define IShellImageData_DisplayName(This,name,count) (This)->lpVtbl->DisplayName(This,name,count)
#define IShellImageData_GetResolution(This,res_x,res_y) (This)->lpVtbl->GetResolution(This,res_x,res_y)
#define IShellImageData_GetEncoderParams(This,format,params) (This)->lpVtbl->GetEncoderParams(This,format,params)
#define IShellImageData_RegisterAbort(This,abort,prev) (This)->lpVtbl->RegisterAbort(This,abort,prev)
#define IShellImageData_CloneFrame(This,frame) (This)->lpVtbl->CloneFrame(This,frame)
#define IShellImageData_ReplaceFrame(This,frame) (This)->lpVtbl->ReplaceFrame(This,frame)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IShellImageData_QueryInterface(IShellImageData* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IShellImageData_AddRef(IShellImageData* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IShellImageData_Release(IShellImageData* This) {
    return This->lpVtbl->Release(This);
}
/*** IShellImageData methods ***/
static FORCEINLINE HRESULT IShellImageData_Decode(IShellImageData* This,DWORD flags,ULONG cx_desired,ULONG cy_desired) {
    return This->lpVtbl->Decode(This,flags,cx_desired,cy_desired);
}
static FORCEINLINE HRESULT IShellImageData_Draw(IShellImageData* This,HDC hdc,RECT *dest,RECT *src) {
    return This->lpVtbl->Draw(This,hdc,dest,src);
}
static FORCEINLINE HRESULT IShellImageData_NextFrame(IShellImageData* This) {
    return This->lpVtbl->NextFrame(This);
}
static FORCEINLINE HRESULT IShellImageData_NextPage(IShellImageData* This) {
    return This->lpVtbl->NextPage(This);
}
static FORCEINLINE HRESULT IShellImageData_PrevPage(IShellImageData* This) {
    return This->lpVtbl->PrevPage(This);
}
static FORCEINLINE HRESULT IShellImageData_IsTransparent(IShellImageData* This) {
    return This->lpVtbl->IsTransparent(This);
}
static FORCEINLINE HRESULT IShellImageData_IsAnimated(IShellImageData* This) {
    return This->lpVtbl->IsAnimated(This);
}
static FORCEINLINE HRESULT IShellImageData_IsVector(IShellImageData* This) {
    return This->lpVtbl->IsVector(This);
}
static FORCEINLINE HRESULT IShellImageData_IsMultipage(IShellImageData* This) {
    return This->lpVtbl->IsMultipage(This);
}
static FORCEINLINE HRESULT IShellImageData_IsEditable(IShellImageData* This) {
    return This->lpVtbl->IsEditable(This);
}
static FORCEINLINE HRESULT IShellImageData_IsPrintable(IShellImageData* This) {
    return This->lpVtbl->IsPrintable(This);
}
static FORCEINLINE HRESULT IShellImageData_IsDecoded(IShellImageData* This) {
    return This->lpVtbl->IsDecoded(This);
}
static FORCEINLINE HRESULT IShellImageData_GetCurrentPage(IShellImageData* This,ULONG *page) {
    return This->lpVtbl->GetCurrentPage(This,page);
}
static FORCEINLINE HRESULT IShellImageData_GetPageCount(IShellImageData* This,ULONG *count) {
    return This->lpVtbl->GetPageCount(This,count);
}
static FORCEINLINE HRESULT IShellImageData_SelectPage(IShellImageData* This,ULONG page) {
    return This->lpVtbl->SelectPage(This,page);
}
static FORCEINLINE HRESULT IShellImageData_GetSize(IShellImageData* This,SIZE *size) {
    return This->lpVtbl->GetSize(This,size);
}
static FORCEINLINE HRESULT IShellImageData_GetRawDataFormat(IShellImageData* This,GUID *format) {
    return This->lpVtbl->GetRawDataFormat(This,format);
}
static FORCEINLINE HRESULT IShellImageData_GetPixelFormat(IShellImageData* This,PixelFormat *format) {
    return This->lpVtbl->GetPixelFormat(This,format);
}
static FORCEINLINE HRESULT IShellImageData_GetDelay(IShellImageData* This,DWORD *delay) {
    return This->lpVtbl->GetDelay(This,delay);
}
static FORCEINLINE HRESULT IShellImageData_GetProperties(IShellImageData* This,DWORD mode,IPropertySetStorage **props) {
    return This->lpVtbl->GetProperties(This,mode,props);
}
static FORCEINLINE HRESULT IShellImageData_Rotate(IShellImageData* This,DWORD angle) {
    return This->lpVtbl->Rotate(This,angle);
}
static FORCEINLINE HRESULT IShellImageData_Scale(IShellImageData* This,ULONG cx,ULONG cy,InterpolationMode mode) {
    return This->lpVtbl->Scale(This,cx,cy,mode);
}
static FORCEINLINE HRESULT IShellImageData_DiscardEdit(IShellImageData* This) {
    return This->lpVtbl->DiscardEdit(This);
}
static FORCEINLINE HRESULT IShellImageData_SetEncoderParams(IShellImageData* This,IPropertyBag *params) {
    return This->lpVtbl->SetEncoderParams(This,params);
}
static FORCEINLINE HRESULT IShellImageData_DisplayName(IShellImageData* This,LPWSTR name,UINT count) {
    return This->lpVtbl->DisplayName(This,name,count);
}
static FORCEINLINE HRESULT IShellImageData_GetResolution(IShellImageData* This,ULONG *res_x,ULONG *res_y) {
    return This->lpVtbl->GetResolution(This,res_x,res_y);
}
static FORCEINLINE HRESULT IShellImageData_GetEncoderParams(IShellImageData* This,GUID *format,EncoderParameters **params) {
    return This->lpVtbl->GetEncoderParams(This,format,params);
}
static FORCEINLINE HRESULT IShellImageData_RegisterAbort(IShellImageData* This,IShellImageDataAbort *abort,IShellImageDataAbort **prev) {
    return This->lpVtbl->RegisterAbort(This,abort,prev);
}
static FORCEINLINE HRESULT IShellImageData_CloneFrame(IShellImageData* This,Image **frame) {
    return This->lpVtbl->CloneFrame(This,frame);
}
static FORCEINLINE HRESULT IShellImageData_ReplaceFrame(IShellImageData* This,Image *frame) {
    return This->lpVtbl->ReplaceFrame(This,frame);
}
#endif
#endif

#endif


#endif  /* __IShellImageData_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellImageDataFactory interface
 */
#ifndef __IShellImageDataFactory_INTERFACE_DEFINED__
#define __IShellImageDataFactory_INTERFACE_DEFINED__

DEFINE_GUID(IID_IShellImageDataFactory, 0x9be8ed5c, 0xedab, 0x4d75, 0x90,0xf3, 0xbd,0x5b,0xdb,0xb2,0x1c,0x82);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9be8ed5c-edab-4d75-90f3-bd5bdbb21c82")
IShellImageDataFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateIShellImageData(
        IShellImageData **data) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateImageFromFile(
        LPCWSTR path,
        IShellImageData **data) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateImageFromStream(
        IStream *stream,
        IShellImageData **data) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDataFormatFromPath(
        LPCWSTR path,
        GUID *format) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IShellImageDataFactory, 0x9be8ed5c, 0xedab, 0x4d75, 0x90,0xf3, 0xbd,0x5b,0xdb,0xb2,0x1c,0x82)
#endif
#else
typedef struct IShellImageDataFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellImageDataFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellImageDataFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellImageDataFactory *This);

    /*** IShellImageDataFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateIShellImageData)(
        IShellImageDataFactory *This,
        IShellImageData **data);

    HRESULT (STDMETHODCALLTYPE *CreateImageFromFile)(
        IShellImageDataFactory *This,
        LPCWSTR path,
        IShellImageData **data);

    HRESULT (STDMETHODCALLTYPE *CreateImageFromStream)(
        IShellImageDataFactory *This,
        IStream *stream,
        IShellImageData **data);

    HRESULT (STDMETHODCALLTYPE *GetDataFormatFromPath)(
        IShellImageDataFactory *This,
        LPCWSTR path,
        GUID *format);

    END_INTERFACE
} IShellImageDataFactoryVtbl;

interface IShellImageDataFactory {
    CONST_VTBL IShellImageDataFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IShellImageDataFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IShellImageDataFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IShellImageDataFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IShellImageDataFactory methods ***/
#define IShellImageDataFactory_CreateIShellImageData(This,data) (This)->lpVtbl->CreateIShellImageData(This,data)
#define IShellImageDataFactory_CreateImageFromFile(This,path,data) (This)->lpVtbl->CreateImageFromFile(This,path,data)
#define IShellImageDataFactory_CreateImageFromStream(This,stream,data) (This)->lpVtbl->CreateImageFromStream(This,stream,data)
#define IShellImageDataFactory_GetDataFormatFromPath(This,path,format) (This)->lpVtbl->GetDataFormatFromPath(This,path,format)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IShellImageDataFactory_QueryInterface(IShellImageDataFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IShellImageDataFactory_AddRef(IShellImageDataFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IShellImageDataFactory_Release(IShellImageDataFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IShellImageDataFactory methods ***/
static FORCEINLINE HRESULT IShellImageDataFactory_CreateIShellImageData(IShellImageDataFactory* This,IShellImageData **data) {
    return This->lpVtbl->CreateIShellImageData(This,data);
}
static FORCEINLINE HRESULT IShellImageDataFactory_CreateImageFromFile(IShellImageDataFactory* This,LPCWSTR path,IShellImageData **data) {
    return This->lpVtbl->CreateImageFromFile(This,path,data);
}
static FORCEINLINE HRESULT IShellImageDataFactory_CreateImageFromStream(IShellImageDataFactory* This,IStream *stream,IShellImageData **data) {
    return This->lpVtbl->CreateImageFromStream(This,stream,data);
}
static FORCEINLINE HRESULT IShellImageDataFactory_GetDataFormatFromPath(IShellImageDataFactory* This,LPCWSTR path,GUID *format) {
    return This->lpVtbl->GetDataFormatFromPath(This,path,format);
}
#endif
#endif

#endif


#endif  /* __IShellImageDataFactory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __shimgdata_h__ */
