// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Service Control API (servicecontrol/v1)
// Description:
//   The Service Control API
// Documentation:
//   https://cloud.google.com/service-control/

#import "GTLRServiceControlObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRServiceControl_CheckError.code
NSString * const kGTLRServiceControl_CheckError_Code_ApiKeyExpired = @"API_KEY_EXPIRED";
NSString * const kGTLRServiceControl_CheckError_Code_ApiKeyInvalid = @"API_KEY_INVALID";
NSString * const kGTLRServiceControl_CheckError_Code_ApiKeyNotFound = @"API_KEY_NOT_FOUND";
NSString * const kGTLRServiceControl_CheckError_Code_BillingDisabled = @"BILLING_DISABLED";
NSString * const kGTLRServiceControl_CheckError_Code_BillingStatusUnavailable = @"BILLING_STATUS_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_ClientAppBlocked = @"CLIENT_APP_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_ErrorCodeUnspecified = @"ERROR_CODE_UNSPECIFIED";
NSString * const kGTLRServiceControl_CheckError_Code_IpAddressBlocked = @"IP_ADDRESS_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_NamespaceLookupUnavailable = @"NAMESPACE_LOOKUP_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_NotFound  = @"NOT_FOUND";
NSString * const kGTLRServiceControl_CheckError_Code_PermissionDenied = @"PERMISSION_DENIED";
NSString * const kGTLRServiceControl_CheckError_Code_ProjectDeleted = @"PROJECT_DELETED";
NSString * const kGTLRServiceControl_CheckError_Code_ProjectInvalid = @"PROJECT_INVALID";
NSString * const kGTLRServiceControl_CheckError_Code_RefererBlocked = @"REFERER_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_ResourceExhausted = @"RESOURCE_EXHAUSTED";
NSString * const kGTLRServiceControl_CheckError_Code_ServiceNotActivated = @"SERVICE_NOT_ACTIVATED";
NSString * const kGTLRServiceControl_CheckError_Code_ServiceStatusUnavailable = @"SERVICE_STATUS_UNAVAILABLE";

// GTLRServiceControl_LogEntry.severity
NSString * const kGTLRServiceControl_LogEntry_Severity_Alert   = @"ALERT";
NSString * const kGTLRServiceControl_LogEntry_Severity_Critical = @"CRITICAL";
NSString * const kGTLRServiceControl_LogEntry_Severity_Debug   = @"DEBUG";
NSString * const kGTLRServiceControl_LogEntry_Severity_Default = @"DEFAULT";
NSString * const kGTLRServiceControl_LogEntry_Severity_Emergency = @"EMERGENCY";
NSString * const kGTLRServiceControl_LogEntry_Severity_Error   = @"ERROR";
NSString * const kGTLRServiceControl_LogEntry_Severity_Info    = @"INFO";
NSString * const kGTLRServiceControl_LogEntry_Severity_Notice  = @"NOTICE";
NSString * const kGTLRServiceControl_LogEntry_Severity_Warning = @"WARNING";

// GTLRServiceControl_Operation.importance
NSString * const kGTLRServiceControl_Operation_Importance_High = @"HIGH";
NSString * const kGTLRServiceControl_Operation_Importance_Low  = @"LOW";

// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckError
//

@implementation GTLRServiceControl_CheckError
@dynamic code, detail;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckRequest
//

@implementation GTLRServiceControl_CheckRequest
@dynamic operation;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckResponse
//

@implementation GTLRServiceControl_CheckResponse
@dynamic checkErrors, operationId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"checkErrors" : [GTLRServiceControl_CheckError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Distribution
//

@implementation GTLRServiceControl_Distribution
@dynamic bucketCounts, count, explicitBuckets, exponentialBuckets,
         linearBuckets, maximum, mean, minimum, sumOfSquaredDeviation;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bucketCounts" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ExplicitBuckets
//

@implementation GTLRServiceControl_ExplicitBuckets
@dynamic bounds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bounds" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ExponentialBuckets
//

@implementation GTLRServiceControl_ExponentialBuckets
@dynamic growthFactor, numFiniteBuckets, scale;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LinearBuckets
//

@implementation GTLRServiceControl_LinearBuckets
@dynamic numFiniteBuckets, offset, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntry
//

@implementation GTLRServiceControl_LogEntry
@dynamic insertId, labels, name, protoPayload, severity, structPayload,
         textPayload, timestamp;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntryLabels
//

@implementation GTLRServiceControl_LogEntryLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntryProtoPayload
//

@implementation GTLRServiceControl_LogEntryProtoPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntryStructPayload
//

@implementation GTLRServiceControl_LogEntryStructPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_MetricValue
//

@implementation GTLRServiceControl_MetricValue
@dynamic boolValue, distributionValue, doubleValue, endTime, int64Value, labels,
         startTime, stringValue;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_MetricValueLabels
//

@implementation GTLRServiceControl_MetricValueLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_MetricValueSet
//

@implementation GTLRServiceControl_MetricValueSet
@dynamic metricName, metricValues;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metricValues" : [GTLRServiceControl_MetricValue class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Operation
//

@implementation GTLRServiceControl_Operation
@dynamic consumerId, endTime, importance, labels, logEntries, metricValueSets,
         operationId, operationName, startTime;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"logEntries" : [GTLRServiceControl_LogEntry class],
    @"metricValueSets" : [GTLRServiceControl_MetricValueSet class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_OperationLabels
//

@implementation GTLRServiceControl_OperationLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportError
//

@implementation GTLRServiceControl_ReportError
@dynamic operationId, status;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportRequest
//

@implementation GTLRServiceControl_ReportRequest
@dynamic operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRServiceControl_Operation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportResponse
//

@implementation GTLRServiceControl_ReportResponse
@dynamic reportErrors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reportErrors" : [GTLRServiceControl_ReportError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Status
//

@implementation GTLRServiceControl_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRServiceControl_StatusDetailsItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_StatusDetailsItem
//

@implementation GTLRServiceControl_StatusDetailsItem

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
