// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   OS Config API (osconfig/v1)
// Description:
//   OS management tools that can be used for patch management, patch
//   compliance, and configuration management on VM instances.
// Documentation:
//   https://cloud.google.com/compute/docs/manage-os

#import "GTLROSConfigQuery.h"

#import "GTLROSConfigObjects.h"

@implementation GTLROSConfigQuery

@dynamic fields;

@end

@implementation GTLROSConfigQuery_ProjectsPatchDeploymentsCreate

@dynamic parent, patchDeploymentId;

+ (instancetype)queryWithObject:(GTLROSConfig_PatchDeployment *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/patchDeployments";
  GTLROSConfigQuery_ProjectsPatchDeploymentsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLROSConfig_PatchDeployment class];
  query.loggingName = @"osconfig.projects.patchDeployments.create";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchDeploymentsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLROSConfigQuery_ProjectsPatchDeploymentsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLROSConfig_Empty class];
  query.loggingName = @"osconfig.projects.patchDeployments.delete";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchDeploymentsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLROSConfigQuery_ProjectsPatchDeploymentsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLROSConfig_PatchDeployment class];
  query.loggingName = @"osconfig.projects.patchDeployments.get";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchDeploymentsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/patchDeployments";
  GTLROSConfigQuery_ProjectsPatchDeploymentsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLROSConfig_ListPatchDeploymentsResponse class];
  query.loggingName = @"osconfig.projects.patchDeployments.list";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchJobsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLROSConfig_CancelPatchJobRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLROSConfigQuery_ProjectsPatchJobsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLROSConfig_PatchJob class];
  query.loggingName = @"osconfig.projects.patchJobs.cancel";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchJobsExecute

@dynamic parent;

+ (instancetype)queryWithObject:(GTLROSConfig_ExecutePatchJobRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/patchJobs:execute";
  GTLROSConfigQuery_ProjectsPatchJobsExecute *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLROSConfig_PatchJob class];
  query.loggingName = @"osconfig.projects.patchJobs.execute";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchJobsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLROSConfigQuery_ProjectsPatchJobsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLROSConfig_PatchJob class];
  query.loggingName = @"osconfig.projects.patchJobs.get";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchJobsInstanceDetailsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/instanceDetails";
  GTLROSConfigQuery_ProjectsPatchJobsInstanceDetailsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLROSConfig_ListPatchJobInstanceDetailsResponse class];
  query.loggingName = @"osconfig.projects.patchJobs.instanceDetails.list";
  return query;
}

@end

@implementation GTLROSConfigQuery_ProjectsPatchJobsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/patchJobs";
  GTLROSConfigQuery_ProjectsPatchJobsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLROSConfig_ListPatchJobsResponse class];
  query.loggingName = @"osconfig.projects.patchJobs.list";
  return query;
}

@end
