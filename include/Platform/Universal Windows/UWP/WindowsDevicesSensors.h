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

// WindowsDevicesSensors.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
#define OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_Devices_Sensors.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDSAccelerometer, WDSAccelerometerReading, WDSAccelerometerReadingChangedEventArgs, WDSAccelerometerShakenEventArgs, WDSInclinometer,
    WDSInclinometerReading, WDSInclinometerReadingChangedEventArgs, WDSGyrometer, WDSGyrometerReading, WDSGyrometerReadingChangedEventArgs,
    WDSCompass, WDSCompassReading, WDSCompassReadingChangedEventArgs, WDSLightSensor, WDSLightSensorReading,
    WDSLightSensorReadingChangedEventArgs, WDSSensorRotationMatrix, WDSSensorQuaternion, WDSOrientationSensor, WDSOrientationSensorReading,
    WDSOrientationSensorReadingChangedEventArgs, WDSSimpleOrientationSensor, WDSSimpleOrientationSensorOrientationChangedEventArgs,
    WDSMagnetometer, WDSMagnetometerReading, WDSMagnetometerReadingChangedEventArgs, WDSActivitySensor, WDSActivitySensorReading,
    WDSActivitySensorReadingChangedEventArgs, WDSActivitySensorReadingChangeReport, WDSActivitySensorTriggerDetails, WDSBarometer,
    WDSBarometerReading, WDSBarometerReadingChangedEventArgs, WDSPedometerReading, WDSPedometer, WDSPedometerReadingChangedEventArgs,
    WDSProximitySensor, WDSProximitySensorReading, WDSProximitySensorReadingChangedEventArgs, WDSProximitySensorDisplayOnOffController,
    WDSAltimeter, WDSAltimeterReading, WDSAltimeterReadingChangedEventArgs;
@protocol WDSIAccelerometerDeviceId
, WDSIAccelerometerStatics, WDSIAccelerometer, WDSIAccelerometer2, WDSIAccelerometer3, WDSIAccelerometerReading,
    WDSIAccelerometerReadingChangedEventArgs, WDSIAccelerometerShakenEventArgs, WDSIInclinometerDeviceId, WDSIInclinometerStatics,
    WDSIInclinometerStatics2, WDSIInclinometer, WDSIInclinometer2, WDSIInclinometerReading, WDSIInclinometerReadingYawAccuracy,
    WDSIInclinometerReadingChangedEventArgs, WDSIGyrometerDeviceId, WDSIGyrometerStatics, WDSIGyrometer, WDSIGyrometer2,
    WDSIGyrometerReading, WDSIGyrometerReadingChangedEventArgs, WDSICompassDeviceId, WDSICompassStatics, WDSICompass, WDSICompass2,
    WDSICompassReading, WDSICompassReadingHeadingAccuracy, WDSICompassReadingChangedEventArgs, WDSILightSensorDeviceId,
    WDSILightSensorStatics, WDSILightSensor, WDSILightSensorReading, WDSILightSensorReadingChangedEventArgs, WDSISensorRotationMatrix,
    WDSISensorQuaternion, WDSIOrientationSensorDeviceId, WDSIOrientationSensorStatics, WDSIOrientationSensorStatics2, WDSIOrientationSensor,
    WDSIOrientationSensor2, WDSIOrientationSensorReading, WDSIOrientationSensorReadingYawAccuracy,
    WDSIOrientationSensorReadingChangedEventArgs, WDSISimpleOrientationSensorDeviceId, WDSISimpleOrientationSensorStatics,
    WDSISimpleOrientationSensor, WDSISimpleOrientationSensor2, WDSISimpleOrientationSensorOrientationChangedEventArgs,
    WDSIMagnetometerDeviceId, WDSIMagnetometerStatics, WDSIMagnetometer, WDSIMagnetometer2, WDSIMagnetometerReading,
    WDSIMagnetometerReadingChangedEventArgs, WDSIActivitySensorStatics, WDSIActivitySensor, WDSIActivitySensorReading,
    WDSIActivitySensorReadingChangedEventArgs, WDSIActivitySensorReadingChangeReport, WDSIActivitySensorTriggerDetails,
    WDSIBarometerStatics, WDSIBarometer, WDSIBarometerReading, WDSIBarometerReadingChangedEventArgs, WDSIPedometerReading,
    WDSIPedometerReadingChangedEventArgs, WDSIPedometerStatics, WDSIPedometer, WDSIProximitySensorStatics, WDSIProximitySensor,
    WDSIProximitySensorReadingChangedEventArgs, WDSIProximitySensorReading, WDSIAltimeterStatics, WDSIAltimeter, WDSIAltimeterReading,
    WDSIAltimeterReadingChangedEventArgs;

