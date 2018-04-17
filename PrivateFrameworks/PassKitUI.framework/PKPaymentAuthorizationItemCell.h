/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {
    NSString * _accessibilityLabel;
    UIImageView * _alertView;
    UIImageView * _arrowView;
    NSMutableArray * _constraints;
    NSAttributedString * _label;
    UIImage * _labelImage;
    UIImageView * _labelImageView;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    UIView * _separatorView;
    bool  _showsDisclosure;
    bool  _showsSeperator;
    NSAttributedString * _value;
    NSMutableArray * _valueViews;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSAttributedString *label;
@property (nonatomic, copy) UIImage *labelImage;
@property (nonatomic) bool showsDisclosure;
@property (nonatomic) bool showsSeperator;
@property (nonatomic, copy) NSAttributedString *value;

- (void).cxx_destruct;
- (id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2;
- (void)_createSubviews;
- (id)_createValueView;
- (id)accessibilityLabel;
- (id)addValue:(id)arg1 isPlaceholder:(bool)arg2;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (id)labelImage;
- (void)prepareForReuse;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelImage:(id)arg1;
- (void)setShowsDisclosure:(bool)arg1;
- (void)setShowsSeperator:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValue:(id)arg1 isPlaceholder:(bool)arg2;
- (bool)showsDisclosure;
- (bool)showsSeperator;
- (void)updateConstraints;
- (id)value;

@end