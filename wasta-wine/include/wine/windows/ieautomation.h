/*** Autogenerated by WIDL 4.18 from ieautomation.idl - Do not edit ***/

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

#ifndef __ieautomation_h__
#define __ieautomation_h__

/* Forward declarations */

#ifndef __IInternetExplorerManager_FWD_DEFINED__
#define __IInternetExplorerManager_FWD_DEFINED__
typedef interface IInternetExplorerManager IInternetExplorerManager;
#ifdef __cplusplus
interface IInternetExplorerManager;
#endif /* __cplusplus */
#endif

#ifndef __InternetExplorerManager_FWD_DEFINED__
#define __InternetExplorerManager_FWD_DEFINED__
#ifdef __cplusplus
typedef class InternetExplorerManager InternetExplorerManager;
#else
typedef struct InternetExplorerManager InternetExplorerManager;
#endif /* defined __cplusplus */
#endif /* defined __InternetExplorerManager_FWD_DEFINED__ */

/* Headers for imported files */

#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum INTERNETEXPLORERCONFIGURATION {
    INTERNETEXPLORERCONFIGURATION_HOST = 0x1,
    INTERNETEXPLORERCONFIGURATION_WEB_DRIVER = 0x2,
    INTERNETEXPLORERCONFIGURATION_WEB_DRIVER_EDGE = 0x4
} INTERNETEXPLORERCONFIGURATION;
/*****************************************************************************
 * IInternetExplorerManager interface
 */
#ifndef __IInternetExplorerManager_INTERFACE_DEFINED__
#define __IInternetExplorerManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_IInternetExplorerManager, 0xacc84351, 0x04ff, 0x44f9, 0xb2,0x3f, 0x65,0x5e,0xd1,0x68,0xc6,0xd5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("acc84351-04ff-44f9-b23f-655ed168c6d5")
IInternetExplorerManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateObject(
        DWORD config,
        LPCWSTR url,
        REFIID riid,
        void **ppv) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IInternetExplorerManager, 0xacc84351, 0x04ff, 0x44f9, 0xb2,0x3f, 0x65,0x5e,0xd1,0x68,0xc6,0xd5)
#endif
#else
typedef struct IInternetExplorerManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetExplorerManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetExplorerManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetExplorerManager *This);

    /*** IInternetExplorerManager methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateObject)(
        IInternetExplorerManager *This,
        DWORD config,
        LPCWSTR url,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IInternetExplorerManagerVtbl;

interface IInternetExplorerManager {
    CONST_VTBL IInternetExplorerManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IInternetExplorerManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IInternetExplorerManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IInternetExplorerManager_Release(This) (This)->lpVtbl->Release(This)
/*** IInternetExplorerManager methods ***/
#define IInternetExplorerManager_CreateObject(This,config,url,riid,ppv) (This)->lpVtbl->CreateObject(This,config,url,riid,ppv)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IInternetExplorerManager_QueryInterface(IInternetExplorerManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IInternetExplorerManager_AddRef(IInternetExplorerManager* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IInternetExplorerManager_Release(IInternetExplorerManager* This) {
    return This->lpVtbl->Release(This);
}
/*** IInternetExplorerManager methods ***/
static FORCEINLINE HRESULT IInternetExplorerManager_CreateObject(IInternetExplorerManager* This,DWORD config,LPCWSTR url,REFIID riid,void **ppv) {
    return This->lpVtbl->CreateObject(This,config,url,riid,ppv);
}
#endif
#endif

#endif


#endif  /* __IInternetExplorerManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * InternetExplorerManager coclass
 */

DEFINE_GUID(CLSID_InternetExplorerManager, 0xdf4fcc34, 0x067a, 0x4e0a, 0x83,0x52, 0x4a,0x1a,0x50,0x95,0x34,0x6e);

#ifdef __cplusplus
class DECLSPEC_UUID("df4fcc34-067a-4e0a-8352-4a1a5095346e") InternetExplorerManager;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(InternetExplorerManager, 0xdf4fcc34, 0x067a, 0x4e0a, 0x83,0x52, 0x4a,0x1a,0x50,0x95,0x34,0x6e)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ieautomation_h__ */