// Windows.Devices.Sensors.MagnetometerAccuracy
enum _WDSMagnetometerAccuracy {
    WDSMagnetometerAccuracyUnknown = 0,
    WDSMagnetometerAccuracyUnreliable = 1,
    WDSMagnetometerAccuracyApproximate = 2,
    WDSMagnetometerAccuracyHigh = 3,
};
typedef unsigned WDSMagnetometerAccuracy;

// Windows.Devices.Sensors.ActivityType
enum _WDSActivityType {
    WDSActivityTypeUnknown = 0,
    WDSActivityTypeIdle = 1,
    WDSActivityTypeStationary = 2,
    WDSActivityTypeFidgeting = 3,
    WDSActivityTypeWalking = 4,
    WDSActivityTypeRunning = 5,
    WDSActivityTypeInVehicle = 6,
    WDSActivityTypeBiking = 7,
};
typedef unsigned WDSActivityType;

// Windows.Devices.Sensors.ActivitySensorReadingConfidence
enum _WDSActivitySensorReadingConfidence {
    WDSActivitySensorReadingConfidenceHigh = 0,
    WDSActivitySensorReadingConfidenceLow = 1,
};
typedef unsigned WDSActivitySensorReadingConfidence;

// Windows.Devices.Sensors.SensorReadingType
enum _WDSSensorReadingType {
    WDSSensorReadingTypeAbsolute = 0,
    WDSSensorReadingTypeRelative = 1,
};
typedef unsigned WDSSensorReadingType;

// Windows.Devices.Sensors.SimpleOrientation
enum _WDSSimpleOrientation {
    WDSSimpleOrientationNotRotated = 0,
    WDSSimpleOrientationRotated90DegreesCounterclockwise = 1,
    WDSSimpleOrientationRotated180DegreesCounterclockwise = 2,
    WDSSimpleOrientationRotated270DegreesCounterclockwise = 3,
    WDSSimpleOrientationFaceup = 4,
    WDSSimpleOrientationFacedown = 5,
};
typedef unsigned WDSSimpleOrientation;

// Windows.Devices.Sensors.PedometerStepKind
enum _WDSPedometerStepKind {
    WDSPedometerStepKindUnknown = 0,
    WDSPedometerStepKindWalking = 1,
    WDSPedometerStepKindRunning = 2,
};
typedef unsigned WDSPedometerStepKind;

#include "WindowsFoundation.h"
#include "WindowsGraphicsDisplay.h"

#import <Foundation/Foundation.h>

