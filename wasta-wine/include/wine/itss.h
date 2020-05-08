/*** Autogenerated by WIDL 5.7 from wine/itss.idl - Do not edit ***/

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

#ifndef __itss_h__
#define __itss_h__

/* Forward declarations */

#ifndef __IITStorage_FWD_DEFINED__
#define __IITStorage_FWD_DEFINED__
typedef interface IITStorage IITStorage;
#ifdef __cplusplus
interface IITStorage;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _ITS_Control_Data {
    UINT cdwControlData;
    UINT adwControlData[1];
} ITS_Control_Data;
typedef struct _ITS_Control_Data *PITS_Control_Data;
typedef enum ECompactionLev {
    COMPACT_DATA = 0,
    COMPACT_DATA_AND_PATH = 1
} ECompactionLev;
/*****************************************************************************
 * IITStorage interface
 */
#ifndef __IITStorage_INTERFACE_DEFINED__
#define __IITStorage_INTERFACE_DEFINED__

DEFINE_GUID(IID_IITStorage, 0x88cc31de, 0x27ab, 0x11d0, 0x9d,0xf9, 0x00,0xa0,0xc9,0x22,0xe6,0xec);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("88cc31de-27ab-11d0-9df9-00a0c922e6ec")
IITStorage : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE StgCreateDocfile(
        const WCHAR *pwcsName,
        DWORD grfMode,
        DWORD reserved,
        IStorage **ppstgOpen) = 0;

    virtual HRESULT STDMETHODCALLTYPE StgCreateDocfileOnILockBytes(
        ILockBytes *plkbyt,
        DWORD grfMode,
        DWORD reserved,
        IStorage **ppstgOpen) = 0;

    virtual HRESULT STDMETHODCALLTYPE StgIsStorageFile(
        const WCHAR *pwcsName) = 0;

    virtual HRESULT STDMETHODCALLTYPE StgIsStorageILockBytes(
        ILockBytes *plkbyt) = 0;

    virtual HRESULT STDMETHODCALLTYPE StgOpenStorage(
        const WCHAR *pwcsName,
        IStorage *pstgPriority,
        DWORD grfMode,
        SNB snbExclude,
        DWORD reserved,
        IStorage **ppstgOpen) = 0;

    virtual HRESULT STDMETHODCALLTYPE StgOpenStorageOnILockBytes(
        ILockBytes *plkbyt,
        IStorage *pStgPriority,
        DWORD grfMode,
        SNB snbExclude,
        DWORD reserved,
        IStorage **ppstgOpen) = 0;

    virtual HRESULT STDMETHODCALLTYPE StgSetTimes(
        const WCHAR *lpszName,
        const FILETIME *pctime,
        const FILETIME *patime,
        const FILETIME *pmtime) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetControlData(
        PITS_Control_Data pControlData) = 0;

    virtual HRESULT STDMETHODCALLTYPE DefaultControlData(
        PITS_Control_Data *ppControlData) = 0;

    virtual HRESULT STDMETHODCALLTYPE Compact(
        const WCHAR *pwcsName,
        ECompactionLev iLev) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IITStorage, 0x88cc31de, 0x27ab, 0x11d0, 0x9d,0xf9, 0x00,0xa0,0xc9,0x22,0xe6,0xec)
