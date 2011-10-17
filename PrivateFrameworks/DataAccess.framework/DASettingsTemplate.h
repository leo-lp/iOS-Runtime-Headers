/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString, NSArray;

@interface DASettingsTemplate : NSObject  {
    NSString *_name;
    int _order;
    NSString *_primaryDomain;
    NSArray *_domainAliasPatterns;
    NSString *_primaryUsernameDomain;
    int _httpPort;
    int _httpsPort;
    int _port;
    NSString *_pathFormat;
    BOOL _isDefaultTemplate;
    BOOL _defaultUseSSL;
}

@property(retain) NSString * name;
@property int order;
@property(retain) NSString * primaryDomain;
@property(retain) NSArray * domainAliasPatterns;
@property(retain) NSString * primaryUsernameDomain;
@property int httpPort;
@property int httpsPort;
@property(retain) NSString * pathFormat;
@property BOOL defaultUseSSL;
@property(readonly) int defaultPort;
@property(readonly) NSString * defaultScheme;
@property BOOL isDefaultTemplate;

+ (BOOL)_isValidPort:(int)arg1;
+ (id)templateWithDomain:(id)arg1;
+ (id)defaultTemplate;
+ (BOOL)requiresPathFormat;
+ (BOOL)requiresPorts;
+ (id)knownTemplates;

- (void)setOrder:(int)arg1;
- (int)order;
- (id)descriptionForAccount:(id)arg1;
- (void)setPort:(int)arg1 forAccount:(id)arg2;
- (void)setUseSSL:(BOOL)arg1 forAccount:(id)arg2;
- (void)setUsername:(id)arg1 forAccount:(id)arg2;
- (void)setDomain:(id)arg1 forAccount:(id)arg2;
- (id)_initWithName:(id)arg1 plist:(id)arg2;
- (id)primaryUsernameDomain;
- (id)_principalPathForAccount:(id)arg1;
- (void)setPrincipalURLForAccount:(id)arg1 toURL:(id)arg2;
- (BOOL)_isPrincipalPathCustomForAccount:(id)arg1;
- (void)_appendPrimarySuffixToUsernameIfNeeded:(id)arg1;
- (void)setURL:(id)arg1 forAccount:(id)arg2;
- (void)initAccount:(id)arg1;
- (void)_setPrincipalURLForAccount:(id)arg1;
- (int)defaultPort;
- (id)defaultScheme;
- (id)domainAliasPatterns;
- (BOOL)defaultUseSSL;
- (id)pathFormat;
- (int)httpsPort;
- (int)httpPort;
- (void)setDefaultUseSSL:(BOOL)arg1;
- (void)setIsDefaultTemplate:(BOOL)arg1;
- (void)setPathFormat:(id)arg1;
- (void)setHttpsPort:(int)arg1;
- (void)setHttpPort:(int)arg1;
- (void)setPrimaryUsernameDomain:(id)arg1;
- (void)setDomainAliasPatterns:(id)arg1;
- (void)setPrimaryDomain:(id)arg1;
- (BOOL)isDefaultTemplate;
- (BOOL)_isDomainInAliases:(id)arg1;
- (id)primaryDomain;
- (int)compare:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;

@end