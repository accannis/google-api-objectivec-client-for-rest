// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Deployment Manager API (deploymentmanager/v2)
// Description:
//   Declares, configures, and deploys complex solutions on Google Cloud
//   Platform.
// Documentation:
//   https://cloud.google.com/deployment-manager/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDeploymentManager_Deployment;
@class GTLRDeploymentManager_DeploymentsCancelPreviewRequest;
@class GTLRDeploymentManager_DeploymentsStopRequest;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// createPolicy

/** Value: "ACQUIRE" */
GTLR_EXTERN NSString * const kGTLRDeploymentManagerCreatePolicyAcquire;
/** Value: "CREATE_OR_ACQUIRE" */
GTLR_EXTERN NSString * const kGTLRDeploymentManagerCreatePolicyCreateOrAcquire;

// ----------------------------------------------------------------------------
// deletePolicy

/** Value: "ABANDON" */
GTLR_EXTERN NSString * const kGTLRDeploymentManagerDeletePolicyAbandon;
/** Value: "DELETE" */
GTLR_EXTERN NSString * const kGTLRDeploymentManagerDeletePolicyDelete;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Deployment Manager query classes.
 */
@interface GTLRDeploymentManagerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Cancels and removes the preview currently associated with the deployment.
 *
 *  Method: deploymentmanager.deployments.cancelPreview
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 */
@interface GTLRDeploymentManagerQuery_DeploymentsCancelPreview : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsCancelPreviewWithObject:project:deployment:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Cancels and removes the preview currently associated with the deployment.
 *
 *  @param object The @c GTLRDeploymentManager_DeploymentsCancelPreviewRequest
 *    to include in the query.
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsCancelPreview
 */
+ (instancetype)queryWithObject:(GTLRDeploymentManager_DeploymentsCancelPreviewRequest *)object
                        project:(NSString *)project
                     deployment:(NSString *)deployment;

@end

/**
 *  Deletes a deployment and all of the resources in the deployment.
 *
 *  Method: deploymentmanager.deployments.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 */
@interface GTLRDeploymentManagerQuery_DeploymentsDelete : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsDeleteWithproject:deployment:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Deletes a deployment and all of the resources in the deployment.
 *
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsDelete
 */
+ (instancetype)queryWithProject:(NSString *)project
                      deployment:(NSString *)deployment;

@end

/**
 *  Gets information about a specific deployment.
 *
 *  Method: deploymentmanager.deployments.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_DeploymentsGet : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsGetWithproject:deployment:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Deployment.
 *
 *  Gets information about a specific deployment.
 *
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                      deployment:(NSString *)deployment;

@end

/**
 *  Creates a deployment and all of the resources described by the deployment
 *  manifest.
 *
 *  Method: deploymentmanager.deployments.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 */
@interface GTLRDeploymentManagerQuery_DeploymentsInsert : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsInsertWithObject:project:]

/**
 *  If set to true, creates a deployment and creates "shell" resources but does
 *  not actually instantiate these resources. This allows you to preview what
 *  your deployment looks like. After previewing a deployment, you can deploy
 *  your resources by making a request with the update() method or you can use
 *  the cancelPreview() method to cancel the preview altogether. Note that the
 *  deployment will still exist after you cancel the preview and you must
 *  separately delete this deployment if you want to remove it.
 */
@property(nonatomic, assign) BOOL preview;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Creates a deployment and all of the resources described by the deployment
 *  manifest.
 *
 *  @param object The @c GTLRDeploymentManager_Deployment to include in the
 *    query.
 *  @param project The project ID for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsInsert
 */
+ (instancetype)queryWithObject:(GTLRDeploymentManager_Deployment *)object
                        project:(NSString *)project;

@end

