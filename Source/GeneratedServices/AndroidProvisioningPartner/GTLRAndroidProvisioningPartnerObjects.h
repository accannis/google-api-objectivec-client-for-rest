// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Android Device Provisioning Partner API (androiddeviceprovisioning/v1)
// Description:
//   Automates reseller integration into Zero Touch Provisioning by assigning
//   devices to customers and creating device reports.
// Documentation:
//   https://developers.google.com/zero-touch/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAndroidProvisioningPartner_Company;
@class GTLRAndroidProvisioningPartner_Device;
@class GTLRAndroidProvisioningPartner_DeviceClaim;
@class GTLRAndroidProvisioningPartner_DeviceIdentifier;
@class GTLRAndroidProvisioningPartner_DeviceMetadata;
@class GTLRAndroidProvisioningPartner_DeviceMetadata_Entries;
@class GTLRAndroidProvisioningPartner_Operation_Metadata;
@class GTLRAndroidProvisioningPartner_Operation_Response;
@class GTLRAndroidProvisioningPartner_OperationPerDevice;
@class GTLRAndroidProvisioningPartner_PartnerClaim;
@class GTLRAndroidProvisioningPartner_PartnerUnclaim;
@class GTLRAndroidProvisioningPartner_PerDeviceStatusInBatch;
@class GTLRAndroidProvisioningPartner_Status;
@class GTLRAndroidProvisioningPartner_Status_Details_Item;
@class GTLRAndroidProvisioningPartner_UpdateMetadataArguments;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_ClaimDeviceRequest.sectionType

/**
 *  Unspecified
 *
 *  Value: "SECTION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_ClaimDeviceRequest_SectionType_SectionTypeUnspecified;
/**
 *  Zero touch
 *
 *  Value: "SECTION_TYPE_ZERO_TOUCH"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_ClaimDeviceRequest_SectionType_SectionTypeZeroTouch;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_DeviceClaim.sectionType

/**
 *  Unspecified
 *
 *  Value: "SECTION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_DeviceClaim_SectionType_SectionTypeUnspecified;
/**
 *  Zero touch
 *
 *  Value: "SECTION_TYPE_ZERO_TOUCH"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_DeviceClaim_SectionType_SectionTypeZeroTouch;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata.processingStatus

/**
 *  In progress
 *
 *  Value: "BATCH_PROCESS_IN_PROGRESS"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessInProgress;
/**
 *  Pending
 *
 *  Value: "BATCH_PROCESS_PENDING"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessPending;
/**
 *  Processed.
 *  This doesn't mean all items were processed sucessfully, you should
 *  check the `response` field for the result of every item.
 *
 *  Value: "BATCH_PROCESS_PROCESSED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessProcessed;
/**
 *  Invalid code. Shouldn't be used.
 *
 *  Value: "BATCH_PROCESS_STATUS_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessStatusUnspecified;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest.sectionType

/**
 *  Unspecified
 *
 *  Value: "SECTION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest_SectionType_SectionTypeUnspecified;
/**
 *  Zero touch
 *
 *  Value: "SECTION_TYPE_ZERO_TOUCH"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest_SectionType_SectionTypeZeroTouch;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_PartnerClaim.sectionType

/**
 *  Unspecified
 *
 *  Value: "SECTION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PartnerClaim_SectionType_SectionTypeUnspecified;
/**
 *  Zero touch
 *
 *  Value: "SECTION_TYPE_ZERO_TOUCH"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PartnerClaim_SectionType_SectionTypeZeroTouch;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_PartnerUnclaim.sectionType

/**
 *  Unspecified
 *
 *  Value: "SECTION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PartnerUnclaim_SectionType_SectionTypeUnspecified;
/**
 *  Zero touch
 *
 *  Value: "SECTION_TYPE_ZERO_TOUCH"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PartnerUnclaim_SectionType_SectionTypeZeroTouch;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_PerDeviceStatusInBatch.status

/**
 *  Invalid device identifier.
 *
 *  Value: "SINGLE_DEVICE_STATUS_INVALID_DEVICE_IDENTIFIER"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusInvalidDeviceIdentifier;
/**
 *  Invalid section type.
 *
 *  Value: "SINGLE_DEVICE_STATUS_INVALID_SECTION_TYPE"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusInvalidSectionType;
/**
 *  Other error.
 *  Other error is we know/expect this error, but not having proper error
 *  code yet.
 *
 *  Value: "SINGLE_DEVICE_STATUS_OTHER_ERROR"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusOtherError;
/**
 *  Permission denied
 *
 *  Value: "SINGLE_DEVICE_STATUS_PERMISSION_DENIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusPermissionDenied;
/**
 *  This section is claimed by other company.
 *
 *  Value: "SINGLE_DEVICE_STATUS_SECTION_NOT_YOURS"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusSectionNotYours;
/**
 *  Success.
 *
 *  Value: "SINGLE_DEVICE_STATUS_SUCCESS"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusSuccess;
/**
 *  Unknown error.
 *  Unknown error is we don't expect it here.
 *
 *  Value: "SINGLE_DEVICE_STATUS_UNKNOWN_ERROR"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusUnknownError;
/**
 *  Invalid code. Shouldn' be used.
 *
 *  Value: "SINGLE_DEVICE_STATUS_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusUnspecified;

// ----------------------------------------------------------------------------
// GTLRAndroidProvisioningPartner_UnclaimDeviceRequest.sectionType

/**
 *  Unspecified
 *
 *  Value: "SECTION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_UnclaimDeviceRequest_SectionType_SectionTypeUnspecified;
/**
 *  Zero touch
 *
 *  Value: "SECTION_TYPE_ZERO_TOUCH"
 */
