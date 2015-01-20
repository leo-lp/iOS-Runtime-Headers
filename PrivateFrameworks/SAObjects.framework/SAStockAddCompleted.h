/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSURL, SAStockObject;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(retain) SAStockObject * aceStock;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSURL * identifier;
@property(copy) NSString * refId;
@property(copy) NSArray * results;
@property(copy) NSArray * stockReferences;
@property(copy) NSArray * stocks;
@property(readonly) Class superclass;

+ (id)addCompleted;
+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceStock;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)results;
- (void)setAceStock:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStockReferences:(id)arg1;
- (void)setStocks:(id)arg1;
- (id)stockReferences;
- (id)stocks;

@end