// Windows.Devices.Sensors.Accelerometer
#ifndef __WDSAccelerometer_DEFINED__
#define __WDSAccelerometer_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAccelerometer : RTObject
+ (WDSAccelerometer*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property WGDDisplayOrientations readingTransform;
@property unsigned int reportLatency;
@property (readonly) unsigned int maxBatchSize;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSAccelerometer*, WDSAccelerometerReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addShakenEvent:(void (^)(WDSAccelerometer*, WDSAccelerometerShakenEventArgs*))del;
- (void)removeShakenEvent:(EventRegistrationToken)tok;
- (WDSAccelerometerReading*)getCurrentReading;
@end

#endif // __WDSAccelerometer_DEFINED__

// Windows.Devices.Sensors.AccelerometerReading
#ifndef __WDSAccelerometerReading_DEFINED__
#define __WDSAccelerometerReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAccelerometerReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) double accelerationX;
@property (readonly) double accelerationY;
@property (readonly) double accelerationZ;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSAccelerometerReading_DEFINED__

// Windows.Devices.Sensors.AccelerometerReadingChangedEventArgs
#ifndef __WDSAccelerometerReadingChangedEventArgs_DEFINED__
#define __WDSAccelerometerReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAccelerometerReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSAccelerometerReading* reading;
@end

#endif // __WDSAccelerometerReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.AccelerometerShakenEventArgs
#ifndef __WDSAccelerometerShakenEventArgs_DEFINED__
#define __WDSAccelerometerShakenEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAccelerometerShakenEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSAccelerometerShakenEventArgs_DEFINED__

// Windows.Devices.Sensors.Inclinometer
#ifndef __WDSInclinometer_DEFINED__
#define __WDSInclinometer_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSInclinometer : RTObject
+ (WDSInclinometer*)getDefaultForRelativeReadings;
+ (WDSInclinometer*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property WGDDisplayOrientations readingTransform;
@property (readonly) WDSSensorReadingType readingType;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSInclinometer*, WDSInclinometerReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSInclinometerReading*)getCurrentReading;
@end

#endif // __WDSInclinometer_DEFINED__

// Windows.Devices.Sensors.InclinometerReading
#ifndef __WDSInclinometerReading_DEFINED__
#define __WDSInclinometerReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSInclinometerReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) float pitchDegrees;
@property (readonly) float rollDegrees;
@property (readonly) WFDateTime* timestamp;
@property (readonly) float yawDegrees;
@property (readonly) WDSMagnetometerAccuracy yawAccuracy;
@end

#endif // __WDSInclinometerReading_DEFINED__

// Windows.Devices.Sensors.InclinometerReadingChangedEventArgs
#ifndef __WDSInclinometerReadingChangedEventArgs_DEFINED__
#define __WDSInclinometerReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSInclinometerReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSInclinometerReading* reading;
@end

#endif // __WDSInclinometerReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.Gyrometer
#ifndef __WDSGyrometer_DEFINED__
#define __WDSGyrometer_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSGyrometer : RTObject
+ (WDSGyrometer*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property WGDDisplayOrientations readingTransform;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSGyrometer*, WDSGyrometerReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSGyrometerReading*)getCurrentReading;
@end

#endif // __WDSGyrometer_DEFINED__

// Windows.Devices.Sensors.GyrometerReading
#ifndef __WDSGyrometerReading_DEFINED__
#define __WDSGyrometerReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSGyrometerReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) double angularVelocityX;
@property (readonly) double angularVelocityY;
@property (readonly) double angularVelocityZ;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSGyrometerReading_DEFINED__

// Windows.Devices.Sensors.GyrometerReadingChangedEventArgs
#ifndef __WDSGyrometerReadingChangedEventArgs_DEFINED__
#define __WDSGyrometerReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSGyrometerReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSGyrometerReading* reading;
@end

#endif // __WDSGyrometerReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.Compass
#ifndef __WDSCompass_DEFINED__
#define __WDSCompass_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSCompass : RTObject
+ (WDSCompass*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property WGDDisplayOrientations readingTransform;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSCompass*, WDSCompassReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSCompassReading*)getCurrentReading;
@end

#endif // __WDSCompass_DEFINED__

// Windows.Devices.Sensors.CompassReading
#ifndef __WDSCompassReading_DEFINED__
#define __WDSCompassReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSCompassReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) double headingMagneticNorth;
@property (readonly) id /* double */ headingTrueNorth;
@property (readonly) WFDateTime* timestamp;
@property (readonly) WDSMagnetometerAccuracy headingAccuracy;
@end

#endif // __WDSCompassReading_DEFINED__

// Windows.Devices.Sensors.CompassReadingChangedEventArgs
#ifndef __WDSCompassReadingChangedEventArgs_DEFINED__
#define __WDSCompassReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSCompassReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSCompassReading* reading;
@end

#endif // __WDSCompassReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.LightSensor
#ifndef __WDSLightSensor_DEFINED__
#define __WDSLightSensor_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSLightSensor : RTObject
+ (WDSLightSensor*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSLightSensor*, WDSLightSensorReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSLightSensorReading*)getCurrentReading;
@end

#endif // __WDSLightSensor_DEFINED__

// Windows.Devices.Sensors.LightSensorReading
#ifndef __WDSLightSensorReading_DEFINED__
#define __WDSLightSensorReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSLightSensorReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) float illuminanceInLux;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSLightSensorReading_DEFINED__

// Windows.Devices.Sensors.LightSensorReadingChangedEventArgs
#ifndef __WDSLightSensorReadingChangedEventArgs_DEFINED__
#define __WDSLightSensorReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSLightSensorReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSLightSensorReading* reading;
@end

#endif // __WDSLightSensorReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.SensorRotationMatrix
#ifndef __WDSSensorRotationMatrix_DEFINED__
#define __WDSSensorRotationMatrix_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSSensorRotationMatrix : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) float m11;
@property (readonly) float m12;
@property (readonly) float m13;
@property (readonly) float m21;
@property (readonly) float m22;
@property (readonly) float m23;
@property (readonly) float m31;
@property (readonly) float m32;
@property (readonly) float m33;
@end

#endif // __WDSSensorRotationMatrix_DEFINED__

// Windows.Devices.Sensors.SensorQuaternion
#ifndef __WDSSensorQuaternion_DEFINED__
#define __WDSSensorQuaternion_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSSensorQuaternion : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) float w;
@property (readonly) float x;
@property (readonly) float y;
@property (readonly) float z;
@end

#endif // __WDSSensorQuaternion_DEFINED__

// Windows.Devices.Sensors.OrientationSensor
#ifndef __WDSOrientationSensor_DEFINED__
#define __WDSOrientationSensor_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSOrientationSensor : RTObject
+ (WDSOrientationSensor*)getDefault;
+ (WDSOrientationSensor*)getDefaultForRelativeReadings;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property WGDDisplayOrientations readingTransform;
@property (readonly) WDSSensorReadingType readingType;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSOrientationSensor*, WDSOrientationSensorReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSOrientationSensorReading*)getCurrentReading;
@end

