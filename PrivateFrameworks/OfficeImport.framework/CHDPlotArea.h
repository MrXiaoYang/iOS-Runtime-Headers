/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDAxesCollection, CHDChartTypesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {
    boolmCategoryAxesReversed;
    boolmCategoryAxesReversedOverridden;
    boolmContainsVolumeStockType;
    CHDAxesCollection *mAxes;
    CHDChartTypesCollection *mChartTypes;
    OADGraphicProperties *mGraphicProperties;
}

- (id)axes;
- (id)chartTypes;
- (bool)containsVolumeStockType;
- (void)dealloc;
- (id)graphicProperties;
- (bool)hasSecondaryAxis;
- (bool)hasSecondaryYAxisDeleted;
- (id)initWithChart:(id)arg1;
- (bool)isCategoryAxesReversed;
- (void)markSecondaryAxes;
- (void)setContainsVolumeStockType:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;

@end