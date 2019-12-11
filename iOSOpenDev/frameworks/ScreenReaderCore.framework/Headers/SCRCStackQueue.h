/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/XXUnknownSuperclass.h>


@interface SCRCStackQueue : XXUnknownSuperclass {
	SCRCStackNode *_firstNode;	// 4 = 0x4
	SCRCStackNode *_lastNode;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x45ed; converted property
- (void)dealloc;	// 0x3429
- (void)removeAllObjects;	// 0x3469
- (void)pushArray:(id)array;	// 0x4681
- (void)pushObject:(id)object;	// 0x2159
- (id)popObject;	// 0x119b9
- (id)popObjectRetained;	// 0x4611
- (id)topObject;	// 0x45fd
- (void)enqueueObject:(id)object;	// 0x2149
- (id)dequeueObjectRetained;	// 0x24f1
- (id)dequeueObject;	// 0x119e1
// converted property getter: - (unsigned)count;	// 0x45ed
- (id)description;	// 0x11a09
- (id)objectEnumerator;	// 0x4369
- (BOOL)isEmpty;	// 0x2585
@end