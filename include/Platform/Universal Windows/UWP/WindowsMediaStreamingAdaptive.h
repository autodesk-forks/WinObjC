//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// WindowsMediaStreamingAdaptive.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
#define OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_Media_Streaming_Adaptive.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMSAAdaptiveMediaSource, WMSAAdaptiveMediaSourceCreationResult, WMSAAdaptiveMediaSourceDownloadBitrateChangedEventArgs,
    WMSAAdaptiveMediaSourcePlaybackBitrateChangedEventArgs, WMSAAdaptiveMediaSourceDownloadRequestedEventArgs,
    WMSAAdaptiveMediaSourceDownloadCompletedEventArgs, WMSAAdaptiveMediaSourceDownloadFailedEventArgs,
    WMSAAdaptiveMediaSourceDownloadResult, WMSAAdaptiveMediaSourceDownloadRequestedDeferral;
@protocol WMSAIAdaptiveMediaSourceCreationResult
, WMSAIAdaptiveMediaSourceStatics, WMSAIAdaptiveMediaSource, WMSAIAdaptiveMediaSourceDownloadBitrateChangedEventArgs,
    WMSAIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs, WMSAIAdaptiveMediaSourceDownloadRequestedEventArgs,
    WMSAIAdaptiveMediaSourceDownloadResult, WMSAIAdaptiveMediaSourceDownloadRequestedDeferral,
    WMSAIAdaptiveMediaSourceDownloadCompletedEventArgs, WMSAIAdaptiveMediaSourceDownloadFailedEventArgs;

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationStatus
enum _WMSAAdaptiveMediaSourceCreationStatus {
    WMSAAdaptiveMediaSourceCreationStatusSuccess = 0,
    WMSAAdaptiveMediaSourceCreationStatusManifestDownloadFailure = 1,
    WMSAAdaptiveMediaSourceCreationStatusManifestParseFailure = 2,
    WMSAAdaptiveMediaSourceCreationStatusUnsupportedManifestContentType = 3,
    WMSAAdaptiveMediaSourceCreationStatusUnsupportedManifestVersion = 4,
    WMSAAdaptiveMediaSourceCreationStatusUnsupportedManifestProfile = 5,
    WMSAAdaptiveMediaSourceCreationStatusUnknownFailure = 6,
};
typedef unsigned WMSAAdaptiveMediaSourceCreationStatus;

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceResourceType
enum _WMSAAdaptiveMediaSourceResourceType {
    WMSAAdaptiveMediaSourceResourceTypeManifest = 0,
    WMSAAdaptiveMediaSourceResourceTypeInitializationSegment = 1,
    WMSAAdaptiveMediaSourceResourceTypeMediaSegment = 2,
    WMSAAdaptiveMediaSourceResourceTypeKey = 3,
    WMSAAdaptiveMediaSourceResourceTypeInitializationVector = 4,
};
typedef unsigned WMSAAdaptiveMediaSourceResourceType;

#include "WindowsWebHttp.h"
#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"
#include "WindowsMediaCore.h"

#import <Foundation/Foundation.h>

// Windows.Media.Core.IMediaSource
#ifndef __WMCIMediaSource_DEFINED__
#define __WMCIMediaSource_DEFINED__

@protocol WMCIMediaSource
@end

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMCIMediaSource : RTObject <WMCIMediaSource>
@end

#endif // __WMCIMediaSource_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
#ifndef __WMSAAdaptiveMediaSource_DEFINED__
#define __WMSAAdaptiveMediaSource_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSource : RTObject <WMCIMediaSource>
+ (BOOL)isContentTypeSupported:(NSString*)contentType;
+ (void)createFromUriAsync:(WFUri*)uri
                   success:(void (^)(WMSAAdaptiveMediaSourceCreationResult*))success
                   failure:(void (^)(NSError*))failure;
+ (void)createFromUriWithDownloaderAsync:(WFUri*)uri
                              httpClient:(WWHHttpClient*)httpClient
                                 success:(void (^)(WMSAAdaptiveMediaSourceCreationResult*))success
                                 failure:(void (^)(NSError*))failure;
+ (void)createFromStreamAsync:(RTObject<WSSIInputStream>*)stream
                          uri:(WFUri*)uri
                  contentType:(NSString*)contentType
                      success:(void (^)(WMSAAdaptiveMediaSourceCreationResult*))success
                      failure:(void (^)(NSError*))failure;
+ (void)createFromStreamWithDownloaderAsync:(RTObject<WSSIInputStream>*)stream
                                        uri:(WFUri*)uri
                                contentType:(NSString*)contentType
                                 httpClient:(WWHHttpClient*)httpClient
                                    success:(void (^)(WMSAAdaptiveMediaSourceCreationResult*))success
                                    failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int initialBitrate;
