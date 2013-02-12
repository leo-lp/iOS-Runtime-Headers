/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProduct : NSObject {
    id _internal;
}

@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *localizedTitle;
@property(readonly) NSDecimalNumber *price;
@property(readonly) NSLocale *priceLocale;
@property(readonly) NSString *productIdentifier;

- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)price;
- (id)priceLocale;
- (id)productIdentifier;
- (void)setLocale:(id)arg1;

@end