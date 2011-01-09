/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class UITextField;



@interface UIAccessibilityTextFieldElement : UIAccessibilityElement 
{
    UITextField *_textField;
}

@property UITextField *textField;


- (id)_accessibilityUserTestingParent;
- (void)_accessibilityCopy;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (void)_accessibilityPaste;
- (void)_accessibilitySelectAll;
- (void)_accessibilitySelect;
- (void)_accessibilityDelete;
- (void)_accessibilityReplace;
- (void)_accessibilityCut;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityHasTextOperations;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)textField;
- (id)accessibilityLabel;
- (void)setTextField:(id)arg1;

@end