#endif // __WDSOrientationSensor_DEFINED__

// Windows.Devices.Sensors.OrientationSensorReading
#ifndef __WDSOrientationSensorReading_DEFINED__
#define __WDSOrientationSensorReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSOrientationSensorReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSSensorQuaternion* quaternion;
@property (readonly) WDSSensorRotationMatrix* rotationMatrix;
@property (readonly) WFDateTime* timestamp;
@property (readonly) WDSMagnetometerAccuracy yawAccuracy;
@end

#endif // __WDSOrientationSensorReading_DEFINED__

// Windows.Devices.Sensors.OrientationSensorReadingChangedEventArgs
#ifndef __WDSOrientationSensorReadingChangedEventArgs_DEFINED__
#define __WDSOrientationSensorReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSOrientationSensorReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSOrientationSensorReading* reading;
@end

#endif // __WDSOrientationSensorReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.SimpleOrientationSensor
#ifndef __WDSSimpleOrientationSensor_DEFINED__
#define __WDSSimpleOrientationSensor_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSSimpleOrientationSensor : RTObject
+ (WDSSimpleOrientationSensor*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property WGDDisplayOrientations readingTransform;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addOrientationChangedEvent:(void (^)(WDSSimpleOrientationSensor*,
                                                               WDSSimpleOrientationSensorOrientationChangedEventArgs*))del;
- (void)removeOrientationChangedEvent:(EventRegistrationToken)tok;
- (WDSSimpleOrientation)getCurrentOrientation;
@end

#endif // __WDSSimpleOrientationSensor_DEFINED__

// Windows.Devices.Sensors.SimpleOrientationSensorOrientationChangedEventArgs
#ifndef __WDSSimpleOrientationSensorOrientationChangedEventArgs_DEFINED__
#define __WDSSimpleOrientationSensorOrientationChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSSimpleOrientationSensorOrientationChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSSimpleOrientation orientation;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSSimpleOrientationSensorOrientationChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.Magnetometer
#ifndef __WDSMagnetometer_DEFINED__
#define __WDSMagnetometer_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSMagnetometer : RTObject
+ (WDSMagnetometer*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) unsigned int minimumReportInterval;
@property WGDDisplayOrientations readingTransform;
@property (readonly) NSString* deviceId;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSMagnetometer*, WDSMagnetometerReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSMagnetometerReading*)getCurrentReading;
@end

#endif // __WDSMagnetometer_DEFINED__

// Windows.Devices.Sensors.MagnetometerReading
#ifndef __WDSMagnetometerReading_DEFINED__
#define __WDSMagnetometerReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSMagnetometerReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSMagnetometerAccuracy directionalAccuracy;
@property (readonly) float magneticFieldX;
@property (readonly) float magneticFieldY;
@property (readonly) float magneticFieldZ;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSMagnetometerReading_DEFINED__

// Windows.Devices.Sensors.MagnetometerReadingChangedEventArgs
#ifndef __WDSMagnetometerReadingChangedEventArgs_DEFINED__
#define __WDSMagnetometerReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSMagnetometerReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSMagnetometerReading* reading;
@end

