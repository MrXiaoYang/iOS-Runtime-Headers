/* Generated by RuntimeBrowser.
 */

@protocol MTLResourceSPI <MTLResource>

@required

- (MTLResourceAllocationInfo *)cachedAllocationInfo;
- (BOOL)isPurgeable;
- (int)responsibleProcess;
- (void)setResponsibleProcess:(int)arg1;
- (MTLResourceAllocationInfo *)sharedAllocationInfo;

@end
