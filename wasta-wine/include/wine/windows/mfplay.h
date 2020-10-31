/*** Autogenerated by WIDL 5.20 from include/mfplay.idl - Do not edit ***/

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

#ifndef __mfplay_h__
#define __mfplay_h__

/* Forward declarations */

#ifndef __IMFPMediaPlayerCallback_FWD_DEFINED__
#define __IMFPMediaPlayerCallback_FWD_DEFINED__
typedef interface IMFPMediaPlayerCallback IMFPMediaPlayerCallback;
#ifdef __cplusplus
interface IMFPMediaPlayerCallback;
#endif /* __cplusplus */
#endif

#ifndef __IMFPMediaPlayer_FWD_DEFINED__
#define __IMFPMediaPlayer_FWD_DEFINED__
typedef interface IMFPMediaPlayer IMFPMediaPlayer;
#ifdef __cplusplus
interface IMFPMediaPlayer;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <propsys.h>
#include <evr.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum _MFP_CREATION_OPTIONS {
    MFP_OPTION_NONE = 0,
    MFP_OPTION_FREE_THREADED_CALLBACK = 0x1,
    MFP_OPTION_NO_MMCSS = 0x2,
    MFP_OPTION_NO_REMOTE_DESKTOP_OPTIMIZATION = 0x4
} MFP_CREATION_OPTIONS;
typedef enum MFP_MEDIAPLAYER_STATE {
    MFP_MEDIAPLAYER_STATE_EMPTY = 0,
    MFP_MEDIAPLAYER_STATE_STOPPED = 1,
    MFP_MEDIAPLAYER_STATE_PLAYING = 2,
    MFP_MEDIAPLAYER_STATE_PAUSED = 3,
    MFP_MEDIAPLAYER_STATE_SHUTDOWN = 4
} MFP_MEDIAPLAYER_STATE;
typedef enum MFP_EVENT_TYPE {
    MFP_EVENT_TYPE_PLAY = 0,
    MFP_EVENT_TYPE_PAUSE = 1,
    MFP_EVENT_TYPE_STOP = 2,
    MFP_EVENT_TYPE_POSITION_SET = 3,
    MFP_EVENT_TYPE_RATE_SET = 4,
    MFP_EVENT_TYPE_MEDIAITEM_CREATED = 5,
    MFP_EVENT_TYPE_MEDIAITEM_SET = 6,
    MFP_EVENT_TYPE_FRAME_STEP = 7,
    MFP_EVENT_TYPE_MEDIAITEM_CLEARED = 8,
    MFP_EVENT_TYPE_MF = 9,
    MFP_EVENT_TYPE_ERROR = 10,
    MFP_EVENT_TYPE_PLAYBACK_ENDED = 11,
    MFP_EVENT_TYPE_ACQUIRE_USER_CREDENTIAL = 12
} MFP_EVENT_TYPE;
#ifndef __IMFPMediaPlayer_FWD_DEFINED__
#define __IMFPMediaPlayer_FWD_DEFINED__
typedef interface IMFPMediaPlayer IMFPMediaPlayer;
#ifdef __cplusplus
interface IMFPMediaPlayer;
#endif /* __cplusplus */
#endif

#ifndef __IMFPMediaItem_FWD_DEFINED__
#define __IMFPMediaItem_FWD_DEFINED__
typedef interface IMFPMediaItem IMFPMediaItem;
#ifdef __cplusplus
interface IMFPMediaItem;
#endif /* __cplusplus */
#endif

typedef struct MFP_EVENT_HEADER {
    MFP_EVENT_TYPE eEventType;
    HRESULT hrEvent;
    IMFPMediaPlayer *pMediaPlayer;
    MFP_MEDIAPLAYER_STATE eState;
    IPropertyStore *pPropertyStore;
} MFP_EVENT_HEADER;
/*****************************************************************************
 * IMFPMediaPlayerCallback interface
 */
