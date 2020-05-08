/*** Autogenerated by WIDL 5.7 from wsddisco.idl - Do not edit ***/

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

#ifndef __wsddisco_h__
#define __wsddisco_h__

/* Forward declarations */

#ifndef __IWSDScopeMatchingRule_FWD_DEFINED__
#define __IWSDScopeMatchingRule_FWD_DEFINED__
typedef interface IWSDScopeMatchingRule IWSDScopeMatchingRule;
#ifdef __cplusplus
interface IWSDScopeMatchingRule;
#endif /* __cplusplus */
#endif

#ifndef __IWSDiscoveryPublisherNotify_FWD_DEFINED__
#define __IWSDiscoveryPublisherNotify_FWD_DEFINED__
typedef interface IWSDiscoveryPublisherNotify IWSDiscoveryPublisherNotify;
#ifdef __cplusplus
interface IWSDiscoveryPublisherNotify;
#endif /* __cplusplus */
#endif

#ifndef __IWSDiscoveryPublisher_FWD_DEFINED__
#define __IWSDiscoveryPublisher_FWD_DEFINED__
typedef interface IWSDiscoveryPublisher IWSDiscoveryPublisher;
#ifdef __cplusplus
interface IWSDiscoveryPublisher;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <wsdxmldom.h>
#include <wsdtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IWSDScopeMatchingRule_FWD_DEFINED__
#define __IWSDScopeMatchingRule_FWD_DEFINED__
typedef interface IWSDScopeMatchingRule IWSDScopeMatchingRule;
#ifdef __cplusplus
interface IWSDScopeMatchingRule;
#endif /* __cplusplus */
#endif

#ifndef __IWSDiscoveryPublisherNotify_FWD_DEFINED__
#define __IWSDiscoveryPublisherNotify_FWD_DEFINED__
typedef interface IWSDiscoveryPublisherNotify IWSDiscoveryPublisherNotify;
#ifdef __cplusplus
interface IWSDiscoveryPublisherNotify;
#endif /* __cplusplus */
#endif

#ifndef __IWSDiscoveryPublisher_FWD_DEFINED__
#define __IWSDiscoveryPublisher_FWD_DEFINED__
typedef interface IWSDiscoveryPublisher IWSDiscoveryPublisher;
#ifdef __cplusplus
interface IWSDiscoveryPublisher;
#endif /* __cplusplus */
#endif

#ifndef __IWSDXMLContext_FWD_DEFINED__
#define __IWSDXMLContext_FWD_DEFINED__
typedef interface IWSDXMLContext IWSDXMLContext;
#ifdef __cplusplus
interface IWSDXMLContext;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IWSDScopeMatchingRule interface
 */
#ifndef __IWSDScopeMatchingRule_INTERFACE_DEFINED__
#define __IWSDScopeMatchingRule_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDScopeMatchingRule, 0xfcafe424, 0xfef5, 0x481a, 0xbd,0x9f, 0x33,0xce,0x05,0x74,0x25,0x6f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("fcafe424-fef5-481a-bd9f-33ce0574256f")
IWSDScopeMatchingRule : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetScopeRule(
        LPCWSTR *ppszScopeMatchingRule) = 0;

    virtual HRESULT STDMETHODCALLTYPE MatchScopes(
        LPCWSTR pszScope1,
        LPCWSTR pszScope2,
        BOOL *pfMatch) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDScopeMatchingRule, 0xfcafe424, 0xfef5, 0x481a, 0xbd,0x9f, 0x33,0xce,0x05,0x74,0x25,0x6f)
#endif
#else
typedef struct IWSDScopeMatchingRuleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDScopeMatchingRule *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDScopeMatchingRule *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDScopeMatchingRule *This);

    /*** IWSDScopeMatchingRule methods ***/
    HRESULT (STDMETHODCALLTYPE *GetScopeRule)(
        IWSDScopeMatchingRule *This,
        LPCWSTR *ppszScopeMatchingRule);

    HRESULT (STDMETHODCALLTYPE *MatchScopes)(
        IWSDScopeMatchingRule *This,
        LPCWSTR pszScope1,
        LPCWSTR pszScope2,
        BOOL *pfMatch);

    END_INTERFACE
} IWSDScopeMatchingRuleVtbl;

