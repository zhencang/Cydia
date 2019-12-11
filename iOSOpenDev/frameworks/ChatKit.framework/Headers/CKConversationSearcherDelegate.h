/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */



@protocol CKConversationSearcherDelegate
- (id)searcherContentsController:(id)controller;
- (id)searcher:(id)searcher conversationForGroupID:(id)groupID;
- (void)searcher:(id)searcher userDidSelectConversationGroupID:(id)user messageRowID:(int)anId partRowID:(int)anId4;
@optional
- (void)searcherWillBeginSearch:(id)searcher;
- (void)searcherDidBeginSearch:(id)searcher;
- (void)searcherWillEndSearch:(id)searcher;
- (void)searcherDidEndSearch:(id)searcher;
- (void)searcher:(id)searcher willShowSearchResultsTableView:(id)view;
- (void)searcher:(id)searcher didShowSearchResultsTableView:(id)view;
- (void)searcher:(id)searcher willHideSearchResultsTableView:(id)view;
- (void)searcher:(id)searcher didHideSearchResultsTableView:(id)view;
@end
