/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class ACAccountStore, NSString, PSCloudStorageOffersManager, PUCloudPhotoWelcomeView, UIBarButtonItem;

@interface PUCloudPhotoWelcomeViewController : UIViewController <PSCloudStorageOffersManagerDelegate, PUCloudPhotoWelcomeViewDelegate> {
    ACAccountStore *_accountStore;
    UIBarButtonItem *_betaGoButtonItem;
    BOOL _enableOnAppear;
    PSCloudStorageOffersManager *_offersManager;
    BOOL _requireStorageUpgrade;
    UIBarButtonItem *_skipBarButtonItem;
    PUCloudPhotoWelcomeView *_welcomeView;
}

@property(retain) ACAccountStore * accountStore;
@property(readonly) UIBarButtonItem * betaGoButtonItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UIBarButtonItem * skipBarButtonItem;
@property(readonly) Class superclass;
@property(retain) PUCloudPhotoWelcomeView * welcomeView;

+ (void)_disablePhotoStream;
+ (BOOL)_isPhotoStreamEnabled;
+ (void)showIfNecessaryWithPresentingViewController:(id)arg1;
+ (void)showWithPresentingViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_betaGoButtonTapped:(id)arg1;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_dismiss;
- (void)_enableButtons;
- (void)_enableCPLDataClass;
- (void)_enableCloudPhotoLibrary;
- (void)_handleEnableError:(id)arg1;
- (void)_handleGoButtonTapped;
- (void)_presentStoragePurchaseController;
- (void)_skipButtonTapped:(id)arg1;
- (id)accountStore;
- (id)betaGoButtonItem;
- (void)cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (int)preferredInterfaceOrientationForPresentation;
- (void)setAccountStore:(id)arg1;
- (void)setWelcomeView:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)skipBarButtonItem;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)welcomeView;

@end