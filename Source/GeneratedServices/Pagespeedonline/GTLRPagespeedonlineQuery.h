// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   PageSpeed Insights API (pagespeedonline/v2)
// Description:
//   Analyzes the performance of a web page and provides tailored suggestions to
//   make that page faster.
// Documentation:
//   https://developers.google.com/speed/docs/insights/v2/getting-started

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// strategy

/**
 *  Fetch and analyze the URL for desktop browsers
 *
 *  Value: "desktop"
 */
GTLR_EXTERN NSString * const kGTLRPagespeedonlineStrategyDesktop;
/**
 *  Fetch and analyze the URL for mobile devices
 *
 *  Value: "mobile"
 */
GTLR_EXTERN NSString * const kGTLRPagespeedonlineStrategyMobile;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Pagespeedonline query classes.
 */
@interface GTLRPagespeedonlineQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Runs PageSpeed analysis on the page at the specified URL, and returns
 *  PageSpeed scores, a list of suggestions to make that page faster, and other
 *  information.
 *
 *  Method: pagespeedonline.pagespeedapi.runpagespeed
 */
@interface GTLRPagespeedonlineQuery_PagespeedapiRunpagespeed : GTLRPagespeedonlineQuery
// Previous library name was
//   +[GTLQueryPagespeedonline queryForPagespeedapiRunpagespeedWithurl:]

/**
 *  Indicates if third party resources should be filtered out before PageSpeed
 *  analysis.
 *
 *  @note If not set, the documented server-side default will be false.
 */
@property(nonatomic, assign) BOOL filterThirdPartyResources;

/** The locale used to localize formatted results */
@property(nonatomic, copy, nullable) NSString *locale;

/** A PageSpeed rule to run; if none are given, all rules are run */
@property(nonatomic, strong, nullable) NSArray<NSString *> *rule;

/**
 *  Indicates if binary data containing a screenshot should be included
 *
 *  @note If not set, the documented server-side default will be false.
 */
@property(nonatomic, assign) BOOL screenshot;

/**
 *  The analysis strategy to use
 *
 *  Likely values:
 *    @arg @c kGTLRPagespeedonlineStrategyDesktop Fetch and analyze the URL for
 *        desktop browsers (Value: "desktop")
 *    @arg @c kGTLRPagespeedonlineStrategyMobile Fetch and analyze the URL for
 *        mobile devices (Value: "mobile")
 */
@property(nonatomic, copy, nullable) NSString *strategy;

/** The URL to fetch and analyze */
@property(nonatomic, copy, nullable) NSString *url;

/**
 *  Fetches a @c GTLRPagespeedonline_Result.
 *
 *  Runs PageSpeed analysis on the page at the specified URL, and returns
 *  PageSpeed scores, a list of suggestions to make that page faster, and other
 *  information.
 *
 *  @param url The URL to fetch and analyze
 *
 *  @returns GTLRPagespeedonlineQuery_PagespeedapiRunpagespeed
 */
+ (instancetype)queryWithUrl:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
