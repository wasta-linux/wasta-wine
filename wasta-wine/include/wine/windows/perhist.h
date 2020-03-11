/*** Autogenerated by WIDL 5.3 from perhist.idl - Do not edit ***/

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

#ifndef __perhist_h__
#define __perhist_h__

/* Forward declarations */

#ifndef __IPersistHistory_FWD_DEFINED__
#define __IPersistHistory_FWD_DEFINED__
typedef interface IPersistHistory IPersistHistory;
#ifdef __cplusplus
interface IPersistHistory;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IPersistHistory interface
 */
#ifndef __IPersistHistory_INTERFACE_DEFINED__
#define __IPersistHistory_INTERFACE_DEFINED__

typedef IPersistHistory *LPPERSISTHISTORY;
DEFINE_GUID(IID_IPersistHistory, 0x91a565c1, 0xe38f, 0x11d0, 0x94,0xbf, 0x00,0xa0,0xc9,0x05,0x5c,0xbf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("91a565c1-e38f-11d0-94bf-00a0c9055cbf")
IPersistHistory : public IPersist
{
    virtual HRESULT STDMETHODCALLTYPE LoadHistory(
        IStream *pStream,
        IBindCtx *pbc) = 0;

    virtual HRESULT STDMETHODCALLTYPE SaveHistory(
        IStream *pStream) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPositionCookie(
        DWORD dwPositioncookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPositionCookie(
        DWORD *pdwPositioncookie) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPersistHistory, 0x91a565c1, 0xe38f, 0x11d0, 0x94,0xbf, 0x00,0xa0,0xc9,0x05,0x5c,0xbf)
#endif
#else
typedef struct IPersistHistoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistHistory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistHistory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistHistory *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistHistory *This,
        CLSID *pClassID);

    /*** IPersistHistory methods ***/
    HRESULT (STDMETHODCALLTYPE *LoadHistory)(
        IPersistHistory *This,
        IStream *pStream,
        IBindCtx *pbc);

    HRESULT (STDMETHODCALLTYPE *SaveHistory)(
        IPersistHistory *This,
        IStream *pStream);

    HRESULT (STDMETHODCALLTYPE *SetPositionCookie)(
        IPersistHistory *This,
        DWORD dwPositioncookie);

    HRESULT (STDMETHODCALLTYPE *GetPositionCookie)(
        IPersistHistory *This,
        DWORD *pdwPositioncookie);

    END_INTERFACE
} IPersistHistoryVtbl;

interface IPersistHistory {
    CONST_VTBL IPersistHistoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPersistHistory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPersistHistory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPersistHistory_Release(This) (This)->lpVtbl->Release(This)
/*** IPersist methods ***/
#define IPersistHistory_GetClassID(This,pClassID) (This)->lpVtbl->GetClassID(This,pClassID)
/*** IPersistHistory methods ***/
#define IPersistHistory_LoadHistory(This,pStream,pbc) (This)->lpVtbl->LoadHistory(This,pStream,pbc)
#define IPersistHistory_SaveHistory(This,pStream) (This)->lpVtbl->SaveHistory(This,pStream)
#define IPersistHistory_SetPositionCookie(This,dwPositioncookie) (This)->lpVtbl->SetPositionCookie(This,dwPositioncookie)
#define IPersistHistory_GetPositionCookie(This,pdwPositioncookie) (This)->lpVtbl->GetPositionCookie(This,pdwPositioncookie)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IPersistHistory_QueryInterface(IPersistHistory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IPersistHistory_AddRef(IPersistHistory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IPersistHistory_Release(IPersistHistory* This) {
    return This->lpVtbl->Release(This);
}
/*** IPersist methods ***/
static FORCEINLINE HRESULT IPersistHistory_GetClassID(IPersistHistory* This,CLSID *pClassID) {
    return This->lpVtbl->GetClassID(This,pClassID);
}
/*** IPersistHistory methods ***/
static FORCEINLINE HRESULT IPersistHistory_LoadHistory(IPersistHistory* This,IStream *pStream,IBindCtx *pbc) {
    return This->lpVtbl->LoadHistory(This,pStream,pbc);
}
static FORCEINLINE HRESULT IPersistHistory_SaveHistory(IPersistHistory* This,IStream *pStream) {
    return This->lpVtbl->SaveHistory(This,pStream);
}
static FORCEINLINE HRESULT IPersistHistory_SetPositionCookie(IPersistHistory* This,DWORD dwPositioncookie) {
    return This->lpVtbl->SetPositionCookie(This,dwPositioncookie);
}
static FORCEINLINE HRESULT IPersistHistory_GetPositionCookie(IPersistHistory* This,DWORD *pdwPositioncookie) {
    return This->lpVtbl->GetPositionCookie(This,pdwPositioncookie);
}
#endif
#endif

#endif


#endif  /* __IPersistHistory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __perhist_h__ */