interface IWSDScopeMatchingRule {
    CONST_VTBL IWSDScopeMatchingRuleVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDScopeMatchingRule_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDScopeMatchingRule_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDScopeMatchingRule_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDScopeMatchingRule methods ***/
#define IWSDScopeMatchingRule_GetScopeRule(This,ppszScopeMatchingRule) (This)->lpVtbl->GetScopeRule(This,ppszScopeMatchingRule)
#define IWSDScopeMatchingRule_MatchScopes(This,pszScope1,pszScope2,pfMatch) (This)->lpVtbl->MatchScopes(This,pszScope1,pszScope2,pfMatch)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWSDScopeMatchingRule_QueryInterface(IWSDScopeMatchingRule* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWSDScopeMatchingRule_AddRef(IWSDScopeMatchingRule* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWSDScopeMatchingRule_Release(IWSDScopeMatchingRule* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDScopeMatchingRule methods ***/
static FORCEINLINE HRESULT IWSDScopeMatchingRule_GetScopeRule(IWSDScopeMatchingRule* This,LPCWSTR *ppszScopeMatchingRule) {
    return This->lpVtbl->GetScopeRule(This,ppszScopeMatchingRule);
}
static FORCEINLINE HRESULT IWSDScopeMatchingRule_MatchScopes(IWSDScopeMatchingRule* This,LPCWSTR pszScope1,LPCWSTR pszScope2,BOOL *pfMatch) {
    return This->lpVtbl->MatchScopes(This,pszScope1,pszScope2,pfMatch);
}
#endif
#endif

#endif


#endif  /* __IWSDScopeMatchingRule_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWSDiscoveryPublisherNotify interface
 */
#ifndef __IWSDiscoveryPublisherNotify_INTERFACE_DEFINED__
#define __IWSDiscoveryPublisherNotify_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDiscoveryPublisherNotify, 0xe67651b0, 0x337a, 0x4b3c, 0x97,0x58, 0x73,0x33,0x88,0x56,0x82,0x51);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e67651b0-337a-4b3c-9758-733388568251")
IWSDiscoveryPublisherNotify : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ProbeHandler(
        const WSD_SOAP_MESSAGE *pSoap,
        IWSDMessageParameters *pMessageParameters) = 0;

    virtual HRESULT STDMETHODCALLTYPE ResolveHandler(
        const WSD_SOAP_MESSAGE *pSoap,
        IWSDMessageParameters *pMessageParameters) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDiscoveryPublisherNotify, 0xe67651b0, 0x337a, 0x4b3c, 0x97,0x58, 0x73,0x33,0x88,0x56,0x82,0x51)
#endif
#else
typedef struct IWSDiscoveryPublisherNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDiscoveryPublisherNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDiscoveryPublisherNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDiscoveryPublisherNotify *This);

    /*** IWSDiscoveryPublisherNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *ProbeHandler)(
        IWSDiscoveryPublisherNotify *This,
        const WSD_SOAP_MESSAGE *pSoap,
        IWSDMessageParameters *pMessageParameters);

    HRESULT (STDMETHODCALLTYPE *ResolveHandler)(
        IWSDiscoveryPublisherNotify *This,
        const WSD_SOAP_MESSAGE *pSoap,
        IWSDMessageParameters *pMessageParameters);

    END_INTERFACE
} IWSDiscoveryPublisherNotifyVtbl;

interface IWSDiscoveryPublisherNotify {
    CONST_VTBL IWSDiscoveryPublisherNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDiscoveryPublisherNotify_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDiscoveryPublisherNotify_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDiscoveryPublisherNotify_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDiscoveryPublisherNotify methods ***/
