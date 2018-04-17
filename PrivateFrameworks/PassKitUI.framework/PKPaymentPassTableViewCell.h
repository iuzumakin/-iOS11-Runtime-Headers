/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassTableViewCell : PKTableViewCell {
    UIView * _cardSnapshotView;
    UILabel * _mainLabel;
    PKPaymentPass * _pass;
    UILabel * _subTextLabel;
}

@property (nonatomic, retain) PKPaymentPass *pass;

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_updateLabelText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)setPass:(id)arg1;

@end