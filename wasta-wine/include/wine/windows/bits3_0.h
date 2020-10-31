/*** Autogenerated by WIDL 5.20 from include/bits3_0.idl - Do not edit ***/

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

#ifndef __bits3_0_h__
#define __bits3_0_h__

/* Forward declarations */

#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#ifdef __cplusplus
interface IBackgroundCopyCallback2;
#endif /* __cplusplus */
#endif

#ifndef __IBackgroundCopyJob4_FWD_DEFINED__
#define __IBackgroundCopyJob4_FWD_DEFINED__
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
#ifdef __cplusplus
interface IBackgroundCopyJob4;
#endif /* __cplusplus */
#endif

#ifndef __BackgroundCopyManager3_0_FWD_DEFINED__
#define __BackgroundCopyManager3_0_FWD_DEFINED__
#ifdef __cplusplus
typedef class BackgroundCopyManager3_0 BackgroundCopyManager3_0;
#else
typedef struct BackgroundCopyManager3_0 BackgroundCopyManager3_0;
#endif /* defined __cplusplus */
#endif /* defined __BackgroundCopyManager3_0_FWD_DEFINED__ */

/* Headers for imported files */

#include <bits.h>
#include <bits2_0.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IBackgroundCopyCallback2 interface
 */
#ifndef __IBackgroundCopyCallback2_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IBackgroundCopyCallback2, 0x659cdeac, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("659cdeac-489e-11d9-a9cd-000d56965251")
IBackgroundCopyCallback2 : public IBackgroundCopyCallback
{
    virtual HRESULT STDMETHODCALLTYPE FileTransferred(
        IBackgroundCopyJob *job,
        IBackgroundCopyFile *file) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBackgroundCopyCallback2, 0x659cdeac, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51)
#endif
#else
typedef struct IBackgroundCopyCallback2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyCallback2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyCallback2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyCallback2 *This);

    /*** IBackgroundCopyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *JobTransferred)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob);

    HRESULT (STDMETHODCALLTYPE *JobError)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyError *pError);

    HRESULT (STDMETHODCALLTYPE *JobModification)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        DWORD dwReserved);

    /*** IBackgroundCopyCallback2 methods ***/
    HRESULT (STDMETHODCALLTYPE *FileTransferred)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *job,
        IBackgroundCopyFile *file);

    END_INTERFACE
} IBackgroundCopyCallback2Vtbl;

interface IBackgroundCopyCallback2 {
    CONST_VTBL IBackgroundCopyCallback2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBackgroundCopyCallback2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBackgroundCopyCallback2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBackgroundCopyCallback2_Release(This) (This)->lpVtbl->Release(This)
/*** IBackgroundCopyCallback methods ***/
#define IBackgroundCopyCallback2_JobTransferred(This,pJob) (This)->lpVtbl->JobTransferred(This,pJob)
#define IBackgroundCopyCallback2_JobError(This,pJob,pError) (This)->lpVtbl->JobError(This,pJob,pError)
#define IBackgroundCopyCallback2_JobModification(This,pJob,dwReserved) (This)->lpVtbl->JobModification(This,pJob,dwReserved)
/*** IBackgroundCopyCallback2 methods ***/
#define IBackgroundCopyCallback2_FileTransferred(This,job,file) (This)->lpVtbl->FileTransferred(This,job,file)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IBackgroundCopyCallback2_QueryInterface(IBackgroundCopyCallback2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IBackgroundCopyCallback2_AddRef(IBackgroundCopyCallback2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IBackgroundCopyCallback2_Release(IBackgroundCopyCallback2* This) {
    return This->lpVtbl->Release(This);
}
/*** IBackgroundCopyCallback methods ***/
static FORCEINLINE HRESULT IBackgroundCopyCallback2_JobTransferred(IBackgroundCopyCallback2* This,IBackgroundCopyJob *pJob) {
    return This->lpVtbl->JobTransferred(This,pJob);
}
static FORCEINLINE HRESULT IBackgroundCopyCallback2_JobError(IBackgroundCopyCallback2* This,IBackgroundCopyJob *pJob,IBackgroundCopyError *pError) {
    return This->lpVtbl->JobError(This,pJob,pError);
}
static FORCEINLINE HRESULT IBackgroundCopyCallback2_JobModification(IBackgroundCopyCallback2* This,IBackgroundCopyJob *pJob,DWORD dwReserved) {
    return This->lpVtbl->JobModification(This,pJob,dwReserved);
}
/*** IBackgroundCopyCallback2 methods ***/
static FORCEINLINE HRESULT IBackgroundCopyCallback2_FileTransferred(IBackgroundCopyCallback2* This,IBackgroundCopyJob *job,IBackgroundCopyFile *file) {
    return This->lpVtbl->FileTransferred(This,job,file);
}
#endif
#endif