/**
 *  Lists all deployments for a given project.
 *
 *  Method: deploymentmanager.deployments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_DeploymentsList : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsListWithproject:]

/**
 *  Sets a filter expression for filtering listed resources, in the form
 *  filter={expression}. Your {expression} must be in the format: field_name
 *  comparison_string literal_string.
 *  The field_name is the name of the field you want to compare. Only atomic
 *  field types are supported (string, number, boolean). The comparison_string
 *  must be either eq (equals) or ne (not equals). The literal_string is the
 *  string value to filter to. The literal value must be valid for the type of
 *  field you are filtering by (string, number, boolean). For string fields, the
 *  literal value is interpreted as a regular expression using RE2 syntax. The
 *  literal value must match the entire field.
 *  For example, to filter for instances that do not have a name of
 *  example-instance, you would use filter=name ne example-instance.
 *  You can filter on nested fields. For example, you could filter on instances
 *  that have set the scheduling.automaticRestart field to true. Use filtering
 *  on nested fields to take advantage of labels to organize and search for
 *  results based on label values.
 *  To filter on multiple expressions, provide each separate expression within
 *  parentheses. For example, (scheduling.automaticRestart eq true) (zone eq
 *  us-central1-f). Multiple expressions are treated as AND expressions, meaning
 *  that resources must match all expressions to pass the filters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of results per page that should be returned. If the
 *  number of available results is larger than maxResults, Compute Engine
 *  returns a nextPageToken that can be used to get the next page of results in
 *  subsequent list requests.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Specifies a page token to use. Set pageToken to the nextPageToken returned
 *  by a previous list request to get the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_DeploymentsListResponse.
 *
 *  Lists all deployments for a given project.
 *
 *  @param project The project ID for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project;

@end

/**
 *  Updates a deployment and all of the resources described by the deployment
 *  manifest. This method supports patch semantics.
 *
 *  Method: deploymentmanager.deployments.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 */
@interface GTLRDeploymentManagerQuery_DeploymentsPatch : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsPatchWithObject:project:deployment:]

/**
 *  Sets the policy to use for creating new resources.
 *
 *  Likely values:
 *    @arg @c kGTLRDeploymentManagerCreatePolicyAcquire Value "ACQUIRE"
 *    @arg @c kGTLRDeploymentManagerCreatePolicyCreateOrAcquire Value
 *        "CREATE_OR_ACQUIRE"
 *
 *  @note If not set, the documented server-side default will be
 *        kGTLRDeploymentManagerCreatePolicyCreateOrAcquire.
 */
@property(nonatomic, copy, nullable) NSString *createPolicy;

/**
 *  Sets the policy to use for deleting resources.
 *
 *  Likely values:
 *    @arg @c kGTLRDeploymentManagerDeletePolicyAbandon Value "ABANDON"
 *    @arg @c kGTLRDeploymentManagerDeletePolicyDelete Value "DELETE"
 *
 *  @note If not set, the documented server-side default will be
 *        kGTLRDeploymentManagerDeletePolicyDelete.
 */
@property(nonatomic, copy, nullable) NSString *deletePolicy;

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/**
 *  If set to true, updates the deployment and creates and updates the "shell"
 *  resources but does not actually alter or instantiate these resources. This
 *  allows you to preview what your deployment will look like. You can use this
 *  intent to preview how an update would affect your deployment. You must
 *  provide a target.config with a configuration if this is set to true. After
 *  previewing a deployment, you can deploy your resources by making a request
 *  with the update() or you can cancelPreview() to remove the preview
 *  altogether. Note that the deployment will still exist after you cancel the
 *  preview and you must separately delete this deployment if you want to remove
 *  it.
 *
 *  @note If not set, the documented server-side default will be false.
 */
@property(nonatomic, assign) BOOL preview;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Updates a deployment and all of the resources described by the deployment
 *  manifest. This method supports patch semantics.
 *
 *  @param object The @c GTLRDeploymentManager_Deployment to include in the
 *    query.
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsPatch
 */
+ (instancetype)queryWithObject:(GTLRDeploymentManager_Deployment *)object
                        project:(NSString *)project
                     deployment:(NSString *)deployment;

@end