@property (retain) WFTimeSpan* inboundBitsPerSecondWindow;
@property (retain) id /* unsigned int */ desiredMinBitrate;
@property (retain) WFTimeSpan* desiredLiveOffset;
@property (retain) id /* unsigned int */ desiredMaxBitrate;
@property (readonly) BOOL audioOnlyPlayback;
@property (readonly) NSArray* /* unsigned int */ availableBitrates;
@property (readonly) uint64_t inboundBitsPerSecond;
@property (readonly) unsigned int currentDownloadBitrate;
@property (readonly) unsigned int currentPlaybackBitrate;
@property (readonly) BOOL isLive;
- (EventRegistrationToken)addDownloadBitrateChangedEvent:(void (^)(WMSAAdaptiveMediaSource*,
                                                                   WMSAAdaptiveMediaSourceDownloadBitrateChangedEventArgs*))del;
- (void)removeDownloadBitrateChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDownloadCompletedEvent:(void (^)(WMSAAdaptiveMediaSource*,
                                                              WMSAAdaptiveMediaSourceDownloadCompletedEventArgs*))del;
- (void)removeDownloadCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDownloadFailedEvent:(void (^)(WMSAAdaptiveMediaSource*, WMSAAdaptiveMediaSourceDownloadFailedEventArgs*))del;
- (void)removeDownloadFailedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDownloadRequestedEvent:(void (^)(WMSAAdaptiveMediaSource*,
                                                              WMSAAdaptiveMediaSourceDownloadRequestedEventArgs*))del;
- (void)removeDownloadRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPlaybackBitrateChangedEvent:(void (^)(WMSAAdaptiveMediaSource*,
                                                                   WMSAAdaptiveMediaSourcePlaybackBitrateChangedEventArgs*))del;
- (void)removePlaybackBitrateChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WMSAAdaptiveMediaSource_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
#ifndef __WMSAAdaptiveMediaSourceCreationResult_DEFINED__
#define __WMSAAdaptiveMediaSourceCreationResult_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceCreationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WWHHttpResponseMessage* httpResponseMessage;
@property (readonly) WMSAAdaptiveMediaSource* mediaSource;
@property (readonly) WMSAAdaptiveMediaSourceCreationStatus status;
@end

#endif // __WMSAAdaptiveMediaSourceCreationResult_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
#ifndef __WMSAAdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED__
#define __WMSAAdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceDownloadBitrateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) unsigned int newValue;
@property (readonly) unsigned int oldValue;
@end

#endif // __WMSAAdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs
#ifndef __WMSAAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED__
#define __WMSAAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourcePlaybackBitrateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) BOOL audioOnly;
@property (readonly) unsigned int newValue;
@property (readonly) unsigned int oldValue;
@end

#endif // __WMSAAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
#ifndef __WMSAAdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED__
#define __WMSAAdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceDownloadRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) id /* uint64_t */ resourceByteRangeLength;
@property (readonly) id /* uint64_t */ resourceByteRangeOffset;
@property (readonly) WMSAAdaptiveMediaSourceResourceType resourceType;
@property (readonly) WFUri* resourceUri;
@property (readonly) WMSAAdaptiveMediaSourceDownloadResult* result;
- (WMSAAdaptiveMediaSourceDownloadRequestedDeferral*)getDeferral;
@end

#endif // __WMSAAdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
#ifndef __WMSAAdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED__
#define __WMSAAdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceDownloadCompletedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WWHHttpResponseMessage* httpResponseMessage;
@property (readonly) id /* uint64_t */ resourceByteRangeLength;
@property (readonly) id /* uint64_t */ resourceByteRangeOffset;
@property (readonly) WMSAAdaptiveMediaSourceResourceType resourceType;
@property (readonly) WFUri* resourceUri;
@end

#endif // __WMSAAdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
#ifndef __WMSAAdaptiveMediaSourceDownloadFailedEventArgs_DEFINED__
#define __WMSAAdaptiveMediaSourceDownloadFailedEventArgs_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceDownloadFailedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WWHHttpResponseMessage* httpResponseMessage;
@property (readonly) id /* uint64_t */ resourceByteRangeLength;
@property (readonly) id /* uint64_t */ resourceByteRangeOffset;
@property (readonly) WMSAAdaptiveMediaSourceResourceType resourceType;
@property (readonly) WFUri* resourceUri;
@end

#endif // __WMSAAdaptiveMediaSourceDownloadFailedEventArgs_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
#ifndef __WMSAAdaptiveMediaSourceDownloadResult_DEFINED__
#define __WMSAAdaptiveMediaSourceDownloadResult_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceDownloadResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) WFUri* resourceUri;
@property (retain) RTObject<WSSIInputStream>* inputStream;
@property unsigned int extendedStatus;
@property (retain) NSString* contentType;
@property (retain) RTObject<WSSIBuffer>* buffer;
@end

#endif // __WMSAAdaptiveMediaSourceDownloadResult_DEFINED__

// Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral
#ifndef __WMSAAdaptiveMediaSourceDownloadRequestedDeferral_DEFINED__
#define __WMSAAdaptiveMediaSourceDownloadRequestedDeferral_DEFINED__

OBJCUWP_WINDOWS_MEDIA_STREAMING_ADAPTIVE_EXPORT
@interface WMSAAdaptiveMediaSourceDownloadRequestedDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (void)complete;
@end

#endif // __WMSAAdaptiveMediaSourceDownloadRequestedDeferral_DEFINED__
