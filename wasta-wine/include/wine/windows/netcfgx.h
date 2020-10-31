/*** Autogenerated by WIDL 5.20 from include/netcfgx.idl - Do not edit ***/

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

#ifndef __netcfgx_h__
#define __netcfgx_h__

/* Forward declarations */

#ifndef __INetCfgComponent_FWD_DEFINED__
#define __INetCfgComponent_FWD_DEFINED__
typedef interface INetCfgComponent INetCfgComponent;
#ifdef __cplusplus
interface INetCfgComponent;
#endif /* __cplusplus */
#endif

#ifndef __IEnumNetCfgComponent_FWD_DEFINED__
#define __IEnumNetCfgComponent_FWD_DEFINED__
typedef interface IEnumNetCfgComponent IEnumNetCfgComponent;
#ifdef __cplusplus
interface IEnumNetCfgComponent;
#endif /* __cplusplus */
#endif

#ifndef __INetCfgLock_FWD_DEFINED__
#define __INetCfgLock_FWD_DEFINED__
typedef interface INetCfgLock INetCfgLock;
#ifdef __cplusplus
interface INetCfgLock;
#endif /* __cplusplus */
#endif

#ifndef __INetCfg_FWD_DEFINED__
#define __INetCfg_FWD_DEFINED__
typedef interface INetCfg INetCfg;
#ifdef __cplusplus
interface INetCfg;
#endif /* __cplusplus */
#endif

#ifndef __CNetCfg_FWD_DEFINED__
#define __CNetCfg_FWD_DEFINED__
#ifdef __cplusplus
typedef class CNetCfg CNetCfg;
#else
typedef struct CNetCfg CNetCfg;
#endif /* defined __cplusplus */
#endif /* defined __CNetCfg_FWD_DEFINED__ */

/* Headers for imported files */

#include <unknwn.h>
#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NETCFG_E_ALREADY_INITIALIZED  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA020)
#define NETCFG_E_NO_WRITE_LOCK        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA024)
/*****************************************************************************
 * INetCfgComponent interface
 */
#ifndef __INetCfgComponent_INTERFACE_DEFINED__
#define __INetCfgComponent_INTERFACE_DEFINED__

