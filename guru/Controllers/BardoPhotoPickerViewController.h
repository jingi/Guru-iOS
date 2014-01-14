//
//  PhotoPickerViewController.h
//  guru
//
//  Created by Karan Batra-Daitch on 1/14/14.
//  Copyright (c) 2014 Karan Batra-Daitch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BardoPhotoPickerViewController : UIViewController

- (IBAction)initiatePopover:(id)sender;
- (UIImage *)image;
- (void)setImage:(UIImage *)image;
- (void)setSavedImage:(UIImage *)image withTitle:(NSString *)title;
- (void)moveToImageWithTitle:(NSString *)title;

@end