/**
 *  Stops an ongoing operation. This does not roll back any work that has
 *  already been completed, but prevents any new work from being started.
 *
 *  Method: deploymentmanager.deployments.stop
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 */
@interface GTLRDeploymentManagerQuery_DeploymentsStop : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsStopWithObject:project:deployment:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Stops an ongoing operation. This does not roll back any work that has
 *  already been completed, but prevents any new work from being started.
 *
 *  @param object The @c GTLRDeploymentManager_DeploymentsStopRequest to include
 *    in the query.
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsStop
 */
+ (instancetype)queryWithObject:(GTLRDeploymentManager_DeploymentsStopRequest *)object
                        project:(NSString *)project
                     deployment:(NSString *)deployment;

@end

/**
 *  Updates a deployment and all of the resources described by the deployment
 *  manifest.
 *
 *  Method: deploymentmanager.deployments.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 */
@interface GTLRDeploymentManagerQuery_DeploymentsUpdate : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForDeploymentsUpdateWithObject:project:deployment:]

/**
 *  Sets the policy to use for creating new resources.
 *
 *  Likely values:
 *    @arg @c kGTLRDeploymentManagerCreatePolicyAcquire Value "ACQUIRE"
 *    @arg @c kGTLRDeploymentManagerCreatePolicyCreateOrAcquire Value
 *        "CREATE_OR_ACQUIRE"
 *
 *  @note If not set, the documented server-side default will be
 *        kGTLRDeploymentManagerCreatePolicyCreateOrAcquire.
 */
@property(nonatomic, copy, nullable) NSString *createPolicy;

/**
 *  Sets the policy to use for deleting resources.
 *
 *  Likely values:
 *    @arg @c kGTLRDeploymentManagerDeletePolicyAbandon Value "ABANDON"
 *    @arg @c kGTLRDeploymentManagerDeletePolicyDelete Value "DELETE"
 *
 *  @note If not set, the documented server-side default will be
 *        kGTLRDeploymentManagerDeletePolicyDelete.
 */
@property(nonatomic, copy, nullable) NSString *deletePolicy;

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/**
 *  If set to true, updates the deployment and creates and updates the "shell"
 *  resources but does not actually alter or instantiate these resources. This
 *  allows you to preview what your deployment will look like. You can use this
 *  intent to preview how an update would affect your deployment. You must
 *  provide a target.config with a configuration if this is set to true. After
 *  previewing a deployment, you can deploy your resources by making a request
 *  with the update() or you can cancelPreview() to remove the preview
 *  altogether. Note that the deployment will still exist after you cancel the
 *  preview and you must separately delete this deployment if you want to remove
 *  it.
 *
 *  @note If not set, the documented server-side default will be false.
 */
@property(nonatomic, assign) BOOL preview;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Updates a deployment and all of the resources described by the deployment
 *  manifest.
 *
 *  @param object The @c GTLRDeploymentManager_Deployment to include in the
 *    query.
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_DeploymentsUpdate
 */
+ (instancetype)queryWithObject:(GTLRDeploymentManager_Deployment *)object
                        project:(NSString *)project
                     deployment:(NSString *)deployment;

@end

/**
 *  Gets information about a specific manifest.
 *
 *  Method: deploymentmanager.manifests.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_ManifestsGet : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForManifestsGetWithproject:deployment:manifest:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/** The name of the manifest for this request. */
@property(nonatomic, copy, nullable) NSString *manifest;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Manifest.
 *
 *  Gets information about a specific manifest.
 *
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *  @param manifest The name of the manifest for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_ManifestsGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                      deployment:(NSString *)deployment
                        manifest:(NSString *)manifest;

@end