#define IWSDiscoveryPublisherNotify_ProbeHandler(This,pSoap,pMessageParameters) (This)->lpVtbl->ProbeHandler(This,pSoap,pMessageParameters)
#define IWSDiscoveryPublisherNotify_ResolveHandler(This,pSoap,pMessageParameters) (This)->lpVtbl->ResolveHandler(This,pSoap,pMessageParameters)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWSDiscoveryPublisherNotify_QueryInterface(IWSDiscoveryPublisherNotify* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWSDiscoveryPublisherNotify_AddRef(IWSDiscoveryPublisherNotify* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWSDiscoveryPublisherNotify_Release(IWSDiscoveryPublisherNotify* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDiscoveryPublisherNotify methods ***/
static FORCEINLINE HRESULT IWSDiscoveryPublisherNotify_ProbeHandler(IWSDiscoveryPublisherNotify* This,const WSD_SOAP_MESSAGE *pSoap,IWSDMessageParameters *pMessageParameters) {
    return This->lpVtbl->ProbeHandler(This,pSoap,pMessageParameters);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisherNotify_ResolveHandler(IWSDiscoveryPublisherNotify* This,const WSD_SOAP_MESSAGE *pSoap,IWSDMessageParameters *pMessageParameters) {
    return This->lpVtbl->ResolveHandler(This,pSoap,pMessageParameters);
}
#endif
#endif

#endif


#endif  /* __IWSDiscoveryPublisherNotify_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWSDiscoveryPublisher interface
 */
#ifndef __IWSDiscoveryPublisher_INTERFACE_DEFINED__
#define __IWSDiscoveryPublisher_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDiscoveryPublisher, 0xae01e1a8, 0x3ff9, 0x4148, 0x81,0x16, 0x05,0x7c,0xc6,0x16,0xfe,0x13);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("ae01e1a8-3ff9-4148-8116-057cc616fe13")
IWSDiscoveryPublisher : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetAddressFamily(
        DWORD dwAddressFamily) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterNotificationSink(
        IWSDiscoveryPublisherNotify *pSink) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnRegisterNotificationSink(
        IWSDiscoveryPublisherNotify *pSink) = 0;

    virtual HRESULT STDMETHODCALLTYPE Publish(
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnPublish(
        LPCWSTR pszId,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSDXML_ELEMENT *pAny) = 0;

    virtual HRESULT STDMETHODCALLTYPE MatchProbe(
        const WSD_SOAP_MESSAGE *pProbeMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList) = 0;

    virtual HRESULT STDMETHODCALLTYPE MatchResolve(
        const WSD_SOAP_MESSAGE *pResolveMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList) = 0;

    virtual HRESULT STDMETHODCALLTYPE PublishEx(
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList,
        const WSDXML_ELEMENT *pHeaderAny,
        const WSDXML_ELEMENT *pReferenceParameterAny,
        const WSDXML_ELEMENT *pPolicyAny,
        const WSDXML_ELEMENT *pEndpointReferenceAny,
        const WSDXML_ELEMENT *pAny) = 0;

    virtual HRESULT STDMETHODCALLTYPE MatchProbeEx(
        const WSD_SOAP_MESSAGE *pProbeMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList,
        const WSDXML_ELEMENT *pHeaderAny,
        const WSDXML_ELEMENT *pReferenceParameterAny,
        const WSDXML_ELEMENT *pPolicyAny,
        const WSDXML_ELEMENT *pEndpointReferenceAny,
        const WSDXML_ELEMENT *pAny) = 0;

    virtual HRESULT STDMETHODCALLTYPE MatchResolveEx(
        const WSD_SOAP_MESSAGE *pResolveMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList,
        const WSDXML_ELEMENT *pHeaderAny,
        const WSDXML_ELEMENT *pReferenceParameterAny,
        const WSDXML_ELEMENT *pPolicyAny,
        const WSDXML_ELEMENT *pEndpointReferenceAny,
        const WSDXML_ELEMENT *pAny) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterScopeMatchingRule(
        IWSDScopeMatchingRule *pScopeMatchingRule) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnRegisterScopeMatchingRule(
        IWSDScopeMatchingRule *pScopeMatchingRule) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetXMLContext(
        IWSDXMLContext **ppContext) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDiscoveryPublisher, 0xae01e1a8, 0x3ff9, 0x4148, 0x81,0x16, 0x05,0x7c,0xc6,0x16,0xfe,0x13)
#endif
#else
typedef struct IWSDiscoveryPublisherVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDiscoveryPublisher *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDiscoveryPublisher *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDiscoveryPublisher *This);

    /*** IWSDiscoveryPublisher methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAddressFamily)(
        IWSDiscoveryPublisher *This,
        DWORD dwAddressFamily);

    HRESULT (STDMETHODCALLTYPE *RegisterNotificationSink)(
        IWSDiscoveryPublisher *This,
        IWSDiscoveryPublisherNotify *pSink);

    HRESULT (STDMETHODCALLTYPE *UnRegisterNotificationSink)(
        IWSDiscoveryPublisher *This,
        IWSDiscoveryPublisherNotify *pSink);

    HRESULT (STDMETHODCALLTYPE *Publish)(
        IWSDiscoveryPublisher *This,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList);

    HRESULT (STDMETHODCALLTYPE *UnPublish)(
        IWSDiscoveryPublisher *This,
        LPCWSTR pszId,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSDXML_ELEMENT *pAny);

    HRESULT (STDMETHODCALLTYPE *MatchProbe)(
        IWSDiscoveryPublisher *This,
        const WSD_SOAP_MESSAGE *pProbeMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList);

    HRESULT (STDMETHODCALLTYPE *MatchResolve)(
        IWSDiscoveryPublisher *This,
        const WSD_SOAP_MESSAGE *pResolveMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList);

    HRESULT (STDMETHODCALLTYPE *PublishEx)(
        IWSDiscoveryPublisher *This,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList,
        const WSDXML_ELEMENT *pHeaderAny,
        const WSDXML_ELEMENT *pReferenceParameterAny,
        const WSDXML_ELEMENT *pPolicyAny,
        const WSDXML_ELEMENT *pEndpointReferenceAny,
        const WSDXML_ELEMENT *pAny);

    HRESULT (STDMETHODCALLTYPE *MatchProbeEx)(
        IWSDiscoveryPublisher *This,
        const WSD_SOAP_MESSAGE *pProbeMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList,
        const WSDXML_ELEMENT *pHeaderAny,
        const WSDXML_ELEMENT *pReferenceParameterAny,
        const WSDXML_ELEMENT *pPolicyAny,
        const WSDXML_ELEMENT *pEndpointReferenceAny,
        const WSDXML_ELEMENT *pAny);

    HRESULT (STDMETHODCALLTYPE *MatchResolveEx)(
        IWSDiscoveryPublisher *This,
        const WSD_SOAP_MESSAGE *pResolveMessage,
        IWSDMessageParameters *pMessageParameters,
        LPCWSTR pszId,
        ULONGLONG ullMetadataVersion,
        ULONGLONG ullInstanceId,
        ULONGLONG ullMessageNumber,
        LPCWSTR pszSessionId,
        const WSD_NAME_LIST *pTypesList,
        const WSD_URI_LIST *pScopesList,
        const WSD_URI_LIST *pXAddrsList,
        const WSDXML_ELEMENT *pHeaderAny,
        const WSDXML_ELEMENT *pReferenceParameterAny,
        const WSDXML_ELEMENT *pPolicyAny,
        const WSDXML_ELEMENT *pEndpointReferenceAny,
        const WSDXML_ELEMENT *pAny);

    HRESULT (STDMETHODCALLTYPE *RegisterScopeMatchingRule)(
        IWSDiscoveryPublisher *This,
        IWSDScopeMatchingRule *pScopeMatchingRule);

    HRESULT (STDMETHODCALLTYPE *UnRegisterScopeMatchingRule)(
        IWSDiscoveryPublisher *This,
        IWSDScopeMatchingRule *pScopeMatchingRule);

    HRESULT (STDMETHODCALLTYPE *GetXMLContext)(
        IWSDiscoveryPublisher *This,
        IWSDXMLContext **ppContext);

    END_INTERFACE
} IWSDiscoveryPublisherVtbl;

interface IWSDiscoveryPublisher {
    CONST_VTBL IWSDiscoveryPublisherVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDiscoveryPublisher_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDiscoveryPublisher_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDiscoveryPublisher_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDiscoveryPublisher methods ***/