GTLR_EXTERN NSString * const kGTLRAndroidProvisioningPartner_UnclaimDeviceRequest_SectionType_SectionTypeZeroTouch;

/**
 *  Request message to claim a device on behalf of a customer.
 */
@interface GTLRAndroidProvisioningPartner_ClaimDeviceRequest : GTLRObject

/**
 *  The customer to claim for.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *customerId;

/** The device identifier of the device to claim. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/**
 *  Section to claim
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_ClaimDeviceRequest_SectionType_SectionTypeUnspecified
 *        Unspecified (Value: "SECTION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_ClaimDeviceRequest_SectionType_SectionTypeZeroTouch
 *        Zero touch (Value: "SECTION_TYPE_ZERO_TOUCH")
 */
@property(nonatomic, copy, nullable) NSString *sectionType;

@end


/**
 *  Response message containing device id of the claim.
 */
@interface GTLRAndroidProvisioningPartner_ClaimDeviceResponse : GTLRObject

/**
 *  the device id of the claimed device.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deviceId;

/**
 *  the resource name of the device in
 *  'partners/[PARTNER_ID]/devices/[DEVICE_ID]'.
 */
@property(nonatomic, copy, nullable) NSString *deviceName;

@end


/**
 *  Request to claim devices asynchronously in batch.
 */
@interface GTLRAndroidProvisioningPartner_ClaimDevicesRequest : GTLRObject

/** list of claims. */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_PartnerClaim *> *claims;

@end


/**
 *  Company
 */
@interface GTLRAndroidProvisioningPartner_Company : GTLRObject

/**
 *  company id
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *companyId;

/** company name */
@property(nonatomic, copy, nullable) NSString *companyName;

@end


/**
 *  Device
 */
@interface GTLRAndroidProvisioningPartner_Device : GTLRObject

/** claims */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_DeviceClaim *> *claims;

/**
 *  Device id
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deviceId;

/** Device identifier */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/** Device metadata */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceMetadata *deviceMetadata;

/** Resource name in 'partners/[PARTNER_ID]/devices/[DEVICE_ID]'. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  containing the necessary info about a claim for a partner.
 */
@interface GTLRAndroidProvisioningPartner_DeviceClaim : GTLRObject

/**
 *  owner id
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ownerCompanyId;

/**
 *  section type.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_DeviceClaim_SectionType_SectionTypeUnspecified
 *        Unspecified (Value: "SECTION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_DeviceClaim_SectionType_SectionTypeZeroTouch
 *        Zero touch (Value: "SECTION_TYPE_ZERO_TOUCH")
 */
@property(nonatomic, copy, nullable) NSString *sectionType;

@end


/**
 *  DeviceIdentifiers identifies an unique device.
 */
@interface GTLRAndroidProvisioningPartner_DeviceIdentifier : GTLRObject

/** IMEI (either IMEI or MEID is required). */
@property(nonatomic, copy, nullable) NSString *imei;

/**
 *  Manufacturer name to match `android.os.Build.MANUFACTURER` (required).
 *  Allowed values listed in
 *  [manufacturer names](/zero-touch/resources/manufacturer-names).
 */
@property(nonatomic, copy, nullable) NSString *manufacturer;

/** MEID */
@property(nonatomic, copy, nullable) NSString *meid;

/** Serial number (optional) */
@property(nonatomic, copy, nullable) NSString *serialNumber;

@end


/**
 *  metadata
 */
@interface GTLRAndroidProvisioningPartner_DeviceMetadata : GTLRObject

/** Metadata entries */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceMetadata_Entries *entries;

@end


/**
 *  Metadata entries
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRAndroidProvisioningPartner_DeviceMetadata_Entries : GTLRObject
@end


/**
 *  Long running operation metadata.
 */
@interface GTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata : GTLRObject

/**
 *  Number of devices parsed in your requests.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *devicesCount;

/**
 *  The overall processing status.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessInProgress
 *        In progress (Value: "BATCH_PROCESS_IN_PROGRESS")
 *    @arg @c kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessPending
 *        Pending (Value: "BATCH_PROCESS_PENDING")
 *    @arg @c kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessProcessed
 *        Processed.
 *        This doesn't mean all items were processed sucessfully, you should
 *        check the `response` field for the result of every item. (Value:
 *        "BATCH_PROCESS_PROCESSED")
 *    @arg @c kGTLRAndroidProvisioningPartner_DevicesLongRunningOperationMetadata_ProcessingStatus_BatchProcessStatusUnspecified
 *        Invalid code. Shouldn't be used. (Value:
 *        "BATCH_PROCESS_STATUS_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *processingStatus;

/**
 *  Processing progress from 0 to 100.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *progress;

@end


/**
 *  Long running operation response.
 */
@interface GTLRAndroidProvisioningPartner_DevicesLongRunningOperationResponse : GTLRObject

/**
 *  processing status for each device.
 *  One PerDeviceStatus per device. The order is the same as in your requests.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_OperationPerDevice *> *perDeviceStatus;

/**
 *  Number of succeesfully processed ones.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *successCount;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRAndroidProvisioningPartner_Empty : GTLRObject
@end


/**
 *  Request to find devices.
 */
@interface GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest : GTLRObject

/** The device identifier to search */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/**
 *  Number of devices to show.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *limit;

/** Page token */
@property(nonatomic, copy, nullable) NSString *pageToken;

@end


/**
 *  Response containing found devices.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "devices" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierResponse : GTLRCollectionObject

/**
 *  Found devices.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_Device *> *devices;

/** Page token of next page */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Request to find devices by customers.
 */
@interface GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest : GTLRObject

/**
 *  List of customer ids to search for.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *customerId;

/**
 *  The number of devices to show in the result.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *limit;

/** Page token */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The section type.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest_SectionType_SectionTypeUnspecified
 *        Unspecified (Value: "SECTION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest_SectionType_SectionTypeZeroTouch
 *        Zero touch (Value: "SECTION_TYPE_ZERO_TOUCH")
 */
@property(nonatomic, copy, nullable) NSString *sectionType;

@end


/**
 *  Response containing found devices.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "devices" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAndroidProvisioningPartner_FindDevicesByOwnerResponse : GTLRCollectionObject

/**
 *  Devices found.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_Device *> *devices;

/** Page token of next page */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response message of all customers related to this partner.
 */
@interface GTLRAndroidProvisioningPartner_ListCustomersResponse : GTLRObject

/** List of customers related to this partner. */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_Company *> *customers;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRAndroidProvisioningPartner_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If true, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/**
 *  This field will always be not set if the operation is created by
 *  `claimAsync`, `unclaimAsync`, or `updateMetadataAsync`. In this case, error
 *  information for each device is set in
 *  `response.perDeviceStatus.result.status`.
 */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_Status *error;

/**
 *  This field will contain a `DevicesLongRunningOperationMetadata` object if
 *  the operation is created by `claimAsync`, `unclaimAsync`, or
 *  `updateMetadataAsync`.
 */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should have the format of `operations/some/unique/name`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  This field will contain a `DevicesLongRunningOperationResponse` object if
 *  the operation is created by `claimAsync`, `unclaimAsync`, or
 *  `updateMetadataAsync`.
 */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_Operation_Response *response;

@end


/**
 *  This field will contain a `DevicesLongRunningOperationMetadata` object if
 *  the operation is created by `claimAsync`, `unclaimAsync`, or
 *  `updateMetadataAsync`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAndroidProvisioningPartner_Operation_Metadata : GTLRObject
@end


/**
 *  This field will contain a `DevicesLongRunningOperationResponse` object if
 *  the operation is created by `claimAsync`, `unclaimAsync`, or
 *  `updateMetadataAsync`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAndroidProvisioningPartner_Operation_Response : GTLRObject
@end


/**
 *  Operation the server received for every device.
 */
@interface GTLRAndroidProvisioningPartner_OperationPerDevice : GTLRObject

/** Request to claim a device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_PartnerClaim *claim;

/** Processing result for every device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_PerDeviceStatusInBatch *result;

/** Request to unclaim a device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_PartnerUnclaim *unclaim;

/** Request to set metadata for a device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_UpdateMetadataArguments *updateMetadata;

@end


/**
 *  Identifies one claim request.
 */
@interface GTLRAndroidProvisioningPartner_PartnerClaim : GTLRObject

/**
 *  customer id to claim for.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *customerId;

/** Device identifier of the device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/** metadata to set at claim. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceMetadata *deviceMetadata;

/**
 *  section type to claim.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_PartnerClaim_SectionType_SectionTypeUnspecified
 *        Unspecified (Value: "SECTION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_PartnerClaim_SectionType_SectionTypeZeroTouch
 *        Zero touch (Value: "SECTION_TYPE_ZERO_TOUCH")
 */
@property(nonatomic, copy, nullable) NSString *sectionType;

@end


/**
 *  Identifies one unclaim request.
 */
@interface GTLRAndroidProvisioningPartner_PartnerUnclaim : GTLRObject

/**
 *  device id of the device.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deviceId;

/** device identifier of the device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/**
 *  section type to unclaim.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_PartnerUnclaim_SectionType_SectionTypeUnspecified
 *        Unspecified (Value: "SECTION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_PartnerUnclaim_SectionType_SectionTypeZeroTouch
 *        Zero touch (Value: "SECTION_TYPE_ZERO_TOUCH")
 */
@property(nonatomic, copy, nullable) NSString *sectionType;

@end


/**
 *  Stores the processing result for each device.
 */
@interface GTLRAndroidProvisioningPartner_PerDeviceStatusInBatch : GTLRObject

/**
 *  device id of the device if process succeeds.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deviceId;

/** Error identifier. */
@property(nonatomic, copy, nullable) NSString *errorIdentifier;

/** Error message */
@property(nonatomic, copy, nullable) NSString *errorMessage;

/**
 *  Process result.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusInvalidDeviceIdentifier
 *        Invalid device identifier. (Value:
 *        "SINGLE_DEVICE_STATUS_INVALID_DEVICE_IDENTIFIER")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusInvalidSectionType
 *        Invalid section type. (Value:
 *        "SINGLE_DEVICE_STATUS_INVALID_SECTION_TYPE")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusOtherError
 *        Other error.
 *        Other error is we know/expect this error, but not having proper error
 *        code yet. (Value: "SINGLE_DEVICE_STATUS_OTHER_ERROR")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusPermissionDenied
 *        Permission denied (Value: "SINGLE_DEVICE_STATUS_PERMISSION_DENIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusSectionNotYours
 *        This section is claimed by other company. (Value:
 *        "SINGLE_DEVICE_STATUS_SECTION_NOT_YOURS")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusSuccess
 *        Success. (Value: "SINGLE_DEVICE_STATUS_SUCCESS")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusUnknownError
 *        Unknown error.
 *        Unknown error is we don't expect it here. (Value:
 *        "SINGLE_DEVICE_STATUS_UNKNOWN_ERROR")
 *    @arg @c kGTLRAndroidProvisioningPartner_PerDeviceStatusInBatch_Status_SingleDeviceStatusUnspecified
 *        Invalid code. Shouldn' be used. (Value:
 *        "SINGLE_DEVICE_STATUS_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *status;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` that can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRAndroidProvisioningPartner_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRAndroidProvisioningPartner_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAndroidProvisioningPartner_Status_Details_Item : GTLRObject
@end


/**
 *  Request message to unclaim a device.
 */
@interface GTLRAndroidProvisioningPartner_UnclaimDeviceRequest : GTLRObject

/**
 *  The device id returned by ClaimDevice.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deviceId;

/** The device identifier you use when you claimed this device. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/**
 *  The section type to unclaim for.
 *
 *  Likely values:
 *    @arg @c kGTLRAndroidProvisioningPartner_UnclaimDeviceRequest_SectionType_SectionTypeUnspecified
 *        Unspecified (Value: "SECTION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAndroidProvisioningPartner_UnclaimDeviceRequest_SectionType_SectionTypeZeroTouch
 *        Zero touch (Value: "SECTION_TYPE_ZERO_TOUCH")
 */
@property(nonatomic, copy, nullable) NSString *sectionType;

@end


/**
 *  Request to unclaim devices asynchronously in batch.
 */
@interface GTLRAndroidProvisioningPartner_UnclaimDevicesRequest : GTLRObject

/** list of unclaims. */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_PartnerUnclaim *> *unclaims;

@end


/**
 *  Request to update device metadata in batch.
 */
@interface GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest : GTLRObject

/** list of metadata updates. */
@property(nonatomic, strong, nullable) NSArray<GTLRAndroidProvisioningPartner_UpdateMetadataArguments *> *updates;

@end


/**
 *  Request to set metadata for a device.
 */
@interface GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest : GTLRObject

/** The metdata to set. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceMetadata *deviceMetadata;

@end


/**
 *  Identifies metdata updates to one device.
 */
@interface GTLRAndroidProvisioningPartner_UpdateMetadataArguments : GTLRObject

/**
 *  device id of the device.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deviceId;

/** device identifier. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceIdentifier *deviceIdentifier;

/** The metadata to update. */
@property(nonatomic, strong, nullable) GTLRAndroidProvisioningPartner_DeviceMetadata *deviceMetadata;

@end

NS_ASSUME_NONNULL_END