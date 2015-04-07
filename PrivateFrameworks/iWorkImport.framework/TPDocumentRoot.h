/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TPDocumentSettings, TPDrawablesZOrder, TPFloatingDrawables, TPInteractiveCanvasController, TPPageLayoutNotifier, TPPaginatedPageController, TPSection, TPTOCController, TPTheme, TSDThumbnailController, TSSStylesheet, TSWPStorage;

@interface TPDocumentRoot : TSADocumentRoot <TSCEResolverContainer, TSDInfoUUIDPathPrefixComponentsProvider, TSDThumbnailProducer, TSTResolverContainerNameProvider, TSWPChangeSessionManager, TSWPChangeVisibility, TSWPDrawableOLC, TSWPStorageParent> {
    TSWPStorage *_bodyStorage;
    float _bottomMargin;
    NSMutableArray *_changeSessionHistory;
    BOOL _changeTrackingEnabled;
    BOOL _changeTrackingPaused;
    NSMutableDictionary *_chartsUIState;
    NSArray *_citationRecords;
    float _currentThumbnailContainerWidth;
    TPDrawablesZOrder *_drawablesZOrder;
    TPFloatingDrawables *_floatingDrawables;
    float _footerMargin;
    float _headerMargin;
    struct __CFLocale { } *_hyphenationLocale;
    BOOL _layoutBodyVertically;
    float _leftMargin;
    BOOL _needsInitialization;
    BOOL _newDocument;
    NSArray *_obsoleteTOCStyles;
    unsigned int _orientation;
    TPPageLayoutNotifier *_pageLayoutNotifier;
    float _pageScale;
    struct CGSize { 
        float width; 
        float height; 
    } _pageSize;
    TPPaginatedPageController *_paginatedPageController;
    NSString *_paperID;
    NSString *_printerID;
    float _rightMargin;
    TPDocumentSettings *_settings;
    BOOL _shouldUniquifyTableNames;
    TSSStylesheet *_stylesheet;
    NSMutableDictionary *_tableInfosWithUniqueNames;
    unsigned int _tableNameCounter;
    TPTheme *_theme;
    TSDThumbnailController *_thumbnailController;
    TPTOCController *_tocController;
    float _topMargin;
    BOOL _usesSingleHeaderFooter;
    BOOL initiallyShowRuler;
    TPInteractiveCanvasController *interactiveCanvasController;
}

@property(retain,readonly) TSWPStorage * bodyStorage;
@property float bottomMargin;
@property(retain) NSArray * changeSessionHistory;
@property(getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property(getter=isChangeTrackingPaused) BOOL changeTrackingPaused;
@property(retain) NSMutableDictionary * chartsUIState;
@property(readonly) int contentWritingDirection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) TPDrawablesZOrder * drawablesZOrder;
@property(retain,readonly) TPSection * firstSection;
@property(retain) TPFloatingDrawables * floatingDrawables;
@property float footerMargin;
@property(readonly) unsigned int hash;
@property float headerMargin;
@property BOOL initiallyShowRuler;
@property TPInteractiveCanvasController * interactiveCanvasController;
@property(readonly) BOOL isNewDocument;
@property(readonly) BOOL isTrackingChanges;
@property BOOL layoutBodyVertically;
@property float leftMargin;
@property unsigned int orientation;
@property float pageScale;
@property struct CGSize { float x1; float x2; } pageSize;
@property(readonly) TPPaginatedPageController * paginatedPageController;
@property(copy) NSString * paperID;
@property(readonly) struct CGSize { float x1; float x2; } paperSize;
@property(copy) NSString * printerID;
@property float rightMargin;
@property(retain,readonly) NSArray * sections;
@property(retain,readonly) TPDocumentSettings * settings;
@property(retain) TSSStylesheet * stylesheet;
@property(readonly) Class superclass;
@property(retain) TPTheme * theme;
@property(readonly) TSDThumbnailController * thumbnailController;
@property(retain) TPTOCController * tocController;
@property float topMargin;
@property(getter=isTrackingChanges,readonly) BOOL trackingChanges;
@property BOOL usesSingleHeaderFooter;

+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (struct CGSize { float x1; float x2; })pageSizeFromPaperSize:(struct CGSize { float x1; float x2; })arg1 pageScale:(float)arg2 orientation:(unsigned int)arg3;
+ (struct CGSize { float x1; float x2; })previewImageSizeForType:(unsigned int)arg1;

