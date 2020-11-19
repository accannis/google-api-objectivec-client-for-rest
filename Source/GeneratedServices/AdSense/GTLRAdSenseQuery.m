// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   AdSense Management API (adsense/v1.4)
// Description:
//   Accesses AdSense publishers' inventory and generates performance reports.
// Documentation:
//   https://developers.google.com/adsense/management/

#import "GTLRAdSenseQuery.h"

#import "GTLRAdSenseObjects.h"

@implementation GTLRAdSenseQuery

@dynamic fields;

@end

@implementation GTLRAdSenseQuery_AccountsAdclientsGetAdCode

@dynamic accountId, adClientId, tagPartner;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/adcode";
  GTLRAdSenseQuery_AccountsAdclientsGetAdCode *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_AdCode class];
  query.loggingName = @"adsense.accounts.adclients.getAdCode";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAdclientsList

@dynamic accountId, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients";
  GTLRAdSenseQuery_AccountsAdclientsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdSense_AdClients class];
  query.loggingName = @"adsense.accounts.adclients.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAdunitsCustomchannelsList

@dynamic accountId, adClientId, adUnitId, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId
                          adUnitId:(NSString *)adUnitId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId", @"adUnitId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/adunits/{adUnitId}/customchannels";
  GTLRAdSenseQuery_AccountsAdunitsCustomchannelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.adUnitId = adUnitId;
  query.expectedObjectClass = [GTLRAdSense_CustomChannels class];
  query.loggingName = @"adsense.accounts.adunits.customchannels.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAdunitsGet

@dynamic accountId, adClientId, adUnitId;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId
                          adUnitId:(NSString *)adUnitId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId", @"adUnitId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/adunits/{adUnitId}";
  GTLRAdSenseQuery_AccountsAdunitsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.adUnitId = adUnitId;
  query.expectedObjectClass = [GTLRAdSense_AdUnit class];
  query.loggingName = @"adsense.accounts.adunits.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAdunitsGetAdCode

@dynamic accountId, adClientId, adUnitId;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId
                          adUnitId:(NSString *)adUnitId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId", @"adUnitId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/adunits/{adUnitId}/adcode";
  GTLRAdSenseQuery_AccountsAdunitsGetAdCode *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.adUnitId = adUnitId;
  query.expectedObjectClass = [GTLRAdSense_AdCode class];
  query.loggingName = @"adsense.accounts.adunits.getAdCode";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAdunitsList

@dynamic accountId, adClientId, includeInactive, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/adunits";
  GTLRAdSenseQuery_AccountsAdunitsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_AdUnits class];
  query.loggingName = @"adsense.accounts.adunits.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAlertsDelete

@dynamic accountId, alertId;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                           alertId:(NSString *)alertId {
  NSArray *pathParams = @[
    @"accountId", @"alertId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/alerts/{alertId}";
  GTLRAdSenseQuery_AccountsAlertsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.alertId = alertId;
  query.loggingName = @"adsense.accounts.alerts.delete";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsAlertsList

@dynamic accountId, locale;

+ (instancetype)queryWithAccountId:(NSString *)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}/alerts";
  GTLRAdSenseQuery_AccountsAlertsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdSense_Alerts class];
  query.loggingName = @"adsense.accounts.alerts.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsCustomchannelsAdunitsList

@dynamic accountId, adClientId, customChannelId, includeInactive, maxResults,
         pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId
                   customChannelId:(NSString *)customChannelId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId", @"customChannelId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/customchannels/{customChannelId}/adunits";
  GTLRAdSenseQuery_AccountsCustomchannelsAdunitsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.customChannelId = customChannelId;
  query.expectedObjectClass = [GTLRAdSense_AdUnits class];
  query.loggingName = @"adsense.accounts.customchannels.adunits.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsCustomchannelsGet

@dynamic accountId, adClientId, customChannelId;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId
                   customChannelId:(NSString *)customChannelId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId", @"customChannelId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/customchannels/{customChannelId}";
  GTLRAdSenseQuery_AccountsCustomchannelsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.customChannelId = customChannelId;
  query.expectedObjectClass = [GTLRAdSense_CustomChannel class];
  query.loggingName = @"adsense.accounts.customchannels.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsCustomchannelsList

