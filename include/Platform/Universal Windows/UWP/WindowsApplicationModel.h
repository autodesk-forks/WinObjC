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

// WindowsApplicationModel.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
#define OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_RandomStuff.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WAAppDisplayInfo, WAAppInfo, WASuspendingEventArgs, WASuspendingDeferral, WASuspendingOperation, WAPackageStatus, WAPackageId,
    WAPackage, WADesignMode;
@class WAPackageVersion;
@protocol WAIAppDisplayInfo
, WAIAppInfo, WAISuspendingDeferral, WAISuspendingOperation, WAISuspendingEventArgs, WAIPackageIdWithMetadata, WAIPackageWithMetadata,
    WAIPackageStatus, WAIPackageId, WAIPackage, WAIPackage2, WAIPackage3, WAIPackageStatics, WAIDesignModeStatics;

#include "WindowsSystem.h"
#include "WindowsFoundation.h"
#include "WindowsApplicationModelCore.h"
#include "WindowsStorageStreams.h"
#include "WindowsStorage.h"

#import <Foundation/Foundation.h>

// [struct] Windows.ApplicationModel.PackageVersion
OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAPackageVersion : NSObject
+ (instancetype) new;
@property unsigned short major;
@property unsigned short minor;
@property unsigned short build;
@property unsigned short revision;
@end

// Windows.ApplicationModel.ISuspendingDeferral
#ifndef __WAISuspendingDeferral_DEFINED__
#define __WAISuspendingDeferral_DEFINED__

@protocol WAISuspendingDeferral
- (void)complete;
@end

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAISuspendingDeferral : RTObject <WAISuspendingDeferral>
@end

#endif // __WAISuspendingDeferral_DEFINED__

// Windows.ApplicationModel.ISuspendingOperation
#ifndef __WAISuspendingOperation_DEFINED__
#define __WAISuspendingOperation_DEFINED__

@protocol WAISuspendingOperation
@property (readonly) WFDateTime* deadline;
- (WASuspendingDeferral*)getDeferral;
@end

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAISuspendingOperation : RTObject <WAISuspendingOperation>
@end

#endif // __WAISuspendingOperation_DEFINED__

// Windows.ApplicationModel.ISuspendingEventArgs
#ifndef __WAISuspendingEventArgs_DEFINED__
#define __WAISuspendingEventArgs_DEFINED__

@protocol WAISuspendingEventArgs
@property (readonly) WASuspendingOperation* suspendingOperation;
@end

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAISuspendingEventArgs : RTObject <WAISuspendingEventArgs>
@end

#endif // __WAISuspendingEventArgs_DEFINED__

// Windows.ApplicationModel.AppDisplayInfo
#ifndef __WAAppDisplayInfo_DEFINED__
#define __WAAppDisplayInfo_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAAppDisplayInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) NSString* Description;
@property (readonly) NSString* displayName;
- (WSSRandomAccessStreamReference*)getLogo:(WFSize*)size;
@end

#endif // __WAAppDisplayInfo_DEFINED__

// Windows.ApplicationModel.AppInfo
#ifndef __WAAppInfo_DEFINED__
#define __WAAppInfo_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAAppInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) NSString* appUserModelId;
@property (readonly) WAAppDisplayInfo* displayInfo;
@property (readonly) NSString* id;
@property (readonly) NSString* packageFamilyName;
@end

#endif // __WAAppInfo_DEFINED__

// Windows.ApplicationModel.SuspendingEventArgs
#ifndef __WASuspendingEventArgs_DEFINED__
#define __WASuspendingEventArgs_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WASuspendingEventArgs : RTObject <WAISuspendingEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WASuspendingOperation* suspendingOperation;
@end

#endif // __WASuspendingEventArgs_DEFINED__

// Windows.ApplicationModel.SuspendingDeferral
#ifndef __WASuspendingDeferral_DEFINED__
#define __WASuspendingDeferral_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WASuspendingDeferral : RTObject <WAISuspendingDeferral>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (void)complete;
@end

#endif // __WASuspendingDeferral_DEFINED__

// Windows.ApplicationModel.SuspendingOperation
#ifndef __WASuspendingOperation_DEFINED__
#define __WASuspendingOperation_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WASuspendingOperation : RTObject <WAISuspendingOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WFDateTime* deadline;
- (WASuspendingDeferral*)getDeferral;
@end

#endif // __WASuspendingOperation_DEFINED__

// Windows.ApplicationModel.PackageStatus
#ifndef __WAPackageStatus_DEFINED__
#define __WAPackageStatus_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAPackageStatus : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) BOOL dataOffline;
@property (readonly) BOOL dependencyIssue;
@property (readonly) BOOL deploymentInProgress;
@property (readonly) BOOL disabled;
@property (readonly) BOOL licenseIssue;
@property (readonly) BOOL modified;
@property (readonly) BOOL needsRemediation;
@property (readonly) BOOL notAvailable;
@property (readonly) BOOL packageOffline;
@property (readonly) BOOL servicing;
@property (readonly) BOOL tampered;
- (BOOL)verifyIsOK;
@end

#endif // __WAPackageStatus_DEFINED__

// Windows.ApplicationModel.PackageId
#ifndef __WAPackageId_DEFINED__
#define __WAPackageId_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAPackageId : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WSProcessorArchitecture architecture;
@property (readonly) NSString* familyName;
@property (readonly) NSString* fullName;
@property (readonly) NSString* name;
@property (readonly) NSString* publisher;
@property (readonly) NSString* publisherId;
@property (readonly) NSString* resourceId;
@property (readonly) WAPackageVersion* Version;
@property (readonly) NSString* author;
@property (readonly) NSString* productId;
@end

#endif // __WAPackageId_DEFINED__

// Windows.ApplicationModel.Package
#ifndef __WAPackage_DEFINED__
#define __WAPackage_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WAPackage : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) NSArray* /* WAPackage* */ dependencies;
@property (readonly) WAPackageId* id;
@property (readonly) WSStorageFolder* installedLocation;
@property (readonly) BOOL isFramework;
@property (readonly) NSString* Description;
@property (readonly) NSString* displayName;
@property (readonly) BOOL isBundle;
@property (readonly) BOOL isDevelopmentMode;
@property (readonly) BOOL isResourcePackage;
@property (readonly) WFUri* logo;
@property (readonly) NSString* publisherDisplayName;
@property (readonly) WFDateTime* installedDate;
@property (readonly) WAPackageStatus* status;
@property (readonly) WFDateTime* installDate;
+ (WAPackage*)current;
- (void)getAppListEntriesAsyncWithSuccess:(void (^)(NSArray* /* WACAppListEntry* */))success failure:(void (^)(NSError*))failure;
- (NSString*)getThumbnailToken;
- (void)launch:(NSString*)parameters;
@end

#endif // __WAPackage_DEFINED__

// Windows.ApplicationModel.DesignMode
#ifndef __WADesignMode_DEFINED__
#define __WADesignMode_DEFINED__

OBJCUWP_WINDOWS_RANDOMSTUFF_EXPORT
@interface WADesignMode : RTObject
+ (BOOL)designModeEnabled;
@end

#endif // __WADesignMode_DEFINED__
