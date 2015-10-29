/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPolicy : CNPolicy {
    BOOL _abSourceIsContentReadonly;
    void *_fakePerson;
    void *_iOSABPolicy;
}

- (void)dealloc;
- (id)initWithAddressBookPolicy:(void*)arg1 readOnly:(BOOL)arg2;
- (BOOL)isReadonly;
- (unsigned int)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned int)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (BOOL)shouldAddContact:(id)arg1;
- (BOOL)shouldRemoveContact:(id)arg1;
- (BOOL)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4;
- (id)supportedLabelsForContactProperty:(id)arg1;

@end