@dynamic accountId, adClientId, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/customchannels";
  GTLRAdSenseQuery_AccountsCustomchannelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_CustomChannels class];
  query.loggingName = @"adsense.accounts.customchannels.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsGet

@dynamic accountId, tree;

+ (instancetype)queryWithAccountId:(NSString *)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}";
  GTLRAdSenseQuery_AccountsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdSense_Account class];
  query.loggingName = @"adsense.accounts.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsList

@dynamic maxResults, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"accounts";
  GTLRAdSenseQuery_AccountsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_Accounts class];
  query.loggingName = @"adsense.accounts.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsPaymentsList

@dynamic accountId;

+ (instancetype)queryWithAccountId:(NSString *)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}/payments";
  GTLRAdSenseQuery_AccountsPaymentsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdSense_Payments class];
  query.loggingName = @"adsense.accounts.payments.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsReportsGenerate

@dynamic accountId, currency, dimension, endDate, filter, locale, maxResults,
         metric, sort, startDate, startIndex, useTimezoneReporting;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimension" : [NSString class],
    @"filter" : [NSString class],
    @"metric" : [NSString class],
    @"sort" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithAccountId:(NSString *)accountId
                         startDate:(NSString *)startDate
                           endDate:(NSString *)endDate {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}/reports";
  GTLRAdSenseQuery_AccountsReportsGenerate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.startDate = startDate;
  query.endDate = endDate;
  query.expectedObjectClass = [GTLRAdSense_AdsenseReportsGenerateResponse class];
  query.loggingName = @"adsense.accounts.reports.generate";
  return query;
}