#endif // __WDSMagnetometerReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.ActivitySensor
#ifndef __WDSActivitySensor_DEFINED__
#define __WDSActivitySensor_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSActivitySensor : RTObject
+ (void)getDefaultAsyncWithSuccess:(void (^)(WDSActivitySensor*))success failure:(void (^)(NSError*))failure;
+ (NSString*)getDeviceSelector;
+ (void)fromIdAsync:(NSString*)deviceId success:(void (^)(WDSActivitySensor*))success failure:(void (^)(NSError*))failure;
+ (void)getSystemHistoryAsync:(WFDateTime*)fromTime
                      success:(void (^)(NSArray* /* WDSActivitySensorReading* */))success
                      failure:(void (^)(NSError*))failure;
+ (void)getSystemHistoryWithDurationAsync:(WFDateTime*)fromTime
                                 duration:(WFTimeSpan*)duration
                                  success:(void (^)(NSArray* /* WDSActivitySensorReading* */))success
                                  failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) NSString* deviceId;
@property (readonly) unsigned int minimumReportInterval;
@property (readonly) double powerInMilliwatts;
@property (readonly) NSMutableArray* /* WDSActivityType */ subscribedActivities;
@property (readonly) NSArray* /* WDSActivityType */ supportedActivities;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSActivitySensor*, WDSActivitySensorReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (void)getCurrentReadingAsyncWithSuccess:(void (^)(WDSActivitySensorReading*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDSActivitySensor_DEFINED__

// Windows.Devices.Sensors.ActivitySensorReading
#ifndef __WDSActivitySensorReading_DEFINED__
#define __WDSActivitySensorReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSActivitySensorReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSActivityType activity;
@property (readonly) WDSActivitySensorReadingConfidence confidence;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSActivitySensorReading_DEFINED__

// Windows.Devices.Sensors.ActivitySensorReadingChangedEventArgs
#ifndef __WDSActivitySensorReadingChangedEventArgs_DEFINED__
#define __WDSActivitySensorReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSActivitySensorReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSActivitySensorReading* reading;
@end

#endif // __WDSActivitySensorReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.ActivitySensorReadingChangeReport
#ifndef __WDSActivitySensorReadingChangeReport_DEFINED__
#define __WDSActivitySensorReadingChangeReport_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSActivitySensorReadingChangeReport : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSActivitySensorReading* reading;
@end

#endif // __WDSActivitySensorReadingChangeReport_DEFINED__

// Windows.Devices.Sensors.ActivitySensorTriggerDetails
#ifndef __WDSActivitySensorTriggerDetails_DEFINED__
#define __WDSActivitySensorTriggerDetails_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSActivitySensorTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (NSArray* /* WDSActivitySensorReadingChangeReport* */)readReports;
@end

#endif // __WDSActivitySensorTriggerDetails_DEFINED__

// Windows.Devices.Sensors.Barometer
#ifndef __WDSBarometer_DEFINED__
#define __WDSBarometer_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSBarometer : RTObject
+ (WDSBarometer*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) NSString* deviceId;
@property (readonly) unsigned int minimumReportInterval;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSBarometer*, WDSBarometerReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSBarometerReading*)getCurrentReading;
@end

#endif // __WDSBarometer_DEFINED__

// Windows.Devices.Sensors.BarometerReading
#ifndef __WDSBarometerReading_DEFINED__
#define __WDSBarometerReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSBarometerReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) double stationPressureInHectopascals;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSBarometerReading_DEFINED__

// Windows.Devices.Sensors.BarometerReadingChangedEventArgs
#ifndef __WDSBarometerReadingChangedEventArgs_DEFINED__
#define __WDSBarometerReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSBarometerReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSBarometerReading* reading;
@end

#endif // __WDSBarometerReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.PedometerReading
#ifndef __WDSPedometerReading_DEFINED__
#define __WDSPedometerReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSPedometerReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) int cumulativeSteps;
@property (readonly) WFTimeSpan* cumulativeStepsDuration;
@property (readonly) WDSPedometerStepKind stepKind;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSPedometerReading_DEFINED__

// Windows.Devices.Sensors.Pedometer
#ifndef __WDSPedometer_DEFINED__
#define __WDSPedometer_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSPedometer : RTObject
+ (void)fromIdAsync:(NSString*)deviceId success:(void (^)(WDSPedometer*))success failure:(void (^)(NSError*))failure;
+ (void)getDefaultAsyncWithSuccess:(void (^)(WDSPedometer*))success failure:(void (^)(NSError*))failure;
+ (NSString*)getDeviceSelector;
+ (void)getSystemHistoryAsync:(WFDateTime*)fromTime
                      success:(void (^)(NSArray* /* WDSPedometerReading* */))success
                      failure:(void (^)(NSError*))failure;
+ (void)getSystemHistoryWithDurationAsync:(WFDateTime*)fromTime
                                 duration:(WFTimeSpan*)duration
                                  success:(void (^)(NSArray* /* WDSPedometerReading* */))success
                                  failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) NSString* deviceId;
