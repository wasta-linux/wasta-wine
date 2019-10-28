/*** Autogenerated by WIDL 4.18 from tlogstg.idl - Do not edit ***/

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

#ifndef __tlogstg_h__
#define __tlogstg_h__

/* Forward declarations */

#ifndef __ITravelLogClient_FWD_DEFINED__
#define __ITravelLogClient_FWD_DEFINED__
typedef interface ITravelLogClient ITravelLogClient;
#ifdef __cplusplus
interface ITravelLogClient;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>
#include <shtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _WINDOWDATA {
    DWORD dwWindowID;
    UINT uiCP;
    PIDLIST_ABSOLUTE pidl;
    LPWSTR lpszUrl;
    LPWSTR lpszUrlLocation;
    LPWSTR lpszTitle;
} WINDOWDATA;
typedef WINDOWDATA *LPWINDOWDATA;
typedef const WINDOWDATA *LPCWINDOWDATA;
/*****************************************************************************
 * ITravelLogClient interface
 */
#ifndef __ITravelLogClient_INTERFACE_DEFINED__
#define __ITravelLogClient_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITravelLogClient, 0x241c033e, 0xe659, 0x43da, 0xaa,0x4d, 0x40,0x86,0xdb,0xc4,0x75,0x8d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("241c033e-e659-43da-aa4d-4086dbc4758d")
ITravelLogClient : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE FindWindowByIndex(
        DWORD dwID,
        IUnknown **ppunk) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWindowData(
        IStream *pStream,
        LPWINDOWDATA pWinData) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadHistoryPosition(
        LPWSTR pszUrlLocation,
        DWORD dwPosition) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITravelLogClient, 0x241c033e, 0xe659, 0x43da, 0xaa,0x4d, 0x40,0x86,0xdb,0xc4,0x75,0x8d)
#endif
#else
typedef struct ITravelLogClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITravelLogClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITravelLogClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITravelLogClient *This);

    /*** ITravelLogClient methods ***/
    HRESULT (STDMETHODCALLTYPE *FindWindowByIndex)(
        ITravelLogClient *This,
        DWORD dwID,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *GetWindowData)(
        ITravelLogClient *This,
        IStream *pStream,
        LPWINDOWDATA pWinData);

    HRESULT (STDMETHODCALLTYPE *LoadHistoryPosition)(
        ITravelLogClient *This,
        LPWSTR pszUrlLocation,
        DWORD dwPosition);

    END_INTERFACE
} ITravelLogClientVtbl;

interface ITravelLogClient {
    CONST_VTBL ITravelLogClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITravelLogClient_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITravelLogClient_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITravelLogClient_Release(This) (This)->lpVtbl->Release(This)
/*** ITravelLogClient methods ***/
#define ITravelLogClient_FindWindowByIndex(This,dwID,ppunk) (This)->lpVtbl->FindWindowByIndex(This,dwID,ppunk)
#define ITravelLogClient_GetWindowData(This,pStream,pWinData) (This)->lpVtbl->GetWindowData(This,pStream,pWinData)
#define ITravelLogClient_LoadHistoryPosition(This,pszUrlLocation,dwPosition) (This)->lpVtbl->LoadHistoryPosition(This,pszUrlLocation,dwPosition)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITravelLogClient_QueryInterface(ITravelLogClient* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITravelLogClient_AddRef(ITravelLogClient* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITravelLogClient_Release(ITravelLogClient* This) {
    return This->lpVtbl->Release(This);
}
/*** ITravelLogClient methods ***/
static FORCEINLINE HRESULT ITravelLogClient_FindWindowByIndex(ITravelLogClient* This,DWORD dwID,IUnknown **ppunk) {
    return This->lpVtbl->FindWindowByIndex(This,dwID,ppunk);
}
static FORCEINLINE HRESULT ITravelLogClient_GetWindowData(ITravelLogClient* This,IStream *pStream,LPWINDOWDATA pWinData) {
    return This->lpVtbl->GetWindowData(This,pStream,pWinData);
}
static FORCEINLINE HRESULT ITravelLogClient_LoadHistoryPosition(ITravelLogClient* This,LPWSTR pszUrlLocation,DWORD dwPosition) {
    return This->lpVtbl->LoadHistoryPosition(This,pszUrlLocation,dwPosition);
}
#endif
#endif

#endif


#endif  /* __ITravelLogClient_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __tlogstg_h__ */