#endif
#else
typedef struct IITStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IITStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IITStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IITStorage *This);

    /*** IITStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *StgCreateDocfile)(
        IITStorage *This,
        const WCHAR *pwcsName,
        DWORD grfMode,
        DWORD reserved,
        IStorage **ppstgOpen);

    HRESULT (STDMETHODCALLTYPE *StgCreateDocfileOnILockBytes)(
        IITStorage *This,
        ILockBytes *plkbyt,
        DWORD grfMode,
        DWORD reserved,
        IStorage **ppstgOpen);

    HRESULT (STDMETHODCALLTYPE *StgIsStorageFile)(
        IITStorage *This,
        const WCHAR *pwcsName);

    HRESULT (STDMETHODCALLTYPE *StgIsStorageILockBytes)(
        IITStorage *This,
        ILockBytes *plkbyt);

    HRESULT (STDMETHODCALLTYPE *StgOpenStorage)(
        IITStorage *This,
        const WCHAR *pwcsName,
        IStorage *pstgPriority,
        DWORD grfMode,
        SNB snbExclude,
        DWORD reserved,
        IStorage **ppstgOpen);

    HRESULT (STDMETHODCALLTYPE *StgOpenStorageOnILockBytes)(
        IITStorage *This,
        ILockBytes *plkbyt,
        IStorage *pStgPriority,
        DWORD grfMode,
        SNB snbExclude,
        DWORD reserved,
        IStorage **ppstgOpen);

    HRESULT (STDMETHODCALLTYPE *StgSetTimes)(
        IITStorage *This,
        const WCHAR *lpszName,
        const FILETIME *pctime,
        const FILETIME *patime,
        const FILETIME *pmtime);

    HRESULT (STDMETHODCALLTYPE *SetControlData)(
        IITStorage *This,
        PITS_Control_Data pControlData);

    HRESULT (STDMETHODCALLTYPE *DefaultControlData)(
        IITStorage *This,
        PITS_Control_Data *ppControlData);

    HRESULT (STDMETHODCALLTYPE *Compact)(
        IITStorage *This,
        const WCHAR *pwcsName,
        ECompactionLev iLev);

    END_INTERFACE
} IITStorageVtbl;

interface IITStorage {
    CONST_VTBL IITStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IITStorage_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IITStorage_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IITStorage_Release(This) (This)->lpVtbl->Release(This)
/*** IITStorage methods ***/
#define IITStorage_StgCreateDocfile(This,pwcsName,grfMode,reserved,ppstgOpen) (This)->lpVtbl->StgCreateDocfile(This,pwcsName,grfMode,reserved,ppstgOpen)
#define IITStorage_StgCreateDocfileOnILockBytes(This,plkbyt,grfMode,reserved,ppstgOpen) (This)->lpVtbl->StgCreateDocfileOnILockBytes(This,plkbyt,grfMode,reserved,ppstgOpen)
#define IITStorage_StgIsStorageFile(This,pwcsName) (This)->lpVtbl->StgIsStorageFile(This,pwcsName)
#define IITStorage_StgIsStorageILockBytes(This,plkbyt) (This)->lpVtbl->StgIsStorageILockBytes(This,plkbyt)
#define IITStorage_StgOpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstgOpen) (This)->lpVtbl->StgOpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstgOpen)
#define IITStorage_StgOpenStorageOnILockBytes(This,plkbyt,pStgPriority,grfMode,snbExclude,reserved,ppstgOpen) (This)->lpVtbl->StgOpenStorageOnILockBytes(This,plkbyt,pStgPriority,grfMode,snbExclude,reserved,ppstgOpen)
#define IITStorage_StgSetTimes(This,lpszName,pctime,patime,pmtime) (This)->lpVtbl->StgSetTimes(This,lpszName,pctime,patime,pmtime)
#define IITStorage_SetControlData(This,pControlData) (This)->lpVtbl->SetControlData(This,pControlData)
#define IITStorage_DefaultControlData(This,ppControlData) (This)->lpVtbl->DefaultControlData(This,ppControlData)
#define IITStorage_Compact(This,pwcsName,iLev) (This)->lpVtbl->Compact(This,pwcsName,iLev)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IITStorage_QueryInterface(IITStorage* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IITStorage_AddRef(IITStorage* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IITStorage_Release(IITStorage* This) {
    return This->lpVtbl->Release(This);
}
/*** IITStorage methods ***/
static FORCEINLINE HRESULT IITStorage_StgCreateDocfile(IITStorage* This,const WCHAR *pwcsName,DWORD grfMode,DWORD reserved,IStorage **ppstgOpen) {
    return This->lpVtbl->StgCreateDocfile(This,pwcsName,grfMode,reserved,ppstgOpen);
}
static FORCEINLINE HRESULT IITStorage_StgCreateDocfileOnILockBytes(IITStorage* This,ILockBytes *plkbyt,DWORD grfMode,DWORD reserved,IStorage **ppstgOpen) {
    return This->lpVtbl->StgCreateDocfileOnILockBytes(This,plkbyt,grfMode,reserved,ppstgOpen);
}
static FORCEINLINE HRESULT IITStorage_StgIsStorageFile(IITStorage* This,const WCHAR *pwcsName) {
    return This->lpVtbl->StgIsStorageFile(This,pwcsName);
}
static FORCEINLINE HRESULT IITStorage_StgIsStorageILockBytes(IITStorage* This,ILockBytes *plkbyt) {
    return This->lpVtbl->StgIsStorageILockBytes(This,plkbyt);
}
static FORCEINLINE HRESULT IITStorage_StgOpenStorage(IITStorage* This,const WCHAR *pwcsName,IStorage *pstgPriority,DWORD grfMode,SNB snbExclude,DWORD reserved,IStorage **ppstgOpen) {
    return This->lpVtbl->StgOpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstgOpen);
}
static FORCEINLINE HRESULT IITStorage_StgOpenStorageOnILockBytes(IITStorage* This,ILockBytes *plkbyt,IStorage *pStgPriority,DWORD grfMode,SNB snbExclude,DWORD reserved,IStorage **ppstgOpen) {
    return This->lpVtbl->StgOpenStorageOnILockBytes(This,plkbyt,pStgPriority,grfMode,snbExclude,reserved,ppstgOpen);
}
static FORCEINLINE HRESULT IITStorage_StgSetTimes(IITStorage* This,const WCHAR *lpszName,const FILETIME *pctime,const FILETIME *patime,const FILETIME *pmtime) {
    return This->lpVtbl->StgSetTimes(This,lpszName,pctime,patime,pmtime);
}
static FORCEINLINE HRESULT IITStorage_SetControlData(IITStorage* This,PITS_Control_Data pControlData) {
    return This->lpVtbl->SetControlData(This,pControlData);
}
static FORCEINLINE HRESULT IITStorage_DefaultControlData(IITStorage* This,PITS_Control_Data *ppControlData) {
    return This->lpVtbl->DefaultControlData(This,ppControlData);
}
static FORCEINLINE HRESULT IITStorage_Compact(IITStorage* This,const WCHAR *pwcsName,ECompactionLev iLev) {
    return This->lpVtbl->Compact(This,pwcsName,iLev);
}
#endif
#endif

#endif


#endif  /* __IITStorage_INTERFACE_DEFINED__ */

DEFINE_GUID(CLSID_ITStorage,0x5d02926a,0x212e,0x11d0,0x9d,0xf9,0x00,0xa0,0xc9,0x22,0xe6,0xec);
DEFINE_GUID(CLSID_MSFSStore,0xd54eee56,0xaaab,0x11d0,0x9e,0x1d,0x00,0xa0,0xc9,0x22,0xe6,0xec);
DEFINE_GUID(CLSID_MSITStore,0x9d148290,0xb9c8,0x11d0,0xa4,0xcc,0x00,0x00,0xf8,0x01,0x49,0xf6);
DEFINE_GUID(CLSID_ITSProtocol,0x9d148291,0xb9c8,0x11d0,0xa4,0xcc,0x00,0x00,0xf8,0x01,0x49,0xf6);
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER SNB_UserSize     (ULONG *, ULONG, SNB *);
unsigned char * __RPC_USER SNB_UserMarshal  (ULONG *, unsigned char *, SNB *);
unsigned char * __RPC_USER SNB_UserUnmarshal(ULONG *, unsigned char *, SNB *);
void            __RPC_USER SNB_UserFree     (ULONG *, SNB *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __itss_h__ */
