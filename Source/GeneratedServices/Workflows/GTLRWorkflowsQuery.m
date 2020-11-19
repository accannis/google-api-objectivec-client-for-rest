// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Workflows API (workflows/v1beta)
// Description:
//   Orchestrate Workflows consisting of Google Cloud APIs, SaaS APIs or private
//   API endpoints.
// Documentation:
//   https://cloud.google.com/workflows

#import "GTLRWorkflowsQuery.h"

#import "GTLRWorkflowsObjects.h"

@implementation GTLRWorkflowsQuery

@dynamic fields;

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRWorkflowsQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_Location class];
  query.loggingName = @"workflows.projects.locations.get";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/locations";
  GTLRWorkflowsQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_ListLocationsResponse class];
  query.loggingName = @"workflows.projects.locations.list";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRWorkflowsQuery_ProjectsLocationsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_Empty class];
  query.loggingName = @"workflows.projects.locations.operations.delete";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRWorkflowsQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_Operation class];
  query.loggingName = @"workflows.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/operations";
  GTLRWorkflowsQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_ListOperationsResponse class];
  query.loggingName = @"workflows.projects.locations.operations.list";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsWorkflowsCreate

@dynamic parent, workflowId;

+ (instancetype)queryWithObject:(GTLRWorkflows_Workflow *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/workflows";
  GTLRWorkflowsQuery_ProjectsLocationsWorkflowsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRWorkflows_Operation class];
  query.loggingName = @"workflows.projects.locations.workflows.create";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsWorkflowsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRWorkflowsQuery_ProjectsLocationsWorkflowsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_Operation class];
  query.loggingName = @"workflows.projects.locations.workflows.delete";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsWorkflowsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRWorkflowsQuery_ProjectsLocationsWorkflowsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_Workflow class];
  query.loggingName = @"workflows.projects.locations.workflows.get";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsWorkflowsList

@dynamic filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/workflows";
  GTLRWorkflowsQuery_ProjectsLocationsWorkflowsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWorkflows_ListWorkflowsResponse class];
  query.loggingName = @"workflows.projects.locations.workflows.list";
  return query;
}

@end

@implementation GTLRWorkflowsQuery_ProjectsLocationsWorkflowsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRWorkflows_Workflow *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRWorkflowsQuery_ProjectsLocationsWorkflowsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflows_Operation class];
  query.loggingName = @"workflows.projects.locations.workflows.patch";
  return query;
}

@end
