/*** Autogenerated by WIDL 5.7 from dxgidebug.idl - Do not edit ***/

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

#ifndef __dxgidebug_h__
#define __dxgidebug_h__

/* Forward declarations */

#ifndef __IDXGIDebug_FWD_DEFINED__
#define __IDXGIDebug_FWD_DEFINED__
typedef interface IDXGIDebug IDXGIDebug;
#ifdef __cplusplus
interface IDXGIDebug;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(DXGI_DEBUG_ALL,   0xe48ae283, 0xda80, 0x490b,0x87, 0xe6, 0x43, 0xe9, 0xa9, 0xcf, 0xda, 0x08);
DEFINE_GUID(DXGI_DEBUG_DX,    0x35cdd7fc, 0x13b2, 0x421d,0xa5, 0xd7, 0x7e, 0x44, 0x51, 0x28, 0x7d, 0x64);
DEFINE_GUID(DXGI_DEBUG_DXGI,  0x25cddaa4, 0xb1c6, 0x47e1,0xac, 0x3e, 0x98, 0x87, 0x5b, 0x5a, 0x2e, 0x2a);
DEFINE_GUID(DXGI_DEBUG_APP,   0x06cd6e01, 0x4219, 0x4ebd,0x87, 0x90, 0x27, 0xed, 0x23, 0x36, 0x0c, 0x62);
typedef enum DXGI_DEBUG_RLO_FLAGS {
    DXGI_DEBUG_RLO_SUMMARY = 0x1,
    DXGI_DEBUG_RLO_DETAIL = 0x2,
    DXGI_DEBUG_RLO_IGNORE_INTERNAL = 0x4,
    DXGI_DEBUG_RLO_ALL = 0x7
} DXGI_DEBUG_RLO_FLAGS;
/*****************************************************************************
 * IDXGIDebug interface
 */
#ifndef __IDXGIDebug_INTERFACE_DEFINED__
#define __IDXGIDebug_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGIDebug, 0x119e7452, 0xde9e, 0x40fe, 0x88,0x06, 0x88,0xf9,0x0c,0x12,0xb4,0x41);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("119e7452-de9e-40fe-8806-88f90c12b441")
IDXGIDebug : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ReportLiveObjects(
        GUID apiid,
        DXGI_DEBUG_RLO_FLAGS flags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGIDebug, 0x119e7452, 0xde9e, 0x40fe, 0x88,0x06, 0x88,0xf9,0x0c,0x12,0xb4,0x41)
#endif
#else
typedef struct IDXGIDebugVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGIDebug *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGIDebug *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGIDebug *This);

    /*** IDXGIDebug methods ***/
    HRESULT (STDMETHODCALLTYPE *ReportLiveObjects)(
        IDXGIDebug *This,
        GUID apiid,
        DXGI_DEBUG_RLO_FLAGS flags);

    END_INTERFACE
} IDXGIDebugVtbl;

interface IDXGIDebug {
    CONST_VTBL IDXGIDebugVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGIDebug_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXGIDebug_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGIDebug_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIDebug methods ***/
#define IDXGIDebug_ReportLiveObjects(This,apiid,flags) (This)->lpVtbl->ReportLiveObjects(This,apiid,flags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGIDebug_QueryInterface(IDXGIDebug* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDXGIDebug_AddRef(IDXGIDebug* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGIDebug_Release(IDXGIDebug* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIDebug methods ***/
static FORCEINLINE HRESULT IDXGIDebug_ReportLiveObjects(IDXGIDebug* This,GUID apiid,DXGI_DEBUG_RLO_FLAGS flags) {
    return This->lpVtbl->ReportLiveObjects(This,apiid,flags);
}
#endif
#endif

#endif


#endif  /* __IDXGIDebug_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dxgidebug_h__ */
