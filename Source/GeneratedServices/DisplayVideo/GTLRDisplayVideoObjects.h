// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Display & Video 360 API (displayvideo/v1)
// Description:
//   Display & Video 360 API allows users to manage and create campaigns and
//   reports.
// Documentation:
//   https://developers.google.com/display-video/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDisplayVideo_IdFilter;
@class GTLRDisplayVideo_InventorySourceFilter;
@class GTLRDisplayVideo_Operation_Metadata;
@class GTLRDisplayVideo_Operation_Response;
@class GTLRDisplayVideo_ParentEntityFilter;
@class GTLRDisplayVideo_Status;
@class GTLRDisplayVideo_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRDisplayVideo_CreateSdfDownloadTaskRequest.version

/**
 *  SDF version 3.1
 *
 *  Value: "SDF_VERSION_3_1"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion31;
/**
 *  SDF version 4
 *
 *  Value: "SDF_VERSION_4"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion4;
/**
 *  SDF version 4.1
 *
 *  Value: "SDF_VERSION_4_1"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion41;
/**
 *  SDF version 4.2
 *
 *  Value: "SDF_VERSION_4_2"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion42;
/**
 *  SDF version 5.
 *
 *  Value: "SDF_VERSION_5"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion5;
/**
 *  SDF version 5.1
 *
 *  Value: "SDF_VERSION_5_1"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion51;
/**
 *  SDF version value is not specified or is unknown in this version.
 *
 *  Value: "SDF_VERSION_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersionUnspecified;

// ----------------------------------------------------------------------------
// GTLRDisplayVideo_ParentEntityFilter.fileType

/** Value: "FILE_TYPE_AD" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeAd;
/** Value: "FILE_TYPE_AD_GROUP" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeAdGroup;
/** Value: "FILE_TYPE_CAMPAIGN" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeCampaign;
/** Value: "FILE_TYPE_INSERTION_ORDER" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeInsertionOrder;
/** Value: "FILE_TYPE_LINE_ITEM" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeLineItem;
/** Value: "FILE_TYPE_MEDIA_PRODUCT" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeMediaProduct;
/** Value: "FILE_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FileType_FileTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRDisplayVideo_ParentEntityFilter.filterType

/**
 *  Advertiser ID. If selected, all filter IDs must be Advertiser IDs that
 *  belong to the Partner specified
 *  in CreateSdfDownloadTaskRequest.
 *
 *  Value: "FILTER_TYPE_ADVERTISER_ID"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeAdvertiserId;
/**
 *  Campaign ID. If selected, all filter IDs must be Campaign IDs that belong
 *  to the Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Value: "FILTER_TYPE_CAMPAIGN_ID"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeCampaignId;
/**
 *  Insertion Order ID. If selected, all filter IDs must be Insertion Order IDs
 *  that belong to the Advertiser
 *  or Partner specified in
 *  CreateSdfDownloadTaskRequest. Can only be used for downloading
 *  `FILE_TYPE_INSERTION_ORDER`, `FILE_TYPE_LINE_ITEM`, `FILE_TYPE_AD_GROUP`,
 *  and `FILE_TYPE_AD`.
 *
 *  Value: "FILTER_TYPE_INSERTION_ORDER_ID"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeInsertionOrderId;
/**
 *  Line Item ID. If selected, all filter IDs must be Line Item IDs that belong
 *  to the Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest. Can only be used for downloading
 *  `FILE_TYPE_LINE_ITEM`, `FILE_TYPE_AD_GROUP`, and `FILE_TYPE_AD`.
 *
 *  Value: "FILTER_TYPE_LINE_ITEM_ID"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeLineItemId;
/**
 *  Media Product ID. If selected, all filter IDs must be Media Product IDs
 *  that belong to the Advertiser
 *  or Partner specified in
 *  CreateSdfDownloadTaskRequest. Can only be used for downloading
 *  `FILE_TYPE_MEDIA_PRODUCT`.
 *
 *  Value: "FILTER_TYPE_MEDIA_PRODUCT_ID"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeMediaProductId;
/**
 *  If selected, no filter will be applied to the download. Can only be used if
 *  an Advertiser is specified
 *  in CreateSdfDownloadTaskRequest.
 *
 *  Value: "FILTER_TYPE_NONE"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeNone;
/**
 *  Default value when type is unspecified or is unknown in this version.
 *
 *  Value: "FILTER_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRDisplayVideo_SdfDownloadTaskMetadata.version

/**
 *  SDF version 3.1
 *
 *  Value: "SDF_VERSION_3_1"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion31;
/**
 *  SDF version 4
 *
 *  Value: "SDF_VERSION_4"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion4;
/**
 *  SDF version 4.1
 *
 *  Value: "SDF_VERSION_4_1"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion41;
/**
 *  SDF version 4.2
 *
 *  Value: "SDF_VERSION_4_2"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion42;
/**
 *  SDF version 5.
 *
 *  Value: "SDF_VERSION_5"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion5;
/**
 *  SDF version 5.1
 *
 *  Value: "SDF_VERSION_5_1"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion51;
/**
 *  SDF version value is not specified or is unknown in this version.
 *
 *  Value: "SDF_VERSION_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersionUnspecified;

/**
 *  Request message for [SdfDownloadTaskService.CreateSdfDownloadTask].
 */