/**
 *  Lists all manifests for a given deployment.
 *
 *  Method: deploymentmanager.manifests.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_ManifestsList : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForManifestsListWithproject:deployment:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/**
 *  Sets a filter expression for filtering listed resources, in the form
 *  filter={expression}. Your {expression} must be in the format: field_name
 *  comparison_string literal_string.
 *  The field_name is the name of the field you want to compare. Only atomic
 *  field types are supported (string, number, boolean). The comparison_string
 *  must be either eq (equals) or ne (not equals). The literal_string is the
 *  string value to filter to. The literal value must be valid for the type of
 *  field you are filtering by (string, number, boolean). For string fields, the
 *  literal value is interpreted as a regular expression using RE2 syntax. The
 *  literal value must match the entire field.
 *  For example, to filter for instances that do not have a name of
 *  example-instance, you would use filter=name ne example-instance.
 *  You can filter on nested fields. For example, you could filter on instances
 *  that have set the scheduling.automaticRestart field to true. Use filtering
 *  on nested fields to take advantage of labels to organize and search for
 *  results based on label values.
 *  To filter on multiple expressions, provide each separate expression within
 *  parentheses. For example, (scheduling.automaticRestart eq true) (zone eq
 *  us-central1-f). Multiple expressions are treated as AND expressions, meaning
 *  that resources must match all expressions to pass the filters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of results per page that should be returned. If the
 *  number of available results is larger than maxResults, Compute Engine
 *  returns a nextPageToken that can be used to get the next page of results in
 *  subsequent list requests.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Specifies a page token to use. Set pageToken to the nextPageToken returned
 *  by a previous list request to get the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_ManifestsListResponse.
 *
 *  Lists all manifests for a given deployment.
 *
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_ManifestsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                      deployment:(NSString *)deployment;

@end

/**
 *  Gets information about a specific operation.
 *
 *  Method: deploymentmanager.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_OperationsGet : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForOperationsGetWithproject:operation:]

/** The name of the operation for this request. */
@property(nonatomic, copy, nullable) NSString *operation;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_Operation.
 *
 *  Gets information about a specific operation.
 *
 *  @param project The project ID for this request.
 *  @param operation The name of the operation for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_OperationsGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                       operation:(NSString *)operation;

@end

/**
 *  Lists all operations for a project.
 *
 *  Method: deploymentmanager.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_OperationsList : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForOperationsListWithproject:]

/**
 *  Sets a filter expression for filtering listed resources, in the form
 *  filter={expression}. Your {expression} must be in the format: field_name
 *  comparison_string literal_string.
 *  The field_name is the name of the field you want to compare. Only atomic
 *  field types are supported (string, number, boolean). The comparison_string
 *  must be either eq (equals) or ne (not equals). The literal_string is the
 *  string value to filter to. The literal value must be valid for the type of
 *  field you are filtering by (string, number, boolean). For string fields, the
 *  literal value is interpreted as a regular expression using RE2 syntax. The
 *  literal value must match the entire field.
 *  For example, to filter for instances that do not have a name of
 *  example-instance, you would use filter=name ne example-instance.
 *  You can filter on nested fields. For example, you could filter on instances
 *  that have set the scheduling.automaticRestart field to true. Use filtering
 *  on nested fields to take advantage of labels to organize and search for
 *  results based on label values.
 *  To filter on multiple expressions, provide each separate expression within
 *  parentheses. For example, (scheduling.automaticRestart eq true) (zone eq
 *  us-central1-f). Multiple expressions are treated as AND expressions, meaning
 *  that resources must match all expressions to pass the filters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of results per page that should be returned. If the
 *  number of available results is larger than maxResults, Compute Engine
 *  returns a nextPageToken that can be used to get the next page of results in
 *  subsequent list requests.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Specifies a page token to use. Set pageToken to the nextPageToken returned
 *  by a previous list request to get the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_OperationsListResponse.
 *
 *  Lists all operations for a project.
 *
 *  @param project The project ID for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project;

@end

/**
 *  Gets information about a single resource.
 *
 *  Method: deploymentmanager.resources.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_ResourcesGet : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForResourcesGetWithproject:deployment:resource:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the resource for this request. */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRDeploymentManager_Resource.
 *
 *  Gets information about a single resource.
 *
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *  @param resource The name of the resource for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_ResourcesGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                      deployment:(NSString *)deployment
                        resource:(NSString *)resource;

@end