typedef enum tagCOMPONENT_CHARACTERISTICS {
    NCF_VIRTUAL = 0x1,
    NCF_SOFTWARE_ENUMERATED = 0x2,
    NCF_PHYSICAL = 0x4,
    NCF_HIDDEN = 0x8,
    NCF_NO_SERVICE = 0x10,
    NCF_NOT_USER_REMOVABLE = 0x20,
    NCF_MULTIPORT_INSTANCED_ADAPTER = 0x40,
    NCF_HAS_UI = 0x80,
    NCF_SINGLE_INSTANCE = 0x100,
    NCF_FILTER = 0x400,
    NCF_DONTEXPOSELOWER = 0x1000,
    NCF_HIDE_BINDING = 0x2000,
    NCF_NDIS_PROTOCOL = 0x4000,
    NCF_FIXED_BINDING = 0x20000,
    NCF_LW_FILTER = 0x40000
} COMPONENT_CHARACTERISTICS;
typedef enum tagNCRP_FLAGS {
    NCRP_QUERY_PROPERTY_UI = 0x1,
    NCRP_SHOW_PROPERTY_UI = 0x2
} NCRP_FLAGS;
DEFINE_GUID(IID_INetCfgComponent, 0xc0e8ae99, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c0e8ae99-306e-11d1-aacf-00805fc1270e")
INetCfgComponent : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetDisplayName(
        LPWSTR *ppszwDisplayName) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDisplayName(
        LPCWSTR pszwDisplayName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetHelpText(
        LPWSTR *pszwHelpText) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetId(
        LPWSTR *ppszwId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCharacteristics(
        LPDWORD pdwCharacteristics) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInstanceGuid(
        GUID *pGuid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPnpDevNodeId(
        LPWSTR *ppszwDevNodeId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetClassGuid(
        GUID *pGuid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBindName(
        LPWSTR *ppszwBindName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDeviceStatus(
        ULONG *pulStatus) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenParamKey(
        HKEY *phkey) = 0;

    virtual HRESULT STDMETHODCALLTYPE RaisePropertyUi(
        HWND hwndParent,
        DWORD dwFlags,
        IUnknown *punkContext) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INetCfgComponent, 0xc0e8ae99, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e)
#endif
#else
typedef struct INetCfgComponentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INetCfgComponent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INetCfgComponent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INetCfgComponent *This);

    /*** INetCfgComponent methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        INetCfgComponent *This,
        LPWSTR *ppszwDisplayName);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        INetCfgComponent *This,
        LPCWSTR pszwDisplayName);

    HRESULT (STDMETHODCALLTYPE *GetHelpText)(
        INetCfgComponent *This,
        LPWSTR *pszwHelpText);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        INetCfgComponent *This,
        LPWSTR *ppszwId);

    HRESULT (STDMETHODCALLTYPE *GetCharacteristics)(
        INetCfgComponent *This,
        LPDWORD pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *GetInstanceGuid)(
        INetCfgComponent *This,
        GUID *pGuid);

    HRESULT (STDMETHODCALLTYPE *GetPnpDevNodeId)(
        INetCfgComponent *This,
        LPWSTR *ppszwDevNodeId);

    HRESULT (STDMETHODCALLTYPE *GetClassGuid)(
        INetCfgComponent *This,
        GUID *pGuid);

    HRESULT (STDMETHODCALLTYPE *GetBindName)(
        INetCfgComponent *This,
        LPWSTR *ppszwBindName);

    HRESULT (STDMETHODCALLTYPE *GetDeviceStatus)(
        INetCfgComponent *This,
        ULONG *pulStatus);

    HRESULT (STDMETHODCALLTYPE *OpenParamKey)(
        INetCfgComponent *This,
        HKEY *phkey);

    HRESULT (STDMETHODCALLTYPE *RaisePropertyUi)(
        INetCfgComponent *This,
        HWND hwndParent,
        DWORD dwFlags,
        IUnknown *punkContext);

    END_INTERFACE
} INetCfgComponentVtbl;

interface INetCfgComponent {
    CONST_VTBL INetCfgComponentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INetCfgComponent_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INetCfgComponent_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INetCfgComponent_Release(This) (This)->lpVtbl->Release(This)
/*** INetCfgComponent methods ***/
#define INetCfgComponent_GetDisplayName(This,ppszwDisplayName) (This)->lpVtbl->GetDisplayName(This,ppszwDisplayName)
#define INetCfgComponent_SetDisplayName(This,pszwDisplayName) (This)->lpVtbl->SetDisplayName(This,pszwDisplayName)
#define INetCfgComponent_GetHelpText(This,pszwHelpText) (This)->lpVtbl->GetHelpText(This,pszwHelpText)
#define INetCfgComponent_GetId(This,ppszwId) (This)->lpVtbl->GetId(This,ppszwId)
#define INetCfgComponent_GetCharacteristics(This,pdwCharacteristics) (This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics)
#define INetCfgComponent_GetInstanceGuid(This,pGuid) (This)->lpVtbl->GetInstanceGuid(This,pGuid)
#define INetCfgComponent_GetPnpDevNodeId(This,ppszwDevNodeId) (This)->lpVtbl->GetPnpDevNodeId(This,ppszwDevNodeId)
#define INetCfgComponent_GetClassGuid(This,pGuid) (This)->lpVtbl->GetClassGuid(This,pGuid)
#define INetCfgComponent_GetBindName(This,ppszwBindName) (This)->lpVtbl->GetBindName(This,ppszwBindName)
#define INetCfgComponent_GetDeviceStatus(This,pulStatus) (This)->lpVtbl->GetDeviceStatus(This,pulStatus)
#define INetCfgComponent_OpenParamKey(This,phkey) (This)->lpVtbl->OpenParamKey(This,phkey)
#define INetCfgComponent_RaisePropertyUi(This,hwndParent,dwFlags,punkContext) (This)->lpVtbl->RaisePropertyUi(This,hwndParent,dwFlags,punkContext)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INetCfgComponent_QueryInterface(INetCfgComponent* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INetCfgComponent_AddRef(INetCfgComponent* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INetCfgComponent_Release(INetCfgComponent* This) {
    return This->lpVtbl->Release(This);
}
/*** INetCfgComponent methods ***/
static FORCEINLINE HRESULT INetCfgComponent_GetDisplayName(INetCfgComponent* This,LPWSTR *ppszwDisplayName) {
    return This->lpVtbl->GetDisplayName(This,ppszwDisplayName);
}
static FORCEINLINE HRESULT INetCfgComponent_SetDisplayName(INetCfgComponent* This,LPCWSTR pszwDisplayName) {
    return This->lpVtbl->SetDisplayName(This,pszwDisplayName);
}
static FORCEINLINE HRESULT INetCfgComponent_GetHelpText(INetCfgComponent* This,LPWSTR *pszwHelpText) {
    return This->lpVtbl->GetHelpText(This,pszwHelpText);
}
static FORCEINLINE HRESULT INetCfgComponent_GetId(INetCfgComponent* This,LPWSTR *ppszwId) {
    return This->lpVtbl->GetId(This,ppszwId);
}
static FORCEINLINE HRESULT INetCfgComponent_GetCharacteristics(INetCfgComponent* This,LPDWORD pdwCharacteristics) {
    return This->lpVtbl->GetCharacteristics(This,pdwCharacteristics);
}
static FORCEINLINE HRESULT INetCfgComponent_GetInstanceGuid(INetCfgComponent* This,GUID *pGuid) {
    return This->lpVtbl->GetInstanceGuid(This,pGuid);
}
static FORCEINLINE HRESULT INetCfgComponent_GetPnpDevNodeId(INetCfgComponent* This,LPWSTR *ppszwDevNodeId) {
    return This->lpVtbl->GetPnpDevNodeId(This,ppszwDevNodeId);
}
static FORCEINLINE HRESULT INetCfgComponent_GetClassGuid(INetCfgComponent* This,GUID *pGuid) {
    return This->lpVtbl->GetClassGuid(This,pGuid);
}
static FORCEINLINE HRESULT INetCfgComponent_GetBindName(INetCfgComponent* This,LPWSTR *ppszwBindName) {
    return This->lpVtbl->GetBindName(This,ppszwBindName);
}
static FORCEINLINE HRESULT INetCfgComponent_GetDeviceStatus(INetCfgComponent* This,ULONG *pulStatus) {
    return This->lpVtbl->GetDeviceStatus(This,pulStatus);
}
static FORCEINLINE HRESULT INetCfgComponent_OpenParamKey(INetCfgComponent* This,HKEY *phkey) {
    return This->lpVtbl->OpenParamKey(This,phkey);
}
static FORCEINLINE HRESULT INetCfgComponent_RaisePropertyUi(INetCfgComponent* This,HWND hwndParent,DWORD dwFlags,IUnknown *punkContext) {
    return This->lpVtbl->RaisePropertyUi(This,hwndParent,dwFlags,punkContext);
}
#endif
#endif

#endif


#endif  /* __INetCfgComponent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumNetCfgComponent interface
 */
#ifndef __IEnumNetCfgComponent_INTERFACE_DEFINED__
#define __IEnumNetCfgComponent_INTERFACE_DEFINED__

DEFINE_GUID(IID_IEnumNetCfgComponent, 0xc0e8ae92, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c0e8ae92-306e-11d1-aacf-00805fc1270e")
IEnumNetCfgComponent : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Next(
        ULONG celt,
        INetCfgComponent **rgelt,
        ULONG *pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        ULONG celt) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumNetCfgComponent **ppenum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumNetCfgComponent, 0xc0e8ae92, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e)
#endif
#else
typedef struct IEnumNetCfgComponentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumNetCfgComponent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumNetCfgComponent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumNetCfgComponent *This);

    /*** IEnumNetCfgComponent methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumNetCfgComponent *This,
        ULONG celt,
        INetCfgComponent **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumNetCfgComponent *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumNetCfgComponent *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumNetCfgComponent *This,
        IEnumNetCfgComponent **ppenum);

    END_INTERFACE
} IEnumNetCfgComponentVtbl;

interface IEnumNetCfgComponent {
    CONST_VTBL IEnumNetCfgComponentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumNetCfgComponent_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumNetCfgComponent_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumNetCfgComponent_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumNetCfgComponent methods ***/
#define IEnumNetCfgComponent_Next(This,celt,rgelt,pceltFetched) (This)->lpVtbl->Next(This,celt,rgelt,pceltFetched)
#define IEnumNetCfgComponent_Skip(This,celt) (This)->lpVtbl->Skip(This,celt)
#define IEnumNetCfgComponent_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumNetCfgComponent_Clone(This,ppenum) (This)->lpVtbl->Clone(This,ppenum)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IEnumNetCfgComponent_QueryInterface(IEnumNetCfgComponent* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IEnumNetCfgComponent_AddRef(IEnumNetCfgComponent* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IEnumNetCfgComponent_Release(IEnumNetCfgComponent* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumNetCfgComponent methods ***/
static FORCEINLINE HRESULT IEnumNetCfgComponent_Next(IEnumNetCfgComponent* This,ULONG celt,INetCfgComponent **rgelt,ULONG *pceltFetched) {
    return This->lpVtbl->Next(This,celt,rgelt,pceltFetched);
}
static FORCEINLINE HRESULT IEnumNetCfgComponent_Skip(IEnumNetCfgComponent* This,ULONG celt) {
    return This->lpVtbl->Skip(This,celt);
}
static FORCEINLINE HRESULT IEnumNetCfgComponent_Reset(IEnumNetCfgComponent* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT IEnumNetCfgComponent_Clone(IEnumNetCfgComponent* This,IEnumNetCfgComponent **ppenum) {
    return This->lpVtbl->Clone(This,ppenum);
}
#endif
#endif

#endif


#endif  /* __IEnumNetCfgComponent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INetCfgLock interface
 */
#ifndef __INetCfgLock_INTERFACE_DEFINED__
#define __INetCfgLock_INTERFACE_DEFINED__

DEFINE_GUID(IID_INetCfgLock, 0xc0e8ae9f, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c0e8ae9f-306e-11d1-aacf-00805fc1270e")
INetCfgLock : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AcquireWriteLock(
        DWORD cmsTimeout,
        LPCWSTR pszwClientDescription,
        LPWSTR *ppszwClientDescription) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReleaseWriteLock(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsWriteLocked(
        LPWSTR *ppszwClientDescription) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INetCfgLock, 0xc0e8ae9f, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e)
#endif
#else
typedef struct INetCfgLockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INetCfgLock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INetCfgLock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INetCfgLock *This);

    /*** INetCfgLock methods ***/
    HRESULT (STDMETHODCALLTYPE *AcquireWriteLock)(
        INetCfgLock *This,
        DWORD cmsTimeout,
        LPCWSTR pszwClientDescription,
        LPWSTR *ppszwClientDescription);

    HRESULT (STDMETHODCALLTYPE *ReleaseWriteLock)(
        INetCfgLock *This);

    HRESULT (STDMETHODCALLTYPE *IsWriteLocked)(
        INetCfgLock *This,
        LPWSTR *ppszwClientDescription);

    END_INTERFACE
} INetCfgLockVtbl;

interface INetCfgLock {
    CONST_VTBL INetCfgLockVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INetCfgLock_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INetCfgLock_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INetCfgLock_Release(This) (This)->lpVtbl->Release(This)
/*** INetCfgLock methods ***/
#define INetCfgLock_AcquireWriteLock(This,cmsTimeout,pszwClientDescription,ppszwClientDescription) (This)->lpVtbl->AcquireWriteLock(This,cmsTimeout,pszwClientDescription,ppszwClientDescription)
#define INetCfgLock_ReleaseWriteLock(This) (This)->lpVtbl->ReleaseWriteLock(This)
#define INetCfgLock_IsWriteLocked(This,ppszwClientDescription) (This)->lpVtbl->IsWriteLocked(This,ppszwClientDescription)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INetCfgLock_QueryInterface(INetCfgLock* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INetCfgLock_AddRef(INetCfgLock* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INetCfgLock_Release(INetCfgLock* This) {
    return This->lpVtbl->Release(This);
}
/*** INetCfgLock methods ***/
static FORCEINLINE HRESULT INetCfgLock_AcquireWriteLock(INetCfgLock* This,DWORD cmsTimeout,LPCWSTR pszwClientDescription,LPWSTR *ppszwClientDescription) {
    return This->lpVtbl->AcquireWriteLock(This,cmsTimeout,pszwClientDescription,ppszwClientDescription);
}
static FORCEINLINE HRESULT INetCfgLock_ReleaseWriteLock(INetCfgLock* This) {
    return This->lpVtbl->ReleaseWriteLock(This);
}
static FORCEINLINE HRESULT INetCfgLock_IsWriteLocked(INetCfgLock* This,LPWSTR *ppszwClientDescription) {
    return This->lpVtbl->IsWriteLocked(This,ppszwClientDescription);
}
#endif
#endif

#endif


#endif  /* __INetCfgLock_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INetCfg interface
 */
#ifndef __INetCfg_INTERFACE_DEFINED__
#define __INetCfg_INTERFACE_DEFINED__

DEFINE_GUID(IID_INetCfg, 0xc0e8ae93, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c0e8ae93-306e-11d1-aacf-00805fc1270e")
INetCfg : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        PVOID pvReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE Uninitialize(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Apply(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Cancel(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumComponents(
        const GUID *pguidClass,
        IEnumNetCfgComponent **ppenumComponent) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindComponent(
        LPCWSTR pszwInfId,
        INetCfgComponent **pComponent) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryNetCfgClass(
        const GUID *pguidClass,
        REFIID riid,
        void **ppvObject) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INetCfg, 0xc0e8ae93, 0x306e, 0x11d1, 0xaa,0xcf, 0x00,0x80,0x5f,0xc1,0x27,0x0e)
#endif
#else
typedef struct INetCfgVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INetCfg *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INetCfg *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INetCfg *This);

    /*** INetCfg methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INetCfg *This,
        PVOID pvReserved);

    HRESULT (STDMETHODCALLTYPE *Uninitialize)(
        INetCfg *This);

    HRESULT (STDMETHODCALLTYPE *Apply)(
        INetCfg *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        INetCfg *This);

    HRESULT (STDMETHODCALLTYPE *EnumComponents)(
        INetCfg *This,
        const GUID *pguidClass,
        IEnumNetCfgComponent **ppenumComponent);

    HRESULT (STDMETHODCALLTYPE *FindComponent)(
        INetCfg *This,
        LPCWSTR pszwInfId,
        INetCfgComponent **pComponent);

    HRESULT (STDMETHODCALLTYPE *QueryNetCfgClass)(
        INetCfg *This,
        const GUID *pguidClass,
        REFIID riid,
        void **ppvObject);

    END_INTERFACE
} INetCfgVtbl;

interface INetCfg {
    CONST_VTBL INetCfgVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INetCfg_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INetCfg_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INetCfg_Release(This) (This)->lpVtbl->Release(This)
/*** INetCfg methods ***/
#define INetCfg_Initialize(This,pvReserved) (This)->lpVtbl->Initialize(This,pvReserved)
#define INetCfg_Uninitialize(This) (This)->lpVtbl->Uninitialize(This)
#define INetCfg_Apply(This) (This)->lpVtbl->Apply(This)
#define INetCfg_Cancel(This) (This)->lpVtbl->Cancel(This)
#define INetCfg_EnumComponents(This,pguidClass,ppenumComponent) (This)->lpVtbl->EnumComponents(This,pguidClass,ppenumComponent)
#define INetCfg_FindComponent(This,pszwInfId,pComponent) (This)->lpVtbl->FindComponent(This,pszwInfId,pComponent)
#define INetCfg_QueryNetCfgClass(This,pguidClass,riid,ppvObject) (This)->lpVtbl->QueryNetCfgClass(This,pguidClass,riid,ppvObject)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INetCfg_QueryInterface(INetCfg* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INetCfg_AddRef(INetCfg* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INetCfg_Release(INetCfg* This) {
    return This->lpVtbl->Release(This);
}
/*** INetCfg methods ***/
static FORCEINLINE HRESULT INetCfg_Initialize(INetCfg* This,PVOID pvReserved) {
    return This->lpVtbl->Initialize(This,pvReserved);
}
static FORCEINLINE HRESULT INetCfg_Uninitialize(INetCfg* This) {
    return This->lpVtbl->Uninitialize(This);
}
static FORCEINLINE HRESULT INetCfg_Apply(INetCfg* This) {
    return This->lpVtbl->Apply(This);
}
static FORCEINLINE HRESULT INetCfg_Cancel(INetCfg* This) {
    return This->lpVtbl->Cancel(This);
}
static FORCEINLINE HRESULT INetCfg_EnumComponents(INetCfg* This,const GUID *pguidClass,IEnumNetCfgComponent **ppenumComponent) {
    return This->lpVtbl->EnumComponents(This,pguidClass,ppenumComponent);
}
static FORCEINLINE HRESULT INetCfg_FindComponent(INetCfg* This,LPCWSTR pszwInfId,INetCfgComponent **pComponent) {
    return This->lpVtbl->FindComponent(This,pszwInfId,pComponent);
}
static FORCEINLINE HRESULT INetCfg_QueryNetCfgClass(INetCfg* This,const GUID *pguidClass,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryNetCfgClass(This,pguidClass,riid,ppvObject);
}
#endif
#endif

#endif


#endif  /* __INetCfg_INTERFACE_DEFINED__ */

/*****************************************************************************
 * CNetCfg coclass
 */

DEFINE_GUID(CLSID_CNetCfg, 0x5b035261, 0x40f9, 0x11d1, 0xaa,0xec, 0x00,0x80,0x5f,0xc1,0x27,0x0e);

#ifdef __cplusplus
class DECLSPEC_UUID("5b035261-40f9-11d1-aaec-00805fc1270e") CNetCfg;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(CNetCfg, 0x5b035261, 0x40f9, 0x11d1, 0xaa,0xec, 0x00,0x80,0x5f,0xc1,0x27,0x0e)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __netcfgx_h__ */
