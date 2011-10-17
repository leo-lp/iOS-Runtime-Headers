/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSNumber, MFWeakReferenceHolder, MailAccount, NSMutableArray, NSString, MessageCriterion, NSMutableDictionary, NSArray;

@interface MailboxUid : NSObject  {
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSArray *_extraAttributes;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
    NSString *_permanentTag;
}

@property(retain) NSString * permanentTag;
@property(retain) NSArray * extraAttributes;

+ (BOOL)isDraftsMailboxType:(int)arg1;
+ (id)specialNameForType:(int)arg1;
+ (BOOL)isOutgoingMailboxType:(int)arg1;

- (unsigned int)nonDeletedCount;
- (BOOL)hasChildren;
- (id)childEnumerator;
- (unsigned int)numberOfChildren;
- (unsigned int)indexOfChild:(id)arg1;
- (id)descendantWithExtraAttribute:(id)arg1;
- (id)descendantWithPermanentTag:(id)arg1;
- (void)sortChildren;
- (BOOL)isContainer;
- (BOOL)isOutgoingMailboxUid;
- (id)realFullPath;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)oldURLString;
- (unsigned int)mailboxID;
- (int)compareWithMailboxUid:(id)arg1;
- (int)indexToInsertChildMailboxUid:(id)arg1;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (id)userInfoDictionary;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoForSerialization;
- (void)setCriterion:(id)arg1;
- (BOOL)alwaysWriteFullMessageFile;
- (void)setLastViewedMessageID:(id)arg1;
- (void)setPermanentTag:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;
- (id)_mutableChildren;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)URLStringNonNil;
- (id)fullPathNonNil;
- (BOOL)isStore;
- (id)topMailbox;
- (id)rootMailbox;
- (void)saveUserInfo;
- (id)displayNameUsingSpecialNames;
- (id)ancestralAccount;
- (id)criterion;
- (id)_loadUserInfo;
- (id)userInfoObjectForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)URLStringWithAccount:(id)arg1;
- (void)addToPostOrderTraversal:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)depthFirstEnumerator;
- (void)flushCriteria;
- (BOOL)isSpecialMailboxUid;
- (BOOL)setUnreadCount:(unsigned int)arg1;
- (id)childWithName:(id)arg1;
- (id)childWithExtraAttribute:(id)arg1;
- (id)childWithPermanentTag:(id)arg1;
- (BOOL)setChildren:(id)arg1;
- (id)permanentTag;
- (void)setRepresentedAccount:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 permanentTag:(id)arg4;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)mutableCopyOfChildren;
- (id)uniqueId;
- (id)fullPath;
- (id)account;
- (id)accountRelativePath;
- (unsigned int)unreadCount;
- (id)representedAccount;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)lastViewedMessageID;
- (id)lastViewedMessageDate;
- (id)URLString;
- (BOOL)isSelectable;
- (id)childAtIndex:(unsigned int)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void)invalidate;
- (id)store;
- (id)children;
- (id)displayName;
- (void)setAttributes:(unsigned int)arg1;
- (unsigned int)attributes;
- (void)removeChild:(id)arg1;
- (BOOL)isVisible;
- (int)type;
- (id)URL;
- (id)name;
- (void)setType:(int)arg1;
- (BOOL)isValid;
- (void)setExtraAttributes:(id)arg1;
- (id)extraAttributes;
- (void)setName:(id)arg1;
- (id)description;
- (id)copyWithZone:(id)arg1;
- (id)init;
- (void)dealloc;

@end