/**
 *  Lists all resources in a given deployment.
 *
 *  Method: deploymentmanager.resources.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_ResourcesList : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForResourcesListWithproject:deployment:]

/** The name of the deployment for this request. */
@property(nonatomic, copy, nullable) NSString *deployment;

/**
 *  Sets a filter expression for filtering listed resources, in the form
 *  filter={expression}. Your {expression} must be in the format: field_name
 *  comparison_string literal_string.
 *  The field_name is the name of the field you want to compare. Only atomic
 *  field types are supported (string, number, boolean). The comparison_string
 *  must be either eq (equals) or ne (not equals). The literal_string is the
 *  string value to filter to. The literal value must be valid for the type of
 *  field you are filtering by (string, number, boolean). For string fields, the
 *  literal value is interpreted as a regular expression using RE2 syntax. The
 *  literal value must match the entire field.
 *  For example, to filter for instances that do not have a name of
 *  example-instance, you would use filter=name ne example-instance.
 *  You can filter on nested fields. For example, you could filter on instances
 *  that have set the scheduling.automaticRestart field to true. Use filtering
 *  on nested fields to take advantage of labels to organize and search for
 *  results based on label values.
 *  To filter on multiple expressions, provide each separate expression within
 *  parentheses. For example, (scheduling.automaticRestart eq true) (zone eq
 *  us-central1-f). Multiple expressions are treated as AND expressions, meaning
 *  that resources must match all expressions to pass the filters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of results per page that should be returned. If the
 *  number of available results is larger than maxResults, Compute Engine
 *  returns a nextPageToken that can be used to get the next page of results in
 *  subsequent list requests.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Specifies a page token to use. Set pageToken to the nextPageToken returned
 *  by a previous list request to get the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_ResourcesListResponse.
 *
 *  Lists all resources in a given deployment.
 *
 *  @param project The project ID for this request.
 *  @param deployment The name of the deployment for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_ResourcesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                      deployment:(NSString *)deployment;

@end

/**
 *  Lists all resource types for Deployment Manager.
 *
 *  Method: deploymentmanager.types.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatform
 *    @c kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudman
 *    @c kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly
 */
@interface GTLRDeploymentManagerQuery_TypesList : GTLRDeploymentManagerQuery
// Previous library name was
//   +[GTLQueryDeploymentManager queryForTypesListWithproject:]

/**
 *  Sets a filter expression for filtering listed resources, in the form
 *  filter={expression}. Your {expression} must be in the format: field_name
 *  comparison_string literal_string.
 *  The field_name is the name of the field you want to compare. Only atomic
 *  field types are supported (string, number, boolean). The comparison_string
 *  must be either eq (equals) or ne (not equals). The literal_string is the
 *  string value to filter to. The literal value must be valid for the type of
 *  field you are filtering by (string, number, boolean). For string fields, the
 *  literal value is interpreted as a regular expression using RE2 syntax. The
 *  literal value must match the entire field.
 *  For example, to filter for instances that do not have a name of
 *  example-instance, you would use filter=name ne example-instance.
 *  You can filter on nested fields. For example, you could filter on instances
 *  that have set the scheduling.automaticRestart field to true. Use filtering
 *  on nested fields to take advantage of labels to organize and search for
 *  results based on label values.
 *  To filter on multiple expressions, provide each separate expression within
 *  parentheses. For example, (scheduling.automaticRestart eq true) (zone eq
 *  us-central1-f). Multiple expressions are treated as AND expressions, meaning
 *  that resources must match all expressions to pass the filters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of results per page that should be returned. If the
 *  number of available results is larger than maxResults, Compute Engine
 *  returns a nextPageToken that can be used to get the next page of results in
 *  subsequent list requests.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Specifies a page token to use. Set pageToken to the nextPageToken returned
 *  by a previous list request to get the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The project ID for this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDeploymentManager_TypesListResponse.
 *
 *  Lists all resource types for Deployment Manager.
 *
 *  @param project The project ID for this request.
 *
 *  @returns GTLRDeploymentManagerQuery_TypesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project;

@end

NS_ASSUME_NONNULL_END
