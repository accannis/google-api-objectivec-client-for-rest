// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Natural Language API (language/v1beta1)
// Description:
//   Google Cloud Natural Language API provides natural language understanding
//   technologies to developers. Examples include sentiment analysis, entity
//   recognition, and text annotations.
// Documentation:
//   https://cloud.google.com/natural-language/

#import "GTLRCloudNaturalLanguageAPI.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeCloudNaturalLanguageAPICloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRCloudNaturalLanguageAPIService
//

@implementation GTLRCloudNaturalLanguageAPIService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://language.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