@property (readonly) unsigned int minimumReportInterval;
@property (readonly) double powerInMilliwatts;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSPedometer*, WDSPedometerReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WDSPedometer_DEFINED__

// Windows.Devices.Sensors.PedometerReadingChangedEventArgs
#ifndef __WDSPedometerReadingChangedEventArgs_DEFINED__
#define __WDSPedometerReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSPedometerReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSPedometerReading* reading;
@end

#endif // __WDSPedometerReadingChangedEventArgs_DEFINED__

// Windows.Devices.Sensors.ProximitySensor
#ifndef __WDSProximitySensor_DEFINED__
#define __WDSProximitySensor_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSProximitySensor : RTObject
+ (NSString*)getDeviceSelector;
+ (WDSProximitySensor*)fromId:(NSString*)sensorId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) NSString* deviceId;
@property (readonly) id /* unsigned int */ maxDistanceInMillimeters;
@property (readonly) id /* unsigned int */ minDistanceInMillimeters;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSProximitySensor*, WDSProximitySensorReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSProximitySensorReading*)getCurrentReading;
- (WDSProximitySensorDisplayOnOffController*)createDisplayOnOffController;
@end

#endif // __WDSProximitySensor_DEFINED__

// Windows.Devices.Sensors.ProximitySensorReading
#ifndef __WDSProximitySensorReading_DEFINED__
#define __WDSProximitySensorReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSProximitySensorReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) id /* unsigned int */ distanceInMillimeters;
@property (readonly) BOOL isDetected;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSProximitySensorReading_DEFINED__

// Windows.Devices.Sensors.ProximitySensorReadingChangedEventArgs
#ifndef __WDSProximitySensorReadingChangedEventArgs_DEFINED__
#define __WDSProximitySensorReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSProximitySensorReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSProximitySensorReading* reading;
@end

#endif // __WDSProximitySensorReadingChangedEventArgs_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Devices.Sensors.ProximitySensorDisplayOnOffController
#ifndef __WDSProximitySensorDisplayOnOffController_DEFINED__
#define __WDSProximitySensorDisplayOnOffController_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSProximitySensorDisplayOnOffController : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (void)close;
@end

#endif // __WDSProximitySensorDisplayOnOffController_DEFINED__

// Windows.Devices.Sensors.Altimeter
#ifndef __WDSAltimeter_DEFINED__
#define __WDSAltimeter_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAltimeter : RTObject
+ (WDSAltimeter*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property unsigned int reportInterval;
@property (readonly) NSString* deviceId;
@property (readonly) unsigned int minimumReportInterval;
- (EventRegistrationToken)addReadingChangedEvent:(void (^)(WDSAltimeter*, WDSAltimeterReadingChangedEventArgs*))del;
- (void)removeReadingChangedEvent:(EventRegistrationToken)tok;
- (WDSAltimeterReading*)getCurrentReading;
@end

#endif // __WDSAltimeter_DEFINED__

// Windows.Devices.Sensors.AltimeterReading
#ifndef __WDSAltimeterReading_DEFINED__
#define __WDSAltimeterReading_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAltimeterReading : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) double altitudeChangeInMeters;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDSAltimeterReading_DEFINED__

// Windows.Devices.Sensors.AltimeterReadingChangedEventArgs
#ifndef __WDSAltimeterReadingChangedEventArgs_DEFINED__
#define __WDSAltimeterReadingChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_SENSORS_EXPORT
@interface WDSAltimeterReadingChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDSAltimeterReading* reading;
@end

#endif // __WDSAltimeterReadingChangedEventArgs_DEFINED__
