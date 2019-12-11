/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSTableCell.h>
#import <Preferences/PreferencesTableCell.h>

@class UIView;

@interface PSTableCell : PreferencesTableCell {
	UIView *_topEtchLine;	// 292 = 0x124
	UIView *_bottomEtchLine;	// 296 = 0x128
	BOOL _etch;	// 300 = 0x12c
}
+ (int)cellTypeFromString:(id)string;	// 0xd565
+ (id)_cellForSpecifier:(id)specifier defaultClass:(Class)aClass type:(int)type;	// 0xd4a9
+ (void)refreshSwitchCellContentsWithSpecifier:(id)specifier andCell:(id)cell;	// 0xd28d
+ (id)switchCellWithSpecifier:(id)specifier;	// 0xd131
+ (id)segmentCellWithSpecifier:(id)specifier;	// 0xcde5
+ (void)refreshSliderCellContentsWithSpecifier:(id)specifier andCell:(id)cell;	// 0xca6d
+ (id)sliderCellWithSpecifier:(id)specifier;	// 0xc935
+ (void)refreshTextFieldCellContentsWithSpecifier:(id)specifier andCell:(id)cell;	// 0xc3e9
+ (id)textFieldCellWithSpecifier:(id)specifier;	// 0xc33d
+ (id)textViewCellWithSpecifier:(id)specifier;	// 0xc151
+ (id)spinnerCellWithSpecifier:(id)specifier;	// 0xc101
+ (id)groupHeaderCellWithSpecifier:(id)specifier;	// 0xbf31
+ (void)refreshCellContentsWithSpecifier:(id)specifier andCell:(id)cell;	// 0xbc09
+ (id)cellWithSpecifier:(id)specifier;	// 0xb935
+ (id)topEtchLineView;	// 0xb859
+ (id)bottomEtchLineView;	// 0xb77d
- (void)layoutSubviews;	// 0xdc91
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;	// 0xdc35
- (id)titleTextLabel;	// 0xdbed
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0xdaa5
- (void)_updateEtchState:(BOOL)state;	// 0xd9c5
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0xd97d
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0xd935
- (void)setIcon:(id)icon;	// 0xb751
- (void)dealloc;	// 0xd8d5
- (BOOL)canReload;	// 0xd899
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0xd7bd
- (id)_contentString;	// 0xd795
@end

@interface PSTableCell (SyntheticEvents)
- (id)_automationID;	// 0xf451
- (id)scriptingInfoWithChildren;	// 0xf4c5
@end