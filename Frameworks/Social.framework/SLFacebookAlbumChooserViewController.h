/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookAlbumChooserViewController : UITableViewController <SLFacebookAlbumManagerDelegate> {
    SLFacebookAlbumManager *_albumManager;
    NSArray *_albums;
    NSCache *_coverImageCache;
    <SLFacebookAlbumChooserViewControllerDelegate> *_delegate;
    UIButton *_flipBackButton;
}

@property (retain) SLFacebookAlbumManager *albumManager;
@property (retain) NSArray *albums;
@property <SLFacebookAlbumChooserViewControllerDelegate> *delegate;
@property (retain) UIButton *flipBackButton;

+ (id)_blankSurrogateAlbumImage;
+ (id)_squareImageFromAlbumImage:(id)arg1;

- (void).cxx_destruct;
- (id)albumManager;
- (void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2;
- (void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3;
- (void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3;
- (void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2;
- (id)albums;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)flipBackButton;
- (void)flipBackTapped:(id)arg1;
- (id)initWithAlbumManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setAlbumManager:(id)arg1;
- (void)setAlbums:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlipBackButton:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillLayoutSubviews;

@end
