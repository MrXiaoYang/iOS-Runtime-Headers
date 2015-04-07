/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSObject>, NSObject<OS_dispatch_queue>, TSDTileStorage, TSKAccessController;

@interface TSDTileProvider : NSObject {
    TSKAccessController *mAccessController;
    NSObject<OS_dispatch_queue> *mQueue;
    <NSObject> *mTarget;
    TSDTileStorage *mTileStorage;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } topLeft; 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } bottomRight; 
    } mVisibleTileRect;
}

@property struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } visibleTileRect;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)canTargetDrawInParallel;
- (id)contentsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentsScale:(float)arg2 forTile:(id)arg3 atLocation:(struct { unsigned int x1; unsigned int x2; })arg4 takingReadLock:(BOOL)arg5;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)flush;
- (id)initWithTarget:(id)arg1 queue:(id)arg2 storage:(id)arg3 accessController:(id)arg4;
- (BOOL)isTargetOpaque;
- (id)p_bucketKey;
- (void)provideContentsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentsScale:(float)arg2 forTile:(id)arg3 atLocation:(struct { unsigned int x1; unsigned int x2; })arg4 inGroup:(id)arg5 limitedBySemaphore:(id)arg6 takingReadLock:(BOOL)arg7 startBlock:(id)arg8 completionBlock:(id)arg9;
- (void)removeStoredImages;
- (void)setVisibleTileRect:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })visibleTileRect;

@end