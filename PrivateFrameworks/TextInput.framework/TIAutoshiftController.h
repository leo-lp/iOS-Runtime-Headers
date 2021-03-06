/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIAutoshiftController : NSObject {
    BOOL  _enabled;
    TITextInputTraits * _textInputTraits;
}

@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, readonly) TITextInputTraits *textInputTraits;

- (unsigned int)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2;
- (void)dealloc;
- (id)initWithTextInputTraits:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (id)textInputTraits;

@end
