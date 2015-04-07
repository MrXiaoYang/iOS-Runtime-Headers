/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPMediaPredicateValue, NSString;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    int _comparisonType;
    struct { 
        unsigned int comparisonType : 1; 
    } _has;
    NSString *_property;
    MPPMediaPredicateValue *_value;
}

@property int comparisonType;
@property BOOL hasComparisonType;
@property(readonly) BOOL hasProperty;
@property(readonly) BOOL hasValue;
@property(retain) NSString * property;
@property(retain) MPPMediaPredicateValue * value;

- (void).cxx_destruct;
- (int)comparisonType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasComparisonType;
- (BOOL)hasProperty;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)property;
- (BOOL)readFrom:(id)arg1;
- (void)setComparisonType:(int)arg1;
- (void)setHasComparisonType:(BOOL)arg1;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end