@interface GTLRDisplayVideo_CreateSdfDownloadTaskRequest : GTLRObject

/**
 *  The ID of the advertiser to download SDF for.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *advertiserId;

/** Filters on entities by their entity IDs. */
@property(nonatomic, strong, nullable) GTLRDisplayVideo_IdFilter *idFilter;

/** Filters on Inventory Sources by their IDs. */
@property(nonatomic, strong, nullable) GTLRDisplayVideo_InventorySourceFilter *inventorySourceFilter;

/**
 *  Filters on selected file types. The entities in each file are filtered
 *  by a chosen set of filter entities. The filter entities must be the same
 *  type as, or a parent type of, the selected file types.
 */
@property(nonatomic, strong, nullable) GTLRDisplayVideo_ParentEntityFilter *parentEntityFilter;

/**
 *  The ID of the partner to download SDF for.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *partnerId;

/**
 *  Required. The SDF version of the downloaded file. If set to
 *  `SDF_VERSION_UNSPECIFIED`, this will default to the version specified by
 *  the advertiser or partner identified by `root_id`. An advertiser inherits
 *  its SDF version from its partner unless configured otherwise.
 *
 *  Likely values:
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion31
 *        SDF version 3.1 (Value: "SDF_VERSION_3_1")
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion4
 *        SDF version 4 (Value: "SDF_VERSION_4")
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion41
 *        SDF version 4.1 (Value: "SDF_VERSION_4_1")
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion42
 *        SDF version 4.2 (Value: "SDF_VERSION_4_2")
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion5
 *        SDF version 5. (Value: "SDF_VERSION_5")
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersion51
 *        SDF version 5.1 (Value: "SDF_VERSION_5_1")
 *    @arg @c kGTLRDisplayVideo_CreateSdfDownloadTaskRequest_Version_SdfVersionUnspecified
 *        SDF version value is not specified or is unknown in this version.
 *        (Value: "SDF_VERSION_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  Media resource.
 */
@interface GTLRDisplayVideo_GoogleBytestreamMedia : GTLRObject

/** Name of the media resource. */
@property(nonatomic, copy, nullable) NSString *resourceName;

@end


/**
 *  A filtering option that filters entities by their entity IDs.
 */
@interface GTLRDisplayVideo_IdFilter : GTLRObject

/**
 *  TrueView Ads to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *adGroupAdIds;

/**
 *  TrueView Ad Groups to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *adGroupIds;

/**
 *  Campaigns to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *campaignIds;

/**
 *  Insertion Orders to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *insertionOrderIds;

/**
 *  Line Items to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *lineItemIds;

/**
 *  Media Products to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *mediaProductIds;

@end


/**
 *  A filtering option for filtering on Inventory Source entities.
 */
@interface GTLRDisplayVideo_InventorySourceFilter : GTLRObject

/**
 *  Inventory Sources to download by ID. All IDs must belong to the same
 *  Advertiser or
 *  Partner specified in
 *  CreateSdfDownloadTaskRequest. Leave empty to download all Inventory
 *  Sources for the selected Advertiser or Partner.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *inventorySourceIds;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRDisplayVideo_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRDisplayVideo_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRDisplayVideo_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRDisplayVideo_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRDisplayVideo_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRDisplayVideo_Operation_Response : GTLRObject
@end


/**
 *  A filtering option that filters on selected file types belonging to a chosen
 *  set of filter entities.
 */
@interface GTLRDisplayVideo_ParentEntityFilter : GTLRObject

