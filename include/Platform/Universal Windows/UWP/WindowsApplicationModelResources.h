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

// WindowsApplicationModelResources.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_APPLICATIONMODEL_RESOURCES_EXPORT
#define OBJCUWP_WINDOWS_APPLICATIONMODEL_RESOURCES_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_ApplicationModel_Resources.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WARResourceLoader;
@protocol WARIResourceLoader
, WARIResourceLoader2, WARIResourceLoaderStatics, WARIResourceLoaderStatics2, WARIResourceLoaderFactory;

#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Resources.ResourceLoader
#ifndef __WARResourceLoader_DEFINED__
#define __WARResourceLoader_DEFINED__

OBJCUWP_WINDOWS_APPLICATIONMODEL_RESOURCES_EXPORT
@interface WARResourceLoader : RTObject
+ (WARResourceLoader*)getForCurrentView;
+ (WARResourceLoader*)getForCurrentViewWithName:(NSString*)name;
+ (WARResourceLoader*)getForViewIndependentUse;
+ (WARResourceLoader*)getForViewIndependentUseWithName:(NSString*)name;
+ (NSString*)getStringForReference:(WFUri*)uri;
+ (instancetype)make ACTIVATOR;
+ (WARResourceLoader*)makeResourceLoaderByName:(NSString*)name ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (NSString*)getString:(NSString*)resource;
- (NSString*)getStringForUri:(WFUri*)uri;
@end

#endif // __WARResourceLoader_DEFINED__