- (id).cxx_construct;
- (id)UIStateForChart:(id)arg1;
- (unsigned int)applicationType;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (id)bodyStorage;
- (float)bodyWidth;
- (float)bottomMargin;
- (id)changeSessionAuthorCreatedWithCommand:(id*)arg1;
- (id)changeSessionHistory;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (id)chartsUIState;
- (id)childEnumerator;
- (id)citationRecords;
- (id)commandForConvertingFloatingDrawableToAnchored:(id)arg1;
- (int)contentWritingDirection;
- (id)createViewStateRoot;
- (void)dealloc;
- (void)didAddDrawable:(id)arg1;
- (void)didEnterBackground;
- (void)documentDidLoad;
- (BOOL)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)drawablesZOrder;
- (id)firstSection;
- (id)floatingDrawables;
- (float)footerMargin;
- (float)footnoteGap;
- (int)footnoteKind;
- (BOOL)footnotesShouldAffectBodyLayout;
- (float)headerMargin;
- (struct __CFLocale { }*)hyphenationLocale;
- (id)initForThemeImportWithContext:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initUsingDefaultThemeWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)initiallyShowRuler;
- (id)interactiveCanvasController;
- (void)invalidateThumbnailForPageIndex:(unsigned int)arg1;
- (BOOL)isChangeTrackingEnabled;
- (BOOL)isChangeTrackingPaused;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isNewDocument;
- (BOOL)isPendingTableNameUniquification;
- (BOOL)isSectionModel:(id)arg1;
- (BOOL)isTrackingChanges;
- (BOOL)layoutBodyVertically;
- (float)leftMargin;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (id)modelPathComponentForChild:(id)arg1;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned int)arg1 inTextStorage:(id)arg2;
- (unsigned int)nextRootSearchTargetIndexFromIndex:(unsigned int)arg1 forString:(id)arg2 options:(unsigned int)arg3 inDirection:(unsigned int)arg4;
- (unsigned int)nextUntitledResolverIndex;
- (unsigned int)orientation;
- (void)pCommonInitialization;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pConjureUpBodyRect;
- (void)pCreateBodyStorage;
- (void)pCreateDrawablesZOrderBodyStorage:(id)arg1 addAnchoredDrawables:(BOOL)arg2;
- (void)pCreateFloatingDrawables;
- (void)pCreateStylesheet;
- (void)pFinishInitialization;
- (void)pUpgradeSection:(id)arg1 documentVersion:(unsigned long long)arg2;
- (unsigned int)p_autoNumberForStorage:(id)arg1 footnoteNumbering:(int)arg2 footnoteKind:(int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_bodyHitRangeForString:(id)arg1 withOptions:(unsigned int)arg2 limitRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (unsigned int)p_nextRootSearchTargetInBodyOrFloatersFromIndex:(unsigned int)arg1 forString:(id)arg2 options:(unsigned int)arg3 inDirection:(unsigned int)arg4;
- (BOOL)p_possibleHitInSectionMaster:(id)arg1 pageIndex:(unsigned int)arg2 withOptions:(unsigned int)arg3;
- (id)p_previewImageWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg1 context:(id)arg2;
- (unsigned int)p_scanBackwardsForNextRootSearchTargetInBodyOrFloatersFromIndex:(unsigned int)arg1 forString:(id)arg2 withOptions:(unsigned int)arg3;
- (unsigned int)p_scanForwardsForNextRootSearchTargetInBodyOrFloatersFromIndex:(unsigned int)arg1 forString:(id)arg2 withOptions:(unsigned int)arg3;
- (void)p_uniquifyTableNames;
- (void)p_upgradeBodyTOC;
- (void)p_upgradeTOCStyles;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pageBoundsWithinMargins;
- (void)pageCountDidChangeForPageController:(id)arg1;
- (unsigned int)pageIndexForThumbnailIdentifier:(id)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (BOOL)pageMastersAllowDrawable:(id)arg1;
- (float)pageScale;
- (struct CGSize { float x1; float x2; })pageSize;
- (id)paginatedPageController;
- (id)paperID;
- (struct CGSize { float x1; float x2; })paperSize;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)previewImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)printerID;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)resumeBackgroundActivities;
- (void)resumeThumbnailing;
- (BOOL)reuseThumbnailerUntilIdleForIdentifier:(id)arg1;
- (float)rightMargin;
- (id)rootInfosForIdentifier:(id)arg1;
- (unsigned int)rootSearchTargetCountThroughIndex:(unsigned int)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)sections;
- (void)setBodyStorage:(id)arg1 dolcContext:(id)arg2;
- (void)setBottomMargin:(float)arg1;
- (void)setChangeSessionHistory:(id)arg1;
- (void)setChangeTrackingEnabled:(BOOL)arg1;
- (void)setChangeTrackingPaused:(BOOL)arg1;
- (void)setChartsUIState:(id)arg1;
- (void)setDrawablesZOrder:(id)arg1;
- (void)setFloatingDrawables:(id)arg1;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setInitiallyShowRuler:(BOOL)arg1;
- (void)setInteractiveCanvasController:(id)arg1;
- (void)setLayoutBodyVertically:(BOOL)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setPageScale:(float)arg1;
- (void)setPageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPaperID:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTocController:(id)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUsesSingleHeaderFooter:(BOOL)arg1;
- (void)setValue:(float)arg1 forMargin:(int)arg2;
- (id)settings;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldHyphenate;
- (BOOL)shouldShowChangeKind:(int)arg1 date:(id)arg2;
- (BOOL)shouldShowMarkupForChangeKind:(int)arg1 date:(id)arg2;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1;
- (id)stylesheet;
- (BOOL)supportHeaderFooterParagraphAlignmentInInspectors;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (BOOL)textIsVertical;
- (id)theme;
- (void)thumbnailContainerDidChange:(id)arg1;
- (id)thumbnailController;
- (id)thumbnailIdentifierForPageIndex:(unsigned int)arg1;
- (Class)thumbnailImagerClass;
- (struct CGSize { float x1; float x2; })thumbnailSizeForIdentifier:(id)arg1;
- (id)tocController;
- (float)topMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledClipRectForIdentifier:(id)arg1;
- (void)updateWritingDirection:(unsigned int)arg1;
- (void)upgradeFromOldSectionWithPageSize:(struct CGSize { float x1; float x2; })arg1 leftMargin:(float)arg2 rightMargin:(float)arg3 topMargin:(float)arg4 bottomMargin:(float)arg5 headerMargin:(float)arg6 footerMargin:(float)arg7;
- (BOOL)useLigatures;
- (BOOL)usesSingleHeaderFooter;
- (id)uuidPathPrefixComponentsForInfo:(id)arg1;
- (float)valueForMargin:(int)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)willClose;
- (void)willEnterForeground;
- (void)willHide;
- (void)willRemoveDrawable:(id)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned int)arg1 executeBlock:(id)arg2;
- (unsigned int)writingDirection;

@end