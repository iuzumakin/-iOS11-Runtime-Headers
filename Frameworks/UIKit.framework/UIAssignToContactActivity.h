/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, CNContactViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIImage * _image;
    UIImagePickerController * _imagePickerController;
    CNContactPickerViewController * _peoplePicker;
    CNContact * _person;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImagePickerController *imagePickerController;
@property (nonatomic, retain) CNContactPickerViewController *peoplePicker;
@property (nonatomic, retain) CNContact *person;
@property (readonly) Class superclass;

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (id)_activityImage;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)_willPresentAsFormSheet;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)image;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)peoplePicker;
- (id)person;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (void)setPerson:(id)arg1;

@end