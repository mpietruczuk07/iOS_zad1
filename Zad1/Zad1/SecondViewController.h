//
//  SecondViewController.h
//  Zad1
//
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SecondViewController;
@protocol SecondViewControllerDelegate <NSObject>

-(void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end


@interface SecondViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *modifiedSurname;
@property(nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;
@property(nonatomic, weak) id <SecondViewControllerDelegate> delegate;

-(IBAction)buttonPressed;
@end

NS_ASSUME_NONNULL_END