+ (instancetype)queryForMediaWithAccountId:(NSString *)accountId
                                 startDate:(NSString *)startDate
                                   endDate:(NSString *)endDate {
  GTLRAdSenseQuery_AccountsReportsGenerate *query =
    [self queryWithAccountId:accountId
                   startDate:startDate
                     endDate:endDate];
  query.downloadAsDataObjectType = @"media";
  query.loggingName = @"Download adsense.accounts.reports.generate";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsReportsSavedGenerate

@dynamic accountId, locale, maxResults, savedReportId, startIndex;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                     savedReportId:(NSString *)savedReportId {
  NSArray *pathParams = @[
    @"accountId", @"savedReportId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/reports/{savedReportId}";
  GTLRAdSenseQuery_AccountsReportsSavedGenerate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.savedReportId = savedReportId;
  query.expectedObjectClass = [GTLRAdSense_AdsenseReportsGenerateResponse class];
  query.loggingName = @"adsense.accounts.reports.saved.generate";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsReportsSavedList

@dynamic accountId, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}/reports/saved";
  GTLRAdSenseQuery_AccountsReportsSavedList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdSense_SavedReports class];
  query.loggingName = @"adsense.accounts.reports.saved.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsSavedadstylesGet

@dynamic accountId, savedAdStyleId;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                    savedAdStyleId:(NSString *)savedAdStyleId {
  NSArray *pathParams = @[
    @"accountId", @"savedAdStyleId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/savedadstyles/{savedAdStyleId}";
  GTLRAdSenseQuery_AccountsSavedadstylesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.savedAdStyleId = savedAdStyleId;
  query.expectedObjectClass = [GTLRAdSense_SavedAdStyle class];
  query.loggingName = @"adsense.accounts.savedadstyles.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsSavedadstylesList

@dynamic accountId, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId {
  NSArray *pathParams = @[ @"accountId" ];
  NSString *pathURITemplate = @"accounts/{accountId}/savedadstyles";
  GTLRAdSenseQuery_AccountsSavedadstylesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRAdSense_SavedAdStyles class];
  query.loggingName = @"adsense.accounts.savedadstyles.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AccountsUrlchannelsList

@dynamic accountId, adClientId, maxResults, pageToken;

+ (instancetype)queryWithAccountId:(NSString *)accountId
                        adClientId:(NSString *)adClientId {
  NSArray *pathParams = @[
    @"accountId", @"adClientId"
  ];
  NSString *pathURITemplate = @"accounts/{accountId}/adclients/{adClientId}/urlchannels";
  GTLRAdSenseQuery_AccountsUrlchannelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.accountId = accountId;
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_UrlChannels class];
  query.loggingName = @"adsense.accounts.urlchannels.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AdclientsList

@dynamic maxResults, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"adclients";
  GTLRAdSenseQuery_AdclientsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_AdClients class];
  query.loggingName = @"adsense.adclients.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AdunitsCustomchannelsList

@dynamic adClientId, adUnitId, maxResults, pageToken;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId
                           adUnitId:(NSString *)adUnitId {
  NSArray *pathParams = @[
    @"adClientId", @"adUnitId"
  ];
  NSString *pathURITemplate = @"adclients/{adClientId}/adunits/{adUnitId}/customchannels";
  GTLRAdSenseQuery_AdunitsCustomchannelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.adUnitId = adUnitId;
  query.expectedObjectClass = [GTLRAdSense_CustomChannels class];
  query.loggingName = @"adsense.adunits.customchannels.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AdunitsGet

@dynamic adClientId, adUnitId;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId
                           adUnitId:(NSString *)adUnitId {
  NSArray *pathParams = @[
    @"adClientId", @"adUnitId"
  ];
  NSString *pathURITemplate = @"adclients/{adClientId}/adunits/{adUnitId}";
  GTLRAdSenseQuery_AdunitsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.adUnitId = adUnitId;
  query.expectedObjectClass = [GTLRAdSense_AdUnit class];
  query.loggingName = @"adsense.adunits.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AdunitsGetAdCode

@dynamic adClientId, adUnitId;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId
                           adUnitId:(NSString *)adUnitId {
  NSArray *pathParams = @[
    @"adClientId", @"adUnitId"
  ];
  NSString *pathURITemplate = @"adclients/{adClientId}/adunits/{adUnitId}/adcode";
  GTLRAdSenseQuery_AdunitsGetAdCode *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.adUnitId = adUnitId;
  query.expectedObjectClass = [GTLRAdSense_AdCode class];
  query.loggingName = @"adsense.adunits.getAdCode";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AdunitsList

@dynamic adClientId, includeInactive, maxResults, pageToken;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId {
  NSArray *pathParams = @[ @"adClientId" ];
  NSString *pathURITemplate = @"adclients/{adClientId}/adunits";
  GTLRAdSenseQuery_AdunitsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_AdUnits class];
  query.loggingName = @"adsense.adunits.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AlertsDelete

@dynamic alertId;

+ (instancetype)queryWithAlertId:(NSString *)alertId {
  NSArray *pathParams = @[ @"alertId" ];
  NSString *pathURITemplate = @"alerts/{alertId}";
  GTLRAdSenseQuery_AlertsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.alertId = alertId;
  query.loggingName = @"adsense.alerts.delete";
  return query;
}

@end

@implementation GTLRAdSenseQuery_AlertsList

@dynamic locale;

+ (instancetype)query {
  NSString *pathURITemplate = @"alerts";
  GTLRAdSenseQuery_AlertsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_Alerts class];
  query.loggingName = @"adsense.alerts.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_CustomchannelsAdunitsList

@dynamic adClientId, customChannelId, includeInactive, maxResults, pageToken;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId
                    customChannelId:(NSString *)customChannelId {
  NSArray *pathParams = @[
    @"adClientId", @"customChannelId"
  ];
  NSString *pathURITemplate = @"adclients/{adClientId}/customchannels/{customChannelId}/adunits";
  GTLRAdSenseQuery_CustomchannelsAdunitsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.customChannelId = customChannelId;
  query.expectedObjectClass = [GTLRAdSense_AdUnits class];
  query.loggingName = @"adsense.customchannels.adunits.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_CustomchannelsGet

@dynamic adClientId, customChannelId;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId
                    customChannelId:(NSString *)customChannelId {
  NSArray *pathParams = @[
    @"adClientId", @"customChannelId"
  ];
  NSString *pathURITemplate = @"adclients/{adClientId}/customchannels/{customChannelId}";
  GTLRAdSenseQuery_CustomchannelsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.customChannelId = customChannelId;
  query.expectedObjectClass = [GTLRAdSense_CustomChannel class];
  query.loggingName = @"adsense.customchannels.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_CustomchannelsList

@dynamic adClientId, maxResults, pageToken;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId {
  NSArray *pathParams = @[ @"adClientId" ];
  NSString *pathURITemplate = @"adclients/{adClientId}/customchannels";
  GTLRAdSenseQuery_CustomchannelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_CustomChannels class];
  query.loggingName = @"adsense.customchannels.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_MetadataDimensionsList

+ (instancetype)query {
  NSString *pathURITemplate = @"metadata/dimensions";
  GTLRAdSenseQuery_MetadataDimensionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_Metadata class];
  query.loggingName = @"adsense.metadata.dimensions.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_MetadataMetricsList

+ (instancetype)query {
  NSString *pathURITemplate = @"metadata/metrics";
  GTLRAdSenseQuery_MetadataMetricsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_Metadata class];
  query.loggingName = @"adsense.metadata.metrics.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_PaymentsList

+ (instancetype)query {
  NSString *pathURITemplate = @"payments";
  GTLRAdSenseQuery_PaymentsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_Payments class];
  query.loggingName = @"adsense.payments.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_ReportsGenerate

@dynamic accountId, currency, dimension, endDate, filter, locale, maxResults,
         metric, sort, startDate, startIndex, useTimezoneReporting;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accountId" : [NSString class],
    @"dimension" : [NSString class],
    @"filter" : [NSString class],
    @"metric" : [NSString class],
    @"sort" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithStartDate:(NSString *)startDate
                           endDate:(NSString *)endDate {
  NSString *pathURITemplate = @"reports";
  GTLRAdSenseQuery_ReportsGenerate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.startDate = startDate;
  query.endDate = endDate;
  query.expectedObjectClass = [GTLRAdSense_AdsenseReportsGenerateResponse class];
  query.loggingName = @"adsense.reports.generate";
  return query;
}

+ (instancetype)queryForMediaWithStartDate:(NSString *)startDate
                                   endDate:(NSString *)endDate {
  GTLRAdSenseQuery_ReportsGenerate *query =
    [self queryWithStartDate:startDate
                     endDate:endDate];
  query.downloadAsDataObjectType = @"media";
  query.loggingName = @"Download adsense.reports.generate";
  return query;
}

@end

@implementation GTLRAdSenseQuery_ReportsSavedGenerate

@dynamic locale, maxResults, savedReportId, startIndex;

+ (instancetype)queryWithSavedReportId:(NSString *)savedReportId {
  NSArray *pathParams = @[ @"savedReportId" ];
  NSString *pathURITemplate = @"reports/{savedReportId}";
  GTLRAdSenseQuery_ReportsSavedGenerate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.savedReportId = savedReportId;
  query.expectedObjectClass = [GTLRAdSense_AdsenseReportsGenerateResponse class];
  query.loggingName = @"adsense.reports.saved.generate";
  return query;
}

@end

@implementation GTLRAdSenseQuery_ReportsSavedList

@dynamic maxResults, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"reports/saved";
  GTLRAdSenseQuery_ReportsSavedList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_SavedReports class];
  query.loggingName = @"adsense.reports.saved.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_SavedadstylesGet

@dynamic savedAdStyleId;

+ (instancetype)queryWithSavedAdStyleId:(NSString *)savedAdStyleId {
  NSArray *pathParams = @[ @"savedAdStyleId" ];
  NSString *pathURITemplate = @"savedadstyles/{savedAdStyleId}";
  GTLRAdSenseQuery_SavedadstylesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.savedAdStyleId = savedAdStyleId;
  query.expectedObjectClass = [GTLRAdSense_SavedAdStyle class];
  query.loggingName = @"adsense.savedadstyles.get";
  return query;
}

@end

@implementation GTLRAdSenseQuery_SavedadstylesList

@dynamic maxResults, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"savedadstyles";
  GTLRAdSenseQuery_SavedadstylesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRAdSense_SavedAdStyles class];
  query.loggingName = @"adsense.savedadstyles.list";
  return query;
}

@end

@implementation GTLRAdSenseQuery_UrlchannelsList

@dynamic adClientId, maxResults, pageToken;

+ (instancetype)queryWithAdClientId:(NSString *)adClientId {
  NSArray *pathParams = @[ @"adClientId" ];
  NSString *pathURITemplate = @"adclients/{adClientId}/urlchannels";
  GTLRAdSenseQuery_UrlchannelsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.adClientId = adClientId;
  query.expectedObjectClass = [GTLRAdSense_UrlChannels class];
  query.loggingName = @"adsense.urlchannels.list";
  return query;
}

@end
