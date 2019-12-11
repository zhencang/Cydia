/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/UITableViewDelegate.h>
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/UITableViewDataSource.h>

@class UITableView;
@protocol SUMenuViewControllerDelegate;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
	id<SUMenuViewControllerDelegate> _delegate;	// 212 = 0xd4
	int _selectedIndex;	// 216 = 0xd8
	UITableView *_tableView;	// 220 = 0xdc
}
@property(assign, nonatomic) int selectedIndex;	// G=0x6fd41; S=0x6f8b1; @synthesize=_selectedIndex
@property(assign, nonatomic) id<SUMenuViewControllerDelegate> delegate;	// G=0x6fd21; S=0x6fd31; @synthesize=_delegate
// declared property getter: - (int)selectedIndex;	// 0x6fd41
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x6fd31
// declared property getter: - (id)delegate;	// 0x6fd21
- (BOOL)_sendDidCancel;	// 0x6fcb1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x6fb79
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x6fb69
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x6fb19
- (void)viewDidAppear:(BOOL)view;	// 0x6fac9
- (void)reload;	// 0x6fa69
- (CGSize)minimumViewSize;	// 0x6f9e9
- (CGSize)maximumViewSize;	// 0x6f995
- (void)loadView;	// 0x6f8e1
- (id)titleOfMenuItemAtIndex:(int)index;	// 0x6f8dd
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x6f8b1
- (void)performActionForMenuItemAtIndex:(int)index;	// 0x6f825
- (int)numberOfMenuItems;	// 0x6f821
- (BOOL)isMenuItemEnabledAtIndex:(int)index;	// 0x6f81d
- (void)dealloc;	// 0x6f7a5
- (id)init;	// 0x6f765
@end