// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Fonts Developer API (webfonts/v1)
// Description:
//   Accesses the metadata for all families served by Google Fonts, providing a
//   list of families currently available (including available styles and a list
//   of supported script subsets).
// Documentation:
//   https://developers.google.com/fonts/docs/developer_api

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
// sort

/**
 *  Sort alphabetically
 *
 *  Value: "alpha"
 */
GTLR_EXTERN NSString * const kGTLRWebfontsSortAlpha;
/**
 *  Sort by date added
 *
 *  Value: "date"
 */
GTLR_EXTERN NSString * const kGTLRWebfontsSortDate;
/**
 *  Sort by popularity
 *
 *  Value: "popularity"
 */
GTLR_EXTERN NSString * const kGTLRWebfontsSortPopularity;
/**
 *  Sort by number of styles
 *
 *  Value: "style"
 */
GTLR_EXTERN NSString * const kGTLRWebfontsSortStyle;
/**
 *  Sort by trending
 *
 *  Value: "trending"
 */
GTLR_EXTERN NSString * const kGTLRWebfontsSortTrending;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Webfonts query classes.
 */
@interface GTLRWebfontsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Retrieves the list of fonts currently served by the Google Fonts Developer
 *  API
 *
 *  Method: webfonts.webfonts.list
 */
@interface GTLRWebfontsQuery_WebfontsList : GTLRWebfontsQuery
// Previous library name was
//   +[GTLQueryWebfonts queryForWebfontsList]

/**
 *  Enables sorting of the list
 *
 *  Likely values:
 *    @arg @c kGTLRWebfontsSortAlpha Sort alphabetically (Value: "alpha")
 *    @arg @c kGTLRWebfontsSortDate Sort by date added (Value: "date")
 *    @arg @c kGTLRWebfontsSortPopularity Sort by popularity (Value:
 *        "popularity")
 *    @arg @c kGTLRWebfontsSortStyle Sort by number of styles (Value: "style")
 *    @arg @c kGTLRWebfontsSortTrending Sort by trending (Value: "trending")
 */
@property(copy, nullable) NSString *sort;

/**
 *  Fetches a @c GTLRWebfonts_WebfontList.
 *
 *  Retrieves the list of fonts currently served by the Google Fonts Developer
 *  API
 *
 *  @returns GTLRWebfontsQuery_WebfontsList
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END