/** Required. File types that will be returned. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *fileType;

/**
 *  The IDs of the specified filter type. This is used to filter entities to
 *  fetch. If filter type is not `FILTER_TYPE_NONE`, at least one ID must be
 *  specified.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *filterIds;

/**
 *  Required. Filter type used to filter fetched entities.
 *
 *  Likely values:
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeAdvertiserId
 *        Advertiser ID. If selected, all filter IDs must be Advertiser IDs that
 *        belong to the Partner specified
 *        in CreateSdfDownloadTaskRequest. (Value: "FILTER_TYPE_ADVERTISER_ID")
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeCampaignId
 *        Campaign ID. If selected, all filter IDs must be Campaign IDs that
 *        belong
 *        to the Advertiser or
 *        Partner specified in
 *        CreateSdfDownloadTaskRequest. (Value: "FILTER_TYPE_CAMPAIGN_ID")
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeInsertionOrderId
 *        Insertion Order ID. If selected, all filter IDs must be Insertion
 *        Order IDs
 *        that belong to the Advertiser
 *        or Partner specified in
 *        CreateSdfDownloadTaskRequest. Can only be used for downloading
 *        `FILE_TYPE_INSERTION_ORDER`, `FILE_TYPE_LINE_ITEM`,
 *        `FILE_TYPE_AD_GROUP`,
 *        and `FILE_TYPE_AD`. (Value: "FILTER_TYPE_INSERTION_ORDER_ID")
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeLineItemId
 *        Line Item ID. If selected, all filter IDs must be Line Item IDs that
 *        belong
 *        to the Advertiser or
 *        Partner specified in
 *        CreateSdfDownloadTaskRequest. Can only be used for downloading
 *        `FILE_TYPE_LINE_ITEM`, `FILE_TYPE_AD_GROUP`, and `FILE_TYPE_AD`.
 *        (Value: "FILTER_TYPE_LINE_ITEM_ID")
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeMediaProductId
 *        Media Product ID. If selected, all filter IDs must be Media Product
 *        IDs
 *        that belong to the Advertiser
 *        or Partner specified in
 *        CreateSdfDownloadTaskRequest. Can only be used for downloading
 *        `FILE_TYPE_MEDIA_PRODUCT`. (Value: "FILTER_TYPE_MEDIA_PRODUCT_ID")
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeNone If
 *        selected, no filter will be applied to the download. Can only be used
 *        if
 *        an Advertiser is specified
 *        in CreateSdfDownloadTaskRequest. (Value: "FILTER_TYPE_NONE")
 *    @arg @c kGTLRDisplayVideo_ParentEntityFilter_FilterType_FilterTypeUnspecified
 *        Default value when type is unspecified or is unknown in this version.
 *        (Value: "FILTER_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *filterType;

@end


/**
 *  Type for the response returned
 *  by [SdfDownloadTaskService.CreateSdfDownloadTask].
 */
@interface GTLRDisplayVideo_SdfDownloadTask : GTLRObject

/**
 *  A resource name to be used in
 *  media.download to Download the prepared
 *  files. Resource names have the format
 *  `download/sdfdownloadtasks/media/{media_id}`. `media_id` will be made
 *  available by the long running operation service once the task status is
 *  done.
 */
@property(nonatomic, copy, nullable) NSString *resourceName;

@end


/**
 *  Type for the metadata returned
 *  by [SdfDownloadTaskService.CreateSdfDownloadTask].
 */
@interface GTLRDisplayVideo_SdfDownloadTaskMetadata : GTLRObject

/** The time when the operation was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** The time when execution was completed. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  The SDF version used to execute this download task.
 *
 *  Likely values:
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion31 SDF
 *        version 3.1 (Value: "SDF_VERSION_3_1")
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion4 SDF
 *        version 4 (Value: "SDF_VERSION_4")
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion41 SDF
 *        version 4.1 (Value: "SDF_VERSION_4_1")
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion42 SDF
 *        version 4.2 (Value: "SDF_VERSION_4_2")
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion5 SDF
 *        version 5. (Value: "SDF_VERSION_5")
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersion51 SDF
 *        version 5.1 (Value: "SDF_VERSION_5_1")
 *    @arg @c kGTLRDisplayVideo_SdfDownloadTaskMetadata_Version_SdfVersionUnspecified
 *        SDF version value is not specified or is unknown in this version.
 *        (Value: "SDF_VERSION_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRDisplayVideo_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRDisplayVideo_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRDisplayVideo_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRDisplayVideo_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop