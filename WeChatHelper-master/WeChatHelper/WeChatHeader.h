#pragma mark - Util
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#pragma mark - Util
@interface MMServiceCenter : NSObject
+ (instancetype)defaultCenter;
- (id)getService:(Class)service;
@end

@interface MMNewSessionMgr : NSObject
- (long long)GenSendMsgTime;
@end

@interface WCBizUtil : NSObject
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
@end

@interface MMLanguageMgr: NSObject
- (id)getStringForCurLanguage:(id)arg1;
@end

#pragma mark - Message
@interface WCPayInfoItem: NSObject
@property(retain, nonatomic) NSString *m_c2cNativeUrl;
@end

@interface CMessageMgr : NSObject
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddEmoticonMsg:(NSString *)arg1 MsgWrap:(id)arg2;
@end

@interface CMessageWrap : NSObject

@property(retain, nonatomic) NSString *m_nsEmoticonMD5;
@property(nonatomic) unsigned int m_uiEmoticonType;
@property(nonatomic) unsigned int m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType;
@property (assign, nonatomic) NSUInteger m_uiImgStatus;
@property (retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property (assign, nonatomic) NSUInteger m_uiMesLocalID;
@property (retain, nonatomic) NSString* m_nsFromUsr;            ///< 发信人，可能是群或个人
@property (retain, nonatomic) NSString* m_nsToUsr;              ///< 收信人
@property (assign, nonatomic) NSUInteger m_uiStatus;
@property (retain, nonatomic) NSString* m_nsContent;            ///< 消息内容
@property (retain, nonatomic) NSString* m_nsRealChatUsr;        ///< 群消息的发信人，具体是群里的哪个人
@property (assign, nonatomic) NSUInteger m_uiMessageType;
@property (assign, nonatomic) long long m_n64MesSvrID;
@property (assign, nonatomic) NSUInteger m_uiCreateTime;
@property (retain, nonatomic) NSString *m_nsDesc;
@property (retain, nonatomic) NSString *m_nsAppExtInfo;
@property (assign, nonatomic) NSUInteger m_uiAppDataSize;
@property (assign, nonatomic) NSUInteger m_uiAppMsgInnerType;
@property (retain, nonatomic) NSString *m_nsShareOpenUrl;
@property (retain, nonatomic) NSString *m_nsShareOriginUrl;
@property (retain, nonatomic) NSString *m_nsJsAppId;
@property (retain, nonatomic) NSString *m_nsPrePublishId;
@property (retain, nonatomic) NSString *m_nsAppID;
@property (retain, nonatomic) NSString *m_nsAppName;
@property (retain, nonatomic) NSString *m_nsThumbUrl;
@property (retain, nonatomic) NSString *m_nsAppMediaUrl;
@property (retain, nonatomic) NSData *m_dtThumbnail;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsMsgSource;

- (id)initWithMsgType:(long long)arg1;
+ (_Bool)isSenderFromMsgWrap:(id)arg1;

@end

#pragma mark - RedEnvelop

@interface SKBuiltinBuffer_t : NSObject
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@end

@interface WCRedEnvelopesControlData : NSObject
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap;
@end

@interface WCRedEnvelopesLogicMgr: NSObject
- (void)OpenRedEnvelopesRequest:(id)params;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
/** Added Methods */
- (unsigned int)calculateDelaySeconds;

@end

@interface HongBaoRes : NSObject
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;
@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@end

@interface HongBaoReq : NSObject
@property(retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;
@end

#pragma mark - Contact

@interface CContact: NSObject <NSCoding>
@property(retain, nonatomic) NSString *m_nsUsrName;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsNickName;
@property (nonatomic, copy) NSString *m_nsOwner;                        // 拥有者
@property (nonatomic, copy) NSString *m_nsMemberName;
- (id)getContactDisplayName;
@end

@interface CContactMgr : NSObject
- (CContact *)getSelfContact;
- (id)getContactByName:(id)arg1;
- (id)getContactForSearchByName:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1;
- (_Bool)isInContactList:(id)arg1;
- (_Bool)addLocalContact:(id)arg1 listType:(unsigned int)arg2;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2;
- (id)getAllContactUserName;
@end


#pragma mark - QRCode

@interface ScanQRCodeLogicController: NSObject
@property(nonatomic) unsigned int fromScene;
- (id)initWithViewController:(id)arg1 CodeType:(int)arg2;
- (void)tryScanOnePicture:(id)arg1;
- (void)doScanQRCode:(id)arg1;
- (void)showScanResult;
@end

@interface NewQRCodeScanner: NSObject
- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;
- (void)notifyResult:(id)arg1 type:(id)arg2 version:(int)arg3 rawData:(NSData *)arg4;
@end

#pragma mark - MMTableView
@interface MMTableViewInfo

- (id)getTableView;
- (void)clearAllSection;
- (void)addSection:(id)arg1;
- (void)insertSection:(id)arg1 At:(unsigned int)arg2;

@end

@interface MMTableViewSectionInfo

+ (id)sectionInfoDefaut;
+ (id)sectionInfoHeader:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1 Footer:(id)arg2;
- (void)addCell:(id)arg1;

@end

@interface WCTableViewManager

- (void)clearAllSection;
- (id)getTableView;
- (void)insertSection:(id)arg1 At:(unsigned int)arg2;
- (void)addSection:(id)arg1;

@end

@interface WCTableViewSectionManager
+ (id)defaultSection;
+ (id)sectionInfoDefaut;
+ (id)sectionInfoHeader:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1 Footer:(id)arg2;
- (void)addCell:(id)arg1;

@end

@interface MMTableViewCellInfo

+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 accessoryType:(long long)arg4;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5;
+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;
+ (id)urlCellForTitle:(id)arg1 url:(id)arg2;

@end


@interface WCTableViewCellManager

+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 accessoryType:(long long)arg4;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 WithDisclosureIndicator:(long long)arg5;
+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;
+ (id)urlCellForTitle:(id)arg1 url:(id)arg2;

@end

@interface WCTableViewNormalCellManager

+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;

@end

@interface MMTableView: UITableView

@end

#pragma mark - UI
@interface MMUICommonUtil : NSObject

+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4;

@end

@interface MMLoadingView : UIView

@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property (assign, nonatomic) BOOL m_bIgnoringInteractionEventsWhenLoading; // @synthesize m_bIgnoringInteractionEventsWhenLoading;

- (void)setFitFrame:(long long)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;


@end

@interface MMWebViewController: NSObject

- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3;

@end

@protocol ContactSelectViewDelegate <NSObject>

- (void)onSelectContact:(CContact *)arg1;

@end

@interface ContactSelectView : UIView

@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;

- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)initData:(unsigned int)arg1;
- (void)initView;
- (void)addSelect:(id)arg1;

@end

@interface ContactsDataLogic : NSObject

@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;

@end


@interface MMUINavigationController : UINavigationController

@end

#pragma mark - UtilCategory

@interface NSMutableDictionary (SafeInsert)

- (void)safeSetObject:(id)arg1 forKey:(id)arg2;

@end

@interface NSDictionary (NSDictionary_SafeJSON)

- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringForKey:(id)arg1;

@end

@interface NSString (NSString_SBJSON)

- (id)JSONArray;
- (id)JSONDictionary;
- (id)JSONValue;

@end

#pragma mark - UICategory

@interface UINavigationController (LogicController)

- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;

@end

@interface MMUIViewController : UIViewController

- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)startLoadingWithText:(NSString *)text;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(NSString *)text;
- (void)stopLoadingWithOKText:(NSString *)text;

@end

@interface NewSettingViewController: MMUIViewController

- (void)reloadTableData;

@end

@interface ContactInfoViewController : MMUIViewController

@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;

@end

@protocol MultiSelectContactsViewControllerDelegate <NSObject>
- (void)onMultiSelectContactReturn:(NSArray *)arg1;

@optional
- (int)getFTSCommonScene;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(NSArray *)arg1;
@end

@interface MultiSelectContactsViewController : UIViewController

@property(nonatomic) _Bool m_bKeepCurViewAfterSelect; // @synthesize m_bKeepCurViewAfterSelect=_m_bKeepCurViewAfterSelect;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) int m_scene; // @synthesize m_scene=_m_scene;
@property(nonatomic) _Bool m_onlyChatRoom; // @synthesize m_onlyChatRoom=_m_onlyChatRoom;

@property(nonatomic, weak) id <MultiSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;

- (void)updatePanelBtn;

@end

@interface GameController : NSObject
+ (NSString*)getMD5ByGameContent:(NSInteger) content;
@end

#pragma mark -- View

@interface MMTextView : UITextView
@property(retain, nonatomic) NSString *placeholder;
@end

#pragma mark -- Stars
@interface WCDataItem : NSObject

@property (retain, nonatomic) NSMutableArray * likeUsers;

@property  (nonatomic) int likeCount;

@property (retain, nonatomic) NSString* username;

@property (retain, nonatomic) NSMutableArray * commentUsers;

@property  (nonatomic) int commentCount;

@end

@interface SettingUtil : NSObject

+(NSString*) getCurUsrName;

@end

@interface WCUserComment : NSObject

@property (retain, nonatomic) NSString * nickname;

@property (retain, nonatomic) NSString* username;
@property (retain, nonatomic) NSString* contentPattern;
@property (retain, nonatomic) NSString* content;

@property (retain, nonatomic) NSString* commentID;
@property (retain, nonatomic) NSString* m_cpKeyForComment;//@"wctlcm|33||z314250405||1563794344"   @"wctlcm|99|1|wxid_6913ohfkk7kq12|liuwenling001|1563794437"

@property (retain, nonatomic) NSString* refCommentID;
@property (retain, nonatomic) NSString* refUserName;

@property  (nonatomic) int type; //1 mean like 2 mean comment
@property  (nonatomic) int isRichText;
@property  (nonatomic) unsigned int createTime;

@end

@interface CBaseContact : NSObject
@property (nonatomic, copy) NSString *m_nsEncodeUserName;                // 微信用户名转码
@property (nonatomic, assign) int m_uiFriendScene;                       // 是否是自己的好友(非订阅号、自己)
@property (nonatomic,assign) BOOL m_isPlugin;                            // 是否为微信插件
- (BOOL)isChatroom;
@end

@interface WCCommentDetailViewControllerFB : NSObject
@property (nonatomic, copy) NSMutableArray *arrLikeList;
@property (nonatomic, copy) WCDataItem *dataItem;
@end

@interface BaseMsgContentViewController : UIViewController
- (CContact *)GetContact;
@end
