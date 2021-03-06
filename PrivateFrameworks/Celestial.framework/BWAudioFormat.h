/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) NSDictionary *audioCompressionSBPOptions;
@property (readonly) struct opaqueCMFormatDescription { }*audioFormatDescription;

+ (id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (void)initialize;

- (id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;
- (id)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (id)audioCompressionSBPOptions;
- (struct opaqueCMFormatDescription { }*)audioFormatDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long)mediaType;

@end
