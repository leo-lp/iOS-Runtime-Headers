/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLCorrelation, NSSQLRow;

@interface NSSQLAdapterOperation : NSObject  {
    unsigned int _adapterOperator;
    NSSQLRow *_row;
    NSSQLCorrelation *_correlation;
}


- (id)initWithAdapterOperator:(unsigned int)arg1 correlation:(id)arg2;
- (void)setAdapterOperator:(unsigned int)arg1;
- (id)correlation;
- (int)compareAdapterOperation:(id)arg1;
- (id)initWithAdapterOperator:(unsigned int)arg1 row:(id)arg2;
- (unsigned int)adapterOperator;
- (id)_opString;
- (id)entity;
- (id)row;
- (id)description;
- (void)dealloc;

@end