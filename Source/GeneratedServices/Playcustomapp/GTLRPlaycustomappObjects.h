// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Custom App Publishing API (playcustomapp/v1)
// Description:
//   API to create and publish custom Android apps
// Documentation:
//   https://developers.google.com/android/work/play/custom-app-api/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  This resource represents a custom app.
 */
@interface GTLRPlaycustomapp_CustomApp : GTLRObject

/** Default listing language in BCP 47 format. */
@property(nonatomic, copy, nullable) NSString *languageCode;

/**
 *  Output only. Package name of the created Android app. Only present in the
 *  API response.
 */
@property(nonatomic, copy, nullable) NSString *packageName;

/** Title for the Android app. */
@property(nonatomic, copy, nullable) NSString *title;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
