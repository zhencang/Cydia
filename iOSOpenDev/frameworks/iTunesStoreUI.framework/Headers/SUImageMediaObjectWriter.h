/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMediaObjectWriter.h>

@class SUImageMediaObject;

@interface SUImageMediaObjectWriter : SUMediaObjectWriter {
}
@property(readonly, assign, nonatomic) SUImageMediaObject *mediaObject;	// @dynamic
- (void)_writeDidFinish:(id)_write error:(id)error context:(void *)context;	// 0xd1a71
- (void)writeMediaObject;	// 0xd19e9
- (id)initWithMediaObject:(id)mediaObject;	// 0xd19bd
@end