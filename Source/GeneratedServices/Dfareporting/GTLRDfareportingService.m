// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Campaign Manager 360 API (dfareporting/v3.4)
// Description:
//   Manage your DoubleClick Campaign Manager ad campaigns and reports.
// Documentation:
//   https://developers.google.com/doubleclick-advertisers/

#import "GTLRDfareporting.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeDfareporting               = @"https://www.googleapis.com/auth/dfareporting";
NSString * const kGTLRAuthScopeDfareportingDdmconversions = @"https://www.googleapis.com/auth/ddmconversions";
NSString * const kGTLRAuthScopeDfareportingDfatrafficking = @"https://www.googleapis.com/auth/dfatrafficking";

// ----------------------------------------------------------------------------
//   GTLRDfareportingService
//

@implementation GTLRDfareportingService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://dfareporting.googleapis.com/";
    self.servicePath = @"dfareporting/v3.4/";
    self.simpleUploadPath = @"upload/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