#ifndef __IMFPMediaPlayerCallback_INTERFACE_DEFINED__
#define __IMFPMediaPlayerCallback_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFPMediaPlayerCallback, 0x766c8ffb, 0x5fdb, 0x4fea, 0xa2,0x8d, 0xb9,0x12,0x99,0x6f,0x51,0xbd);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("766c8ffb-5fdb-4fea-a28d-b912996f51bd")
IMFPMediaPlayerCallback : public IUnknown
{
    virtual void STDMETHODCALLTYPE OnMediaPlayerEvent(
        MFP_EVENT_HEADER *event_header) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFPMediaPlayerCallback, 0x766c8ffb, 0x5fdb, 0x4fea, 0xa2,0x8d, 0xb9,0x12,0x99,0x6f,0x51,0xbd)
#endif
#else
typedef struct IMFPMediaPlayerCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMediaPlayerCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMediaPlayerCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMediaPlayerCallback *This);

    /*** IMFPMediaPlayerCallback methods ***/
    void (STDMETHODCALLTYPE *OnMediaPlayerEvent)(
        IMFPMediaPlayerCallback *This,
        MFP_EVENT_HEADER *event_header);

    END_INTERFACE
} IMFPMediaPlayerCallbackVtbl;

interface IMFPMediaPlayerCallback {
    CONST_VTBL IMFPMediaPlayerCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFPMediaPlayerCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFPMediaPlayerCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFPMediaPlayerCallback_Release(This) (This)->lpVtbl->Release(This)
/*** IMFPMediaPlayerCallback methods ***/
#define IMFPMediaPlayerCallback_OnMediaPlayerEvent(This,event_header) (This)->lpVtbl->OnMediaPlayerEvent(This,event_header)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMFPMediaPlayerCallback_QueryInterface(IMFPMediaPlayerCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMFPMediaPlayerCallback_AddRef(IMFPMediaPlayerCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMFPMediaPlayerCallback_Release(IMFPMediaPlayerCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFPMediaPlayerCallback methods ***/
static FORCEINLINE void IMFPMediaPlayerCallback_OnMediaPlayerEvent(IMFPMediaPlayerCallback* This,MFP_EVENT_HEADER *event_header) {
    This->lpVtbl->OnMediaPlayerEvent(This,event_header);
}
#endif
#endif

#endif


#endif  /* __IMFPMediaPlayerCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFPMediaPlayer interface
 */
#ifndef __IMFPMediaPlayer_INTERFACE_DEFINED__
#define __IMFPMediaPlayer_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFPMediaPlayer, 0xa714590a, 0x58af, 0x430a, 0x85,0xbf, 0x44,0xf5,0xec,0x83,0x8d,0x85);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a714590a-58af-430a-85bf-44f5ec838d85")
IMFPMediaPlayer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Play(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Pause(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Stop(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE FrameStep(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPosition(
        REFGUID position_type,
        const PROPVARIANT *position) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPosition(
        REFGUID position_type,
        PROPVARIANT *position) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDuration(
        REFGUID position_type,
        PROPVARIANT *duration) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRate(
        float rate) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRate(
        float *rate) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSupportedRates(
        BOOL forward,
        float *slowest_rate,
        float *fastest_rate) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetState(
        MFP_MEDIAPLAYER_STATE *state) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateMediaItemFromURL(
        const WCHAR *url,
        BOOL sync,
        DWORD_PTR user_data,
        IMFPMediaItem **item) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateMediaItemFromObject(
        IUnknown *object,
        BOOL sync,
        DWORD_PTR user_data,
        IMFPMediaItem **item) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetMediaItem(
        IMFPMediaItem *item) = 0;

    virtual HRESULT STDMETHODCALLTYPE ClearMediaItem(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMediaItem(
        IMFPMediaItem **item) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVolume(
        float *volume) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetVolume(
        float volume) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBalance(
        float *balance) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBalance(
        float balance) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMute(
        BOOL *mute) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetMute(
        BOOL mute) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNativeVideoSize(
        SIZE *video,
        SIZE *arvideo) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIdealVideoSize(
        SIZE *min_size,
        SIZE *max_size) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetVideoSourceRect(
        const MFVideoNormalizedRect *rect) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoSourceRect(
        MFVideoNormalizedRect *rect) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAspectRatioMode(
        DWORD mode) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAspectRatioMode(
        DWORD *mode) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoWindow(
        HWND *hwnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE UpdateVideo(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBorderColor(
        COLORREF color) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBorderColor(
        COLORREF *color) = 0;

    virtual HRESULT STDMETHODCALLTYPE InsertEffect(
        IUnknown *effect,
        BOOL optional) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveEffect(
        IUnknown *effect) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveAllEffects(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Shutdown(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFPMediaPlayer, 0xa714590a, 0x58af, 0x430a, 0x85,0xbf, 0x44,0xf5,0xec,0x83,0x8d,0x85)
#endif
#else
typedef struct IMFPMediaPlayerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMediaPlayer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMediaPlayer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMediaPlayer *This);

    /*** IMFPMediaPlayer methods ***/
    HRESULT (STDMETHODCALLTYPE *Play)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *FrameStep)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *SetPosition)(
        IMFPMediaPlayer *This,
        REFGUID position_type,
        const PROPVARIANT *position);

    HRESULT (STDMETHODCALLTYPE *GetPosition)(
        IMFPMediaPlayer *This,
        REFGUID position_type,
        PROPVARIANT *position);

    HRESULT (STDMETHODCALLTYPE *GetDuration)(
        IMFPMediaPlayer *This,
        REFGUID position_type,
        PROPVARIANT *duration);

    HRESULT (STDMETHODCALLTYPE *SetRate)(
        IMFPMediaPlayer *This,
        float rate);

    HRESULT (STDMETHODCALLTYPE *GetRate)(
        IMFPMediaPlayer *This,
        float *rate);

    HRESULT (STDMETHODCALLTYPE *GetSupportedRates)(
        IMFPMediaPlayer *This,
        BOOL forward,
        float *slowest_rate,
        float *fastest_rate);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMFPMediaPlayer *This,
        MFP_MEDIAPLAYER_STATE *state);

    HRESULT (STDMETHODCALLTYPE *CreateMediaItemFromURL)(
        IMFPMediaPlayer *This,
        const WCHAR *url,
        BOOL sync,
        DWORD_PTR user_data,
        IMFPMediaItem **item);

    HRESULT (STDMETHODCALLTYPE *CreateMediaItemFromObject)(
        IMFPMediaPlayer *This,
        IUnknown *object,
        BOOL sync,
        DWORD_PTR user_data,
        IMFPMediaItem **item);

    HRESULT (STDMETHODCALLTYPE *SetMediaItem)(
        IMFPMediaPlayer *This,
        IMFPMediaItem *item);

    HRESULT (STDMETHODCALLTYPE *ClearMediaItem)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *GetMediaItem)(
        IMFPMediaPlayer *This,
        IMFPMediaItem **item);

    HRESULT (STDMETHODCALLTYPE *GetVolume)(
        IMFPMediaPlayer *This,
        float *volume);

    HRESULT (STDMETHODCALLTYPE *SetVolume)(
        IMFPMediaPlayer *This,
        float volume);

    HRESULT (STDMETHODCALLTYPE *GetBalance)(
        IMFPMediaPlayer *This,
        float *balance);

    HRESULT (STDMETHODCALLTYPE *SetBalance)(
        IMFPMediaPlayer *This,
        float balance);

    HRESULT (STDMETHODCALLTYPE *GetMute)(
        IMFPMediaPlayer *This,
        BOOL *mute);

    HRESULT (STDMETHODCALLTYPE *SetMute)(
        IMFPMediaPlayer *This,
        BOOL mute);

    HRESULT (STDMETHODCALLTYPE *GetNativeVideoSize)(
        IMFPMediaPlayer *This,
        SIZE *video,
        SIZE *arvideo);

    HRESULT (STDMETHODCALLTYPE *GetIdealVideoSize)(
        IMFPMediaPlayer *This,
        SIZE *min_size,
        SIZE *max_size);

    HRESULT (STDMETHODCALLTYPE *SetVideoSourceRect)(
        IMFPMediaPlayer *This,
        const MFVideoNormalizedRect *rect);

    HRESULT (STDMETHODCALLTYPE *GetVideoSourceRect)(
        IMFPMediaPlayer *This,
        MFVideoNormalizedRect *rect);

    HRESULT (STDMETHODCALLTYPE *SetAspectRatioMode)(
        IMFPMediaPlayer *This,
        DWORD mode);

    HRESULT (STDMETHODCALLTYPE *GetAspectRatioMode)(
        IMFPMediaPlayer *This,
        DWORD *mode);

    HRESULT (STDMETHODCALLTYPE *GetVideoWindow)(
        IMFPMediaPlayer *This,
        HWND *hwnd);

    HRESULT (STDMETHODCALLTYPE *UpdateVideo)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *SetBorderColor)(
        IMFPMediaPlayer *This,
        COLORREF color);

    HRESULT (STDMETHODCALLTYPE *GetBorderColor)(
        IMFPMediaPlayer *This,
        COLORREF *color);

    HRESULT (STDMETHODCALLTYPE *InsertEffect)(
        IMFPMediaPlayer *This,
        IUnknown *effect,
        BOOL optional);

    HRESULT (STDMETHODCALLTYPE *RemoveEffect)(
        IMFPMediaPlayer *This,
        IUnknown *effect);

    HRESULT (STDMETHODCALLTYPE *RemoveAllEffects)(
        IMFPMediaPlayer *This);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFPMediaPlayer *This);

    END_INTERFACE
} IMFPMediaPlayerVtbl;

interface IMFPMediaPlayer {
    CONST_VTBL IMFPMediaPlayerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFPMediaPlayer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFPMediaPlayer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFPMediaPlayer_Release(This) (This)->lpVtbl->Release(This)
/*** IMFPMediaPlayer methods ***/
#define IMFPMediaPlayer_Play(This) (This)->lpVtbl->Play(This)
#define IMFPMediaPlayer_Pause(This) (This)->lpVtbl->Pause(This)
#define IMFPMediaPlayer_Stop(This) (This)->lpVtbl->Stop(This)
#define IMFPMediaPlayer_FrameStep(This) (This)->lpVtbl->FrameStep(This)
#define IMFPMediaPlayer_SetPosition(This,position_type,position) (This)->lpVtbl->SetPosition(This,position_type,position)
#define IMFPMediaPlayer_GetPosition(This,position_type,position) (This)->lpVtbl->GetPosition(This,position_type,position)
#define IMFPMediaPlayer_GetDuration(This,position_type,duration) (This)->lpVtbl->GetDuration(This,position_type,duration)
#define IMFPMediaPlayer_SetRate(This,rate) (This)->lpVtbl->SetRate(This,rate)
#define IMFPMediaPlayer_GetRate(This,rate) (This)->lpVtbl->GetRate(This,rate)
#define IMFPMediaPlayer_GetSupportedRates(This,forward,slowest_rate,fastest_rate) (This)->lpVtbl->GetSupportedRates(This,forward,slowest_rate,fastest_rate)
#define IMFPMediaPlayer_GetState(This,state) (This)->lpVtbl->GetState(This,state)
#define IMFPMediaPlayer_CreateMediaItemFromURL(This,url,sync,user_data,item) (This)->lpVtbl->CreateMediaItemFromURL(This,url,sync,user_data,item)
#define IMFPMediaPlayer_CreateMediaItemFromObject(This,object,sync,user_data,item) (This)->lpVtbl->CreateMediaItemFromObject(This,object,sync,user_data,item)
#define IMFPMediaPlayer_SetMediaItem(This,item) (This)->lpVtbl->SetMediaItem(This,item)
#define IMFPMediaPlayer_ClearMediaItem(This) (This)->lpVtbl->ClearMediaItem(This)
#define IMFPMediaPlayer_GetMediaItem(This,item) (This)->lpVtbl->GetMediaItem(This,item)
#define IMFPMediaPlayer_GetVolume(This,volume) (This)->lpVtbl->GetVolume(This,volume)
#define IMFPMediaPlayer_SetVolume(This,volume) (This)->lpVtbl->SetVolume(This,volume)
#define IMFPMediaPlayer_GetBalance(This,balance) (This)->lpVtbl->GetBalance(This,balance)
#define IMFPMediaPlayer_SetBalance(This,balance) (This)->lpVtbl->SetBalance(This,balance)
#define IMFPMediaPlayer_GetMute(This,mute) (This)->lpVtbl->GetMute(This,mute)
#define IMFPMediaPlayer_SetMute(This,mute) (This)->lpVtbl->SetMute(This,mute)
#define IMFPMediaPlayer_GetNativeVideoSize(This,video,arvideo) (This)->lpVtbl->GetNativeVideoSize(This,video,arvideo)
#define IMFPMediaPlayer_GetIdealVideoSize(This,min_size,max_size) (This)->lpVtbl->GetIdealVideoSize(This,min_size,max_size)
#define IMFPMediaPlayer_SetVideoSourceRect(This,rect) (This)->lpVtbl->SetVideoSourceRect(This,rect)
#define IMFPMediaPlayer_GetVideoSourceRect(This,rect) (This)->lpVtbl->GetVideoSourceRect(This,rect)
#define IMFPMediaPlayer_SetAspectRatioMode(This,mode) (This)->lpVtbl->SetAspectRatioMode(This,mode)
#define IMFPMediaPlayer_GetAspectRatioMode(This,mode) (This)->lpVtbl->GetAspectRatioMode(This,mode)
#define IMFPMediaPlayer_GetVideoWindow(This,hwnd) (This)->lpVtbl->GetVideoWindow(This,hwnd)
#define IMFPMediaPlayer_UpdateVideo(This) (This)->lpVtbl->UpdateVideo(This)
#define IMFPMediaPlayer_SetBorderColor(This,color) (This)->lpVtbl->SetBorderColor(This,color)
#define IMFPMediaPlayer_GetBorderColor(This,color) (This)->lpVtbl->GetBorderColor(This,color)
#define IMFPMediaPlayer_InsertEffect(This,effect,optional) (This)->lpVtbl->InsertEffect(This,effect,optional)
#define IMFPMediaPlayer_RemoveEffect(This,effect) (This)->lpVtbl->RemoveEffect(This,effect)
#define IMFPMediaPlayer_RemoveAllEffects(This) (This)->lpVtbl->RemoveAllEffects(This)
#define IMFPMediaPlayer_Shutdown(This) (This)->lpVtbl->Shutdown(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMFPMediaPlayer_QueryInterface(IMFPMediaPlayer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMFPMediaPlayer_AddRef(IMFPMediaPlayer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMFPMediaPlayer_Release(IMFPMediaPlayer* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFPMediaPlayer methods ***/
static FORCEINLINE HRESULT IMFPMediaPlayer_Play(IMFPMediaPlayer* This) {
    return This->lpVtbl->Play(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_Pause(IMFPMediaPlayer* This) {
    return This->lpVtbl->Pause(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_Stop(IMFPMediaPlayer* This) {
    return This->lpVtbl->Stop(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_FrameStep(IMFPMediaPlayer* This) {
    return This->lpVtbl->FrameStep(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetPosition(IMFPMediaPlayer* This,REFGUID position_type,const PROPVARIANT *position) {
    return This->lpVtbl->SetPosition(This,position_type,position);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetPosition(IMFPMediaPlayer* This,REFGUID position_type,PROPVARIANT *position) {
    return This->lpVtbl->GetPosition(This,position_type,position);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetDuration(IMFPMediaPlayer* This,REFGUID position_type,PROPVARIANT *duration) {
    return This->lpVtbl->GetDuration(This,position_type,duration);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetRate(IMFPMediaPlayer* This,float rate) {
    return This->lpVtbl->SetRate(This,rate);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetRate(IMFPMediaPlayer* This,float *rate) {
    return This->lpVtbl->GetRate(This,rate);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetSupportedRates(IMFPMediaPlayer* This,BOOL forward,float *slowest_rate,float *fastest_rate) {
    return This->lpVtbl->GetSupportedRates(This,forward,slowest_rate,fastest_rate);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetState(IMFPMediaPlayer* This,MFP_MEDIAPLAYER_STATE *state) {
    return This->lpVtbl->GetState(This,state);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_CreateMediaItemFromURL(IMFPMediaPlayer* This,const WCHAR *url,BOOL sync,DWORD_PTR user_data,IMFPMediaItem **item) {
    return This->lpVtbl->CreateMediaItemFromURL(This,url,sync,user_data,item);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_CreateMediaItemFromObject(IMFPMediaPlayer* This,IUnknown *object,BOOL sync,DWORD_PTR user_data,IMFPMediaItem **item) {
    return This->lpVtbl->CreateMediaItemFromObject(This,object,sync,user_data,item);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetMediaItem(IMFPMediaPlayer* This,IMFPMediaItem *item) {
    return This->lpVtbl->SetMediaItem(This,item);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_ClearMediaItem(IMFPMediaPlayer* This) {
    return This->lpVtbl->ClearMediaItem(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetMediaItem(IMFPMediaPlayer* This,IMFPMediaItem **item) {
    return This->lpVtbl->GetMediaItem(This,item);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetVolume(IMFPMediaPlayer* This,float *volume) {
    return This->lpVtbl->GetVolume(This,volume);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetVolume(IMFPMediaPlayer* This,float volume) {
    return This->lpVtbl->SetVolume(This,volume);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetBalance(IMFPMediaPlayer* This,float *balance) {
    return This->lpVtbl->GetBalance(This,balance);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetBalance(IMFPMediaPlayer* This,float balance) {
    return This->lpVtbl->SetBalance(This,balance);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetMute(IMFPMediaPlayer* This,BOOL *mute) {
    return This->lpVtbl->GetMute(This,mute);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetMute(IMFPMediaPlayer* This,BOOL mute) {
    return This->lpVtbl->SetMute(This,mute);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetNativeVideoSize(IMFPMediaPlayer* This,SIZE *video,SIZE *arvideo) {
    return This->lpVtbl->GetNativeVideoSize(This,video,arvideo);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetIdealVideoSize(IMFPMediaPlayer* This,SIZE *min_size,SIZE *max_size) {
    return This->lpVtbl->GetIdealVideoSize(This,min_size,max_size);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetVideoSourceRect(IMFPMediaPlayer* This,const MFVideoNormalizedRect *rect) {
    return This->lpVtbl->SetVideoSourceRect(This,rect);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetVideoSourceRect(IMFPMediaPlayer* This,MFVideoNormalizedRect *rect) {
    return This->lpVtbl->GetVideoSourceRect(This,rect);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetAspectRatioMode(IMFPMediaPlayer* This,DWORD mode) {
    return This->lpVtbl->SetAspectRatioMode(This,mode);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetAspectRatioMode(IMFPMediaPlayer* This,DWORD *mode) {
    return This->lpVtbl->GetAspectRatioMode(This,mode);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetVideoWindow(IMFPMediaPlayer* This,HWND *hwnd) {
    return This->lpVtbl->GetVideoWindow(This,hwnd);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_UpdateVideo(IMFPMediaPlayer* This) {
    return This->lpVtbl->UpdateVideo(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_SetBorderColor(IMFPMediaPlayer* This,COLORREF color) {
    return This->lpVtbl->SetBorderColor(This,color);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_GetBorderColor(IMFPMediaPlayer* This,COLORREF *color) {
    return This->lpVtbl->GetBorderColor(This,color);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_InsertEffect(IMFPMediaPlayer* This,IUnknown *effect,BOOL optional) {
    return This->lpVtbl->InsertEffect(This,effect,optional);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_RemoveEffect(IMFPMediaPlayer* This,IUnknown *effect) {
    return This->lpVtbl->RemoveEffect(This,effect);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_RemoveAllEffects(IMFPMediaPlayer* This) {
    return This->lpVtbl->RemoveAllEffects(This);
}
static FORCEINLINE HRESULT IMFPMediaPlayer_Shutdown(IMFPMediaPlayer* This) {
    return This->lpVtbl->Shutdown(This);
}
#endif
#endif

#endif


#endif  /* __IMFPMediaPlayer_INTERFACE_DEFINED__ */

HRESULT WINAPI MFPCreateMediaPlayer(const WCHAR *url, BOOL start_playback, MFP_CREATION_OPTIONS options, 
        IMFPMediaPlayerCallback *callback, HWND hwnd, IMFPMediaPlayer **player);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mfplay_h__ */
