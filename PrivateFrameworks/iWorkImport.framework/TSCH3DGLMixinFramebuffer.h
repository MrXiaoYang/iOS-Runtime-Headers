/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGLFramebuffer;

@interface TSCH3DGLMixinFramebuffer : TSCH3DGLFramebuffer {
    TSCH3DGLFramebuffer *mOriginal;
}

@property(retain) TSCH3DGLFramebuffer * original;

- (id)GLHandleForSession:(id)arg1;
- (BOOL)activateInsideSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (BOOL)bindInSession:(id)arg1;
- (void)clean;
- (void)clear:(unsigned int)arg1;
- (id)context;
- (void)dealloc;
- (id)description;
- (void)destroyResourcesInSession:(id)arg1;
- (void)disableSamplingInSession:(id)arg1;
- (void)discardBuffers;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (unsigned int)estimatedMemroyInBytes;
- (const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)framebufferAttributes;
- (id)initWithContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg3;
- (BOOL)isProtectedInSession:(id)arg1;
- (BOOL)isTexturable;
- (id)original;
- (id)output;
- (void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2;
- (void)setClearColor:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;
- (void)setClearDepth:(float)arg1;
- (void)setColorMask:(const struct tvec4<bool> { union { bool x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; union { bool x_2_1_1; bool x_2_1_2; bool x_2_1_3; } x2; union { bool x_3_1_1; bool x_3_1_2; bool x_3_1_3; } x3; union { bool x_4_1_1; bool x_4_1_2; bool x_4_1_3; } x4; }*)arg1;
- (void)setDepthFunction:(int)arg1;
- (void)setDepthMask:(unsigned char)arg1;
- (void)setOriginal:(id)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (unsigned int)type;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2;
- (BOOL)validForSession:(id)arg1;
- (void)wipe:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;

@end