#define IWSDiscoveryPublisher_SetAddressFamily(This,dwAddressFamily) (This)->lpVtbl->SetAddressFamily(This,dwAddressFamily)
#define IWSDiscoveryPublisher_RegisterNotificationSink(This,pSink) (This)->lpVtbl->RegisterNotificationSink(This,pSink)
#define IWSDiscoveryPublisher_UnRegisterNotificationSink(This,pSink) (This)->lpVtbl->UnRegisterNotificationSink(This,pSink)
#define IWSDiscoveryPublisher_Publish(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) (This)->lpVtbl->Publish(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList)
#define IWSDiscoveryPublisher_UnPublish(This,pszId,ullInstanceId,ullMessageNumber,pszSessionId,pAny) (This)->lpVtbl->UnPublish(This,pszId,ullInstanceId,ullMessageNumber,pszSessionId,pAny)
#define IWSDiscoveryPublisher_MatchProbe(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) (This)->lpVtbl->MatchProbe(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList)
#define IWSDiscoveryPublisher_MatchResolve(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) (This)->lpVtbl->MatchResolve(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList)
#define IWSDiscoveryPublisher_PublishEx(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) (This)->lpVtbl->PublishEx(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny)
#define IWSDiscoveryPublisher_MatchProbeEx(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) (This)->lpVtbl->MatchProbeEx(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny)
#define IWSDiscoveryPublisher_MatchResolveEx(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) (This)->lpVtbl->MatchResolveEx(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny)
#define IWSDiscoveryPublisher_RegisterScopeMatchingRule(This,pScopeMatchingRule) (This)->lpVtbl->RegisterScopeMatchingRule(This,pScopeMatchingRule)
#define IWSDiscoveryPublisher_UnRegisterScopeMatchingRule(This,pScopeMatchingRule) (This)->lpVtbl->UnRegisterScopeMatchingRule(This,pScopeMatchingRule)
#define IWSDiscoveryPublisher_GetXMLContext(This,ppContext) (This)->lpVtbl->GetXMLContext(This,ppContext)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWSDiscoveryPublisher_QueryInterface(IWSDiscoveryPublisher* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWSDiscoveryPublisher_AddRef(IWSDiscoveryPublisher* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWSDiscoveryPublisher_Release(IWSDiscoveryPublisher* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDiscoveryPublisher methods ***/
static FORCEINLINE HRESULT IWSDiscoveryPublisher_SetAddressFamily(IWSDiscoveryPublisher* This,DWORD dwAddressFamily) {
    return This->lpVtbl->SetAddressFamily(This,dwAddressFamily);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_RegisterNotificationSink(IWSDiscoveryPublisher* This,IWSDiscoveryPublisherNotify *pSink) {
    return This->lpVtbl->RegisterNotificationSink(This,pSink);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_UnRegisterNotificationSink(IWSDiscoveryPublisher* This,IWSDiscoveryPublisherNotify *pSink) {
    return This->lpVtbl->UnRegisterNotificationSink(This,pSink);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_Publish(IWSDiscoveryPublisher* This,LPCWSTR pszId,ULONGLONG ullMetadataVersion,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSD_NAME_LIST *pTypesList,const WSD_URI_LIST *pScopesList,const WSD_URI_LIST *pXAddrsList) {
    return This->lpVtbl->Publish(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_UnPublish(IWSDiscoveryPublisher* This,LPCWSTR pszId,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSDXML_ELEMENT *pAny) {
    return This->lpVtbl->UnPublish(This,pszId,ullInstanceId,ullMessageNumber,pszSessionId,pAny);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_MatchProbe(IWSDiscoveryPublisher* This,const WSD_SOAP_MESSAGE *pProbeMessage,IWSDMessageParameters *pMessageParameters,LPCWSTR pszId,ULONGLONG ullMetadataVersion,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSD_NAME_LIST *pTypesList,const WSD_URI_LIST *pScopesList,const WSD_URI_LIST *pXAddrsList) {
    return This->lpVtbl->MatchProbe(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_MatchResolve(IWSDiscoveryPublisher* This,const WSD_SOAP_MESSAGE *pResolveMessage,IWSDMessageParameters *pMessageParameters,LPCWSTR pszId,ULONGLONG ullMetadataVersion,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSD_NAME_LIST *pTypesList,const WSD_URI_LIST *pScopesList,const WSD_URI_LIST *pXAddrsList) {
    return This->lpVtbl->MatchResolve(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_PublishEx(IWSDiscoveryPublisher* This,LPCWSTR pszId,ULONGLONG ullMetadataVersion,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSD_NAME_LIST *pTypesList,const WSD_URI_LIST *pScopesList,const WSD_URI_LIST *pXAddrsList,const WSDXML_ELEMENT *pHeaderAny,const WSDXML_ELEMENT *pReferenceParameterAny,const WSDXML_ELEMENT *pPolicyAny,const WSDXML_ELEMENT *pEndpointReferenceAny,const WSDXML_ELEMENT *pAny) {
    return This->lpVtbl->PublishEx(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_MatchProbeEx(IWSDiscoveryPublisher* This,const WSD_SOAP_MESSAGE *pProbeMessage,IWSDMessageParameters *pMessageParameters,LPCWSTR pszId,ULONGLONG ullMetadataVersion,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSD_NAME_LIST *pTypesList,const WSD_URI_LIST *pScopesList,const WSD_URI_LIST *pXAddrsList,const WSDXML_ELEMENT *pHeaderAny,const WSDXML_ELEMENT *pReferenceParameterAny,const WSDXML_ELEMENT *pPolicyAny,const WSDXML_ELEMENT *pEndpointReferenceAny,const WSDXML_ELEMENT *pAny) {
    return This->lpVtbl->MatchProbeEx(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_MatchResolveEx(IWSDiscoveryPublisher* This,const WSD_SOAP_MESSAGE *pResolveMessage,IWSDMessageParameters *pMessageParameters,LPCWSTR pszId,ULONGLONG ullMetadataVersion,ULONGLONG ullInstanceId,ULONGLONG ullMessageNumber,LPCWSTR pszSessionId,const WSD_NAME_LIST *pTypesList,const WSD_URI_LIST *pScopesList,const WSD_URI_LIST *pXAddrsList,const WSDXML_ELEMENT *pHeaderAny,const WSDXML_ELEMENT *pReferenceParameterAny,const WSDXML_ELEMENT *pPolicyAny,const WSDXML_ELEMENT *pEndpointReferenceAny,const WSDXML_ELEMENT *pAny) {
    return This->lpVtbl->MatchResolveEx(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_RegisterScopeMatchingRule(IWSDiscoveryPublisher* This,IWSDScopeMatchingRule *pScopeMatchingRule) {
    return This->lpVtbl->RegisterScopeMatchingRule(This,pScopeMatchingRule);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_UnRegisterScopeMatchingRule(IWSDiscoveryPublisher* This,IWSDScopeMatchingRule *pScopeMatchingRule) {
    return This->lpVtbl->UnRegisterScopeMatchingRule(This,pScopeMatchingRule);
}
static FORCEINLINE HRESULT IWSDiscoveryPublisher_GetXMLContext(IWSDiscoveryPublisher* This,IWSDXMLContext **ppContext) {
    return This->lpVtbl->GetXMLContext(This,ppContext);
}
#endif
#endif

#endif


#endif  /* __IWSDiscoveryPublisher_INTERFACE_DEFINED__ */

HRESULT WINAPI WSDCreateDiscoveryPublisher(IWSDXMLContext* pContext, IWSDiscoveryPublisher **ppPublisher);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wsddisco_h__ */