#endif


#endif  /* __IBackgroundCopyCallback2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyJob4 interface
 */
#ifndef __IBackgroundCopyJob4_INTERFACE_DEFINED__
#define __IBackgroundCopyJob4_INTERFACE_DEFINED__

#define BG_JOB_ENABLE_PEERCACHING_CLIENT 0x0001
#define BG_JOB_ENABLE_PEERCACHING_SERVER 0x0002
#define BG_JOB_DISABLE_BRANCH_CACHE      0x0004
DEFINE_GUID(IID_IBackgroundCopyJob4, 0x659cdeae, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("659cdeae-489e-11d9-a9cd-000d56965251")
IBackgroundCopyJob4 : public IBackgroundCopyJob3
{
    virtual HRESULT STDMETHODCALLTYPE SetPeerCachingFlags(
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPeerCachingFlags(
        DWORD *flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOwnerIntegrityLevel(
        ULONG *level) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOwnerElevationState(
        BOOL *elevated) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetMaximumDownloadTime(
        ULONG timeout) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaximumDownloadTime(
        ULONG *timeout) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBackgroundCopyJob4, 0x659cdeae, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51)
#endif
#else
typedef struct IBackgroundCopyJob4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob4 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob4 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob4 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob4 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob4 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob4 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob4 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob4 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob4 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob4 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob4 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob4 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob4 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob4 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob4 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob4 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob4 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob4 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob4 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob4 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob4 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob4 *This,
        LPCWSTR prog,
        LPCWSTR params);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob4 *This,
        LPWSTR *prog,
        LPWSTR *params);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob4 *This,
        BG_JOB_REPLY_PROGRESS *progress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob4 *This,
        byte **pBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob4 *This,
        LPCWSTR filename);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob4 *This,
        BG_AUTH_CREDENTIALS *cred);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob4 *This,
        BG_AUTH_TARGET target,
        BG_AUTH_SCHEME scheme);

    /*** IBackgroundCopyJob3 methods ***/
    HRESULT (STDMETHODCALLTYPE *ReplaceRemotePrefix)(
        IBackgroundCopyJob4 *This,
        LPCWSTR OldPrefix,
        LPCWSTR NewPrefix);

    HRESULT (STDMETHODCALLTYPE *AddFileWithRanges)(
        IBackgroundCopyJob4 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName,
        DWORD RangeCount,
        BG_FILE_RANGE Ranges[]);

    HRESULT (STDMETHODCALLTYPE *SetFileACLFlags)(
        IBackgroundCopyJob4 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetFileACLFlags)(
        IBackgroundCopyJob4 *This,
        DWORD *Flags);

    /*** IBackgroundCopyJob4 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPeerCachingFlags)(
        IBackgroundCopyJob4 *This,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *GetPeerCachingFlags)(
        IBackgroundCopyJob4 *This,
        DWORD *flags);

    HRESULT (STDMETHODCALLTYPE *GetOwnerIntegrityLevel)(
        IBackgroundCopyJob4 *This,
        ULONG *level);

    HRESULT (STDMETHODCALLTYPE *GetOwnerElevationState)(
        IBackgroundCopyJob4 *This,
        BOOL *elevated);

    HRESULT (STDMETHODCALLTYPE *SetMaximumDownloadTime)(
        IBackgroundCopyJob4 *This,
        ULONG timeout);

    HRESULT (STDMETHODCALLTYPE *GetMaximumDownloadTime)(
        IBackgroundCopyJob4 *This,
        ULONG *timeout);

    END_INTERFACE
} IBackgroundCopyJob4Vtbl;

interface IBackgroundCopyJob4 {
    CONST_VTBL IBackgroundCopyJob4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBackgroundCopyJob4_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBackgroundCopyJob4_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBackgroundCopyJob4_Release(This) (This)->lpVtbl->Release(This)
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob4_AddFileSet(This,cFileCount,pFileSet) (This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet)
#define IBackgroundCopyJob4_AddFile(This,RemoteUrl,LocalName) (This)->lpVtbl->AddFile(This,RemoteUrl,LocalName)
#define IBackgroundCopyJob4_EnumFiles(This,pEnum) (This)->lpVtbl->EnumFiles(This,pEnum)
#define IBackgroundCopyJob4_Suspend(This) (This)->lpVtbl->Suspend(This)
#define IBackgroundCopyJob4_Resume(This) (This)->lpVtbl->Resume(This)
#define IBackgroundCopyJob4_Cancel(This) (This)->lpVtbl->Cancel(This)
#define IBackgroundCopyJob4_Complete(This) (This)->lpVtbl->Complete(This)
#define IBackgroundCopyJob4_GetId(This,pVal) (This)->lpVtbl->GetId(This,pVal)
#define IBackgroundCopyJob4_GetType(This,pVal) (This)->lpVtbl->GetType(This,pVal)
#define IBackgroundCopyJob4_GetProgress(This,pVal) (This)->lpVtbl->GetProgress(This,pVal)
#define IBackgroundCopyJob4_GetTimes(This,pVal) (This)->lpVtbl->GetTimes(This,pVal)
#define IBackgroundCopyJob4_GetState(This,pVal) (This)->lpVtbl->GetState(This,pVal)
#define IBackgroundCopyJob4_GetError(This,ppError) (This)->lpVtbl->GetError(This,ppError)
#define IBackgroundCopyJob4_GetOwner(This,pVal) (This)->lpVtbl->GetOwner(This,pVal)
#define IBackgroundCopyJob4_SetDisplayName(This,Val) (This)->lpVtbl->SetDisplayName(This,Val)
#define IBackgroundCopyJob4_GetDisplayName(This,pVal) (This)->lpVtbl->GetDisplayName(This,pVal)
#define IBackgroundCopyJob4_SetDescription(This,Val) (This)->lpVtbl->SetDescription(This,Val)
#define IBackgroundCopyJob4_GetDescription(This,pVal) (This)->lpVtbl->GetDescription(This,pVal)
#define IBackgroundCopyJob4_SetPriority(This,Val) (This)->lpVtbl->SetPriority(This,Val)
#define IBackgroundCopyJob4_GetPriority(This,pVal) (This)->lpVtbl->GetPriority(This,pVal)
#define IBackgroundCopyJob4_SetNotifyFlags(This,Val) (This)->lpVtbl->SetNotifyFlags(This,Val)
#define IBackgroundCopyJob4_GetNotifyFlags(This,pVal) (This)->lpVtbl->GetNotifyFlags(This,pVal)
#define IBackgroundCopyJob4_SetNotifyInterface(This,Val) (This)->lpVtbl->SetNotifyInterface(This,Val)
#define IBackgroundCopyJob4_GetNotifyInterface(This,pVal) (This)->lpVtbl->GetNotifyInterface(This,pVal)
#define IBackgroundCopyJob4_SetMinimumRetryDelay(This,Seconds) (This)->lpVtbl->SetMinimumRetryDelay(This,Seconds)
#define IBackgroundCopyJob4_GetMinimumRetryDelay(This,Seconds) (This)->lpVtbl->GetMinimumRetryDelay(This,Seconds)
#define IBackgroundCopyJob4_SetNoProgressTimeout(This,Seconds) (This)->lpVtbl->SetNoProgressTimeout(This,Seconds)
#define IBackgroundCopyJob4_GetNoProgressTimeout(This,Seconds) (This)->lpVtbl->GetNoProgressTimeout(This,Seconds)
#define IBackgroundCopyJob4_GetErrorCount(This,Errors) (This)->lpVtbl->GetErrorCount(This,Errors)
#define IBackgroundCopyJob4_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) (This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList)
#define IBackgroundCopyJob4_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) (This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList)
#define IBackgroundCopyJob4_TakeOwnership(This) (This)->lpVtbl->TakeOwnership(This)
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob4_SetNotifyCmdLine(This,prog,params) (This)->lpVtbl->SetNotifyCmdLine(This,prog,params)
#define IBackgroundCopyJob4_GetNotifyCmdLine(This,prog,params) (This)->lpVtbl->GetNotifyCmdLine(This,prog,params)
#define IBackgroundCopyJob4_GetReplyProgress(This,progress) (This)->lpVtbl->GetReplyProgress(This,progress)
#define IBackgroundCopyJob4_GetReplyData(This,pBuffer,pLength) (This)->lpVtbl->GetReplyData(This,pBuffer,pLength)
#define IBackgroundCopyJob4_SetReplyFileName(This,filename) (This)->lpVtbl->SetReplyFileName(This,filename)
#define IBackgroundCopyJob4_GetReplyFileName(This,pFilename) (This)->lpVtbl->GetReplyFileName(This,pFilename)
#define IBackgroundCopyJob4_SetCredentials(This,cred) (This)->lpVtbl->SetCredentials(This,cred)
#define IBackgroundCopyJob4_RemoveCredentials(This,target,scheme) (This)->lpVtbl->RemoveCredentials(This,target,scheme)
/*** IBackgroundCopyJob3 methods ***/
#define IBackgroundCopyJob4_ReplaceRemotePrefix(This,OldPrefix,NewPrefix) (This)->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix)
#define IBackgroundCopyJob4_AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) (This)->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges)
#define IBackgroundCopyJob4_SetFileACLFlags(This,Flags) (This)->lpVtbl->SetFileACLFlags(This,Flags)
#define IBackgroundCopyJob4_GetFileACLFlags(This,Flags) (This)->lpVtbl->GetFileACLFlags(This,Flags)
/*** IBackgroundCopyJob4 methods ***/
#define IBackgroundCopyJob4_SetPeerCachingFlags(This,flags) (This)->lpVtbl->SetPeerCachingFlags(This,flags)
#define IBackgroundCopyJob4_GetPeerCachingFlags(This,flags) (This)->lpVtbl->GetPeerCachingFlags(This,flags)
#define IBackgroundCopyJob4_GetOwnerIntegrityLevel(This,level) (This)->lpVtbl->GetOwnerIntegrityLevel(This,level)
#define IBackgroundCopyJob4_GetOwnerElevationState(This,elevated) (This)->lpVtbl->GetOwnerElevationState(This,elevated)
#define IBackgroundCopyJob4_SetMaximumDownloadTime(This,timeout) (This)->lpVtbl->SetMaximumDownloadTime(This,timeout)
#define IBackgroundCopyJob4_GetMaximumDownloadTime(This,timeout) (This)->lpVtbl->GetMaximumDownloadTime(This,timeout)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IBackgroundCopyJob4_QueryInterface(IBackgroundCopyJob4* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IBackgroundCopyJob4_AddRef(IBackgroundCopyJob4* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IBackgroundCopyJob4_Release(IBackgroundCopyJob4* This) {
    return This->lpVtbl->Release(This);
}
/*** IBackgroundCopyJob methods ***/
static FORCEINLINE HRESULT IBackgroundCopyJob4_AddFileSet(IBackgroundCopyJob4* This,ULONG cFileCount,BG_FILE_INFO *pFileSet) {
    return This->lpVtbl->AddFileSet(This,cFileCount,pFileSet);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_AddFile(IBackgroundCopyJob4* This,LPCWSTR RemoteUrl,LPCWSTR LocalName) {
    return This->lpVtbl->AddFile(This,RemoteUrl,LocalName);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_EnumFiles(IBackgroundCopyJob4* This,IEnumBackgroundCopyFiles **pEnum) {
    return This->lpVtbl->EnumFiles(This,pEnum);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_Suspend(IBackgroundCopyJob4* This) {
    return This->lpVtbl->Suspend(This);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_Resume(IBackgroundCopyJob4* This) {
    return This->lpVtbl->Resume(This);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_Cancel(IBackgroundCopyJob4* This) {
    return This->lpVtbl->Cancel(This);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_Complete(IBackgroundCopyJob4* This) {
    return This->lpVtbl->Complete(This);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetId(IBackgroundCopyJob4* This,GUID *pVal) {
    return This->lpVtbl->GetId(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetType(IBackgroundCopyJob4* This,BG_JOB_TYPE *pVal) {
    return This->lpVtbl->GetType(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetProgress(IBackgroundCopyJob4* This,BG_JOB_PROGRESS *pVal) {
    return This->lpVtbl->GetProgress(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetTimes(IBackgroundCopyJob4* This,BG_JOB_TIMES *pVal) {
    return This->lpVtbl->GetTimes(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetState(IBackgroundCopyJob4* This,BG_JOB_STATE *pVal) {
    return This->lpVtbl->GetState(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetError(IBackgroundCopyJob4* This,IBackgroundCopyError **ppError) {
    return This->lpVtbl->GetError(This,ppError);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetOwner(IBackgroundCopyJob4* This,LPWSTR *pVal) {
    return This->lpVtbl->GetOwner(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetDisplayName(IBackgroundCopyJob4* This,LPCWSTR Val) {
    return This->lpVtbl->SetDisplayName(This,Val);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetDisplayName(IBackgroundCopyJob4* This,LPWSTR *pVal) {
    return This->lpVtbl->GetDisplayName(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetDescription(IBackgroundCopyJob4* This,LPCWSTR Val) {
    return This->lpVtbl->SetDescription(This,Val);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetDescription(IBackgroundCopyJob4* This,LPWSTR *pVal) {
    return This->lpVtbl->GetDescription(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetPriority(IBackgroundCopyJob4* This,BG_JOB_PRIORITY Val) {
    return This->lpVtbl->SetPriority(This,Val);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetPriority(IBackgroundCopyJob4* This,BG_JOB_PRIORITY *pVal) {
    return This->lpVtbl->GetPriority(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetNotifyFlags(IBackgroundCopyJob4* This,ULONG Val) {
    return This->lpVtbl->SetNotifyFlags(This,Val);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetNotifyFlags(IBackgroundCopyJob4* This,ULONG *pVal) {
    return This->lpVtbl->GetNotifyFlags(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetNotifyInterface(IBackgroundCopyJob4* This,IUnknown *Val) {
    return This->lpVtbl->SetNotifyInterface(This,Val);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetNotifyInterface(IBackgroundCopyJob4* This,IUnknown **pVal) {
    return This->lpVtbl->GetNotifyInterface(This,pVal);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetMinimumRetryDelay(IBackgroundCopyJob4* This,ULONG Seconds) {
    return This->lpVtbl->SetMinimumRetryDelay(This,Seconds);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetMinimumRetryDelay(IBackgroundCopyJob4* This,ULONG *Seconds) {
    return This->lpVtbl->GetMinimumRetryDelay(This,Seconds);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetNoProgressTimeout(IBackgroundCopyJob4* This,ULONG Seconds) {
    return This->lpVtbl->SetNoProgressTimeout(This,Seconds);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetNoProgressTimeout(IBackgroundCopyJob4* This,ULONG *Seconds) {
    return This->lpVtbl->GetNoProgressTimeout(This,Seconds);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetErrorCount(IBackgroundCopyJob4* This,ULONG *Errors) {
    return This->lpVtbl->GetErrorCount(This,Errors);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetProxySettings(IBackgroundCopyJob4* This,BG_JOB_PROXY_USAGE ProxyUsage,const WCHAR *ProxyList,const WCHAR *ProxyBypassList) {
    return This->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetProxySettings(IBackgroundCopyJob4* This,BG_JOB_PROXY_USAGE *pProxyUsage,LPWSTR *pProxyList,LPWSTR *pProxyBypassList) {
    return This->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_TakeOwnership(IBackgroundCopyJob4* This) {
    return This->lpVtbl->TakeOwnership(This);
}
/*** IBackgroundCopyJob2 methods ***/
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetNotifyCmdLine(IBackgroundCopyJob4* This,LPCWSTR prog,LPCWSTR params) {
    return This->lpVtbl->SetNotifyCmdLine(This,prog,params);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetNotifyCmdLine(IBackgroundCopyJob4* This,LPWSTR *prog,LPWSTR *params) {
    return This->lpVtbl->GetNotifyCmdLine(This,prog,params);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetReplyProgress(IBackgroundCopyJob4* This,BG_JOB_REPLY_PROGRESS *progress) {
    return This->lpVtbl->GetReplyProgress(This,progress);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetReplyData(IBackgroundCopyJob4* This,byte **pBuffer,UINT64 *pLength) {
    return This->lpVtbl->GetReplyData(This,pBuffer,pLength);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetReplyFileName(IBackgroundCopyJob4* This,LPCWSTR filename) {
    return This->lpVtbl->SetReplyFileName(This,filename);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetReplyFileName(IBackgroundCopyJob4* This,LPWSTR *pFilename) {
    return This->lpVtbl->GetReplyFileName(This,pFilename);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetCredentials(IBackgroundCopyJob4* This,BG_AUTH_CREDENTIALS *cred) {
    return This->lpVtbl->SetCredentials(This,cred);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_RemoveCredentials(IBackgroundCopyJob4* This,BG_AUTH_TARGET target,BG_AUTH_SCHEME scheme) {
    return This->lpVtbl->RemoveCredentials(This,target,scheme);
}
/*** IBackgroundCopyJob3 methods ***/
static FORCEINLINE HRESULT IBackgroundCopyJob4_ReplaceRemotePrefix(IBackgroundCopyJob4* This,LPCWSTR OldPrefix,LPCWSTR NewPrefix) {
    return This->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_AddFileWithRanges(IBackgroundCopyJob4* This,LPCWSTR RemoteUrl,LPCWSTR LocalName,DWORD RangeCount,BG_FILE_RANGE Ranges[]) {
    return This->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetFileACLFlags(IBackgroundCopyJob4* This,DWORD Flags) {
    return This->lpVtbl->SetFileACLFlags(This,Flags);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetFileACLFlags(IBackgroundCopyJob4* This,DWORD *Flags) {
    return This->lpVtbl->GetFileACLFlags(This,Flags);
}
/*** IBackgroundCopyJob4 methods ***/
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetPeerCachingFlags(IBackgroundCopyJob4* This,DWORD flags) {
    return This->lpVtbl->SetPeerCachingFlags(This,flags);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetPeerCachingFlags(IBackgroundCopyJob4* This,DWORD *flags) {
    return This->lpVtbl->GetPeerCachingFlags(This,flags);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetOwnerIntegrityLevel(IBackgroundCopyJob4* This,ULONG *level) {
    return This->lpVtbl->GetOwnerIntegrityLevel(This,level);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetOwnerElevationState(IBackgroundCopyJob4* This,BOOL *elevated) {
    return This->lpVtbl->GetOwnerElevationState(This,elevated);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_SetMaximumDownloadTime(IBackgroundCopyJob4* This,ULONG timeout) {
    return This->lpVtbl->SetMaximumDownloadTime(This,timeout);
}
static FORCEINLINE HRESULT IBackgroundCopyJob4_GetMaximumDownloadTime(IBackgroundCopyJob4* This,ULONG *timeout) {
    return This->lpVtbl->GetMaximumDownloadTime(This,timeout);
}
#endif
#endif

#endif


#endif  /* __IBackgroundCopyJob4_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager3_0_LIBRARY_DEFINED__
#define __BackgroundCopyManager3_0_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_BackgroundCopyManager3_0, 0x659cdea6, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51);

/*****************************************************************************
 * BackgroundCopyManager3_0 coclass
 */

DEFINE_GUID(CLSID_BackgroundCopyManager3_0, 0x659cdea7, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51);

#ifdef __cplusplus
class DECLSPEC_UUID("659cdea7-489e-11d9-a9cd-000d56965251") BackgroundCopyManager3_0;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(BackgroundCopyManager3_0, 0x659cdea7, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51)
#endif
#endif

#ifndef __IBackgroundCopyJob4_FWD_DEFINED__
#define __IBackgroundCopyJob4_FWD_DEFINED__
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
#ifdef __cplusplus
interface IBackgroundCopyJob4;
#endif /* __cplusplus */
#endif

#endif /* __BackgroundCopyManager3_0_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __bits3_0_h__ */
