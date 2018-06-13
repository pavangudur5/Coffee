//
//  ViewController.h
//  Coffee
//
//  Created by Pavan Gudur on 5/23/18.
//  Copyright © 2018 Pavan Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *waterTextField;
@property (weak, nonatomic) IBOutlet UITextField *ratioTextfield;
@property (weak, nonatomic) IBOutlet UITextField *coffeeTextfield;

- (IBAction)calculateButton:(id)sender;
@end

