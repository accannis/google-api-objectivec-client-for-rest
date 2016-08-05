// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   DoubleClick Bid Manager API (doubleclickbidmanager/v1)
// Description:
//   API for viewing and managing your reports in DoubleClick Bid Manager.
// Documentation:
//   https://developers.google.com/bid-manager/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDoubleClickBidManager_DownloadLineItemsRequest;
@class GTLRDoubleClickBidManager_NotifyProposalChangeRequest;
@class GTLRDoubleClickBidManager_Query;
@class GTLRDoubleClickBidManager_RunQueryRequest;
@class GTLRDoubleClickBidManager_UploadLineItemsRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other DoubleClick Bid Manager query classes.
 */
@interface GTLRDoubleClickBidManagerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Retrieves line items in CSV format.
 *
 *  Method: doubleclickbidmanager.lineitems.downloadlineitems
 */
@interface GTLRDoubleClickBidManagerQuery_LineitemsDownloadlineitems : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForLineitemsDownloadlineitemsWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickBidManager_DownloadLineItemsResponse.
 *
 *  Retrieves line items in CSV format.
 *
 *  @param object The @c GTLRDoubleClickBidManager_DownloadLineItemsRequest to
 *    include in the query.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_LineitemsDownloadlineitems
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_DownloadLineItemsRequest *)object;

@end

/**
 *  Uploads line items in CSV format.
 *
 *  Method: doubleclickbidmanager.lineitems.uploadlineitems
 */
@interface GTLRDoubleClickBidManagerQuery_LineitemsUploadlineitems : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForLineitemsUploadlineitemsWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickBidManager_UploadLineItemsResponse.
 *
 *  Uploads line items in CSV format.
 *
 *  @param object The @c GTLRDoubleClickBidManager_UploadLineItemsRequest to
 *    include in the query.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_LineitemsUploadlineitems
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_UploadLineItemsRequest *)object;

@end

/**
 *  Creates a query.
 *
 *  Method: doubleclickbidmanager.queries.createquery
 */
@interface GTLRDoubleClickBidManagerQuery_QueriesCreatequery : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForQueriesCreatequeryWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickBidManager_Query.
 *
 *  Creates a query.
 *
 *  @param object The @c GTLRDoubleClickBidManager_Query to include in the
 *    query.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_QueriesCreatequery
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_Query *)object;

@end

/**
 *  Deletes a stored query as well as the associated stored reports.
 *
 *  Method: doubleclickbidmanager.queries.deletequery
 */
@interface GTLRDoubleClickBidManagerQuery_QueriesDeletequery : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForQueriesDeletequeryWithqueryId:]

/** Query ID to delete. */
@property(nonatomic, assign) long long queryId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a stored query as well as the associated stored reports.
 *
 *  @param queryId Query ID to delete.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_QueriesDeletequery
 */
+ (instancetype)queryWithQueryId:(long long)queryId;

@end

/**
 *  Retrieves a stored query.
 *
 *  Method: doubleclickbidmanager.queries.getquery
 */
@interface GTLRDoubleClickBidManagerQuery_QueriesGetquery : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForQueriesGetqueryWithqueryId:]

/** Query ID to retrieve. */
@property(nonatomic, assign) long long queryId;

/**
 *  Fetches a @c GTLRDoubleClickBidManager_Query.
 *
 *  Retrieves a stored query.
 *
 *  @param queryId Query ID to retrieve.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_QueriesGetquery
 */
+ (instancetype)queryWithQueryId:(long long)queryId;

@end

/**
 *  Retrieves stored queries.
 *
 *  Method: doubleclickbidmanager.queries.listqueries
 */
@interface GTLRDoubleClickBidManagerQuery_QueriesListqueries : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForQueriesListqueries]

/**
 *  Fetches a @c GTLRDoubleClickBidManager_ListQueriesResponse.
 *
 *  Retrieves stored queries.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_QueriesListqueries
 */
+ (instancetype)query;

@end

/**
 *  Runs a stored query to generate a report.
 *
 *  Method: doubleclickbidmanager.queries.runquery
 */
@interface GTLRDoubleClickBidManagerQuery_QueriesRunquery : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForQueriesRunqueryWithObject:queryId:]

/** Query ID to run. */
@property(nonatomic, assign) long long queryId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Runs a stored query to generate a report.
 *
 *  @param object The @c GTLRDoubleClickBidManager_RunQueryRequest to include in
 *    the query.
 *  @param queryId Query ID to run.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_QueriesRunquery
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_RunQueryRequest *)object
                        queryId:(long long)queryId;

@end

/**
 *  Retrieves stored reports.
 *
 *  Method: doubleclickbidmanager.reports.listreports
 */
@interface GTLRDoubleClickBidManagerQuery_ReportsListreports : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForReportsListreportsWithqueryId:]

/** Query ID with which the reports are associated. */
@property(nonatomic, assign) long long queryId;

/**
 *  Fetches a @c GTLRDoubleClickBidManager_ListReportsResponse.
 *
 *  Retrieves stored reports.
 *
 *  @param queryId Query ID with which the reports are associated.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_ReportsListreports
 */
+ (instancetype)queryWithQueryId:(long long)queryId;

@end

/**
 *  Update proposal upon actions of Rubicon publisher.
 *
 *  Method: doubleclickbidmanager.rubicon.notifyproposalchange
 */
@interface GTLRDoubleClickBidManagerQuery_RubiconNotifyproposalchange : GTLRDoubleClickBidManagerQuery
// Previous library name was
//   +[GTLQueryDoubleClickBidManager queryForRubiconNotifyproposalchangeWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Update proposal upon actions of Rubicon publisher.
 *
 *  @param object The @c GTLRDoubleClickBidManager_NotifyProposalChangeRequest
 *    to include in the query.
 *
 *  @returns GTLRDoubleClickBidManagerQuery_RubiconNotifyproposalchange
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_NotifyProposalChangeRequest *)object;

@end

NS_ASSUME_NONNULL_END
