//
//  ViewController.h
//  Zad1
//
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController

//@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;

@property (nonatomic, weak) IBOutlet UITextField *surnameTextField;

-(IBAction) enter;



@end

