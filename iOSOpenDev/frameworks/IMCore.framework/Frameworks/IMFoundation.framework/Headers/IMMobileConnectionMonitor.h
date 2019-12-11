/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMConnectionMonitor.h>


@interface IMMobileConnectionMonitor : IMConnectionMonitor {
	BOOL _isHostReachable;	// 4 = 0x4
	Class _CPNetworkObserverClass;	// 8 = 0x8
}
@property(retain, nonatomic) Class _CPNetworkObserverClass;	// G=0x19dd9; S=0x19de9; @synthesize
@property(assign, nonatomic) BOOL _isHostReachable;	// G=0x19db9; S=0x19dc9; @synthesize
// declared property setter: - (void)set_CPNetworkObserverClass:(Class)aClass;	// 0x19de9
// declared property getter: - (Class)_CPNetworkObserverClass;	// 0x19dd9
// declared property setter: - (void)set_isHostReachable:(BOOL)reachable;	// 0x19dc9
// declared property getter: - (BOOL)_isHostReachable;	// 0x19db9
- (BOOL)isImmediatelyReachable;	// 0x19d5d
- (void)_setup;	// 0x19ba1
- (void)_handleNetworkObserverDidChange:(id)_handleNetworkObserver;	// 0x19aa9
- (void)dealloc;	// 0x19a01
- (id)init;	// 0x199a9
@end