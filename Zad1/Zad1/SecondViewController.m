//
//  SecondViewController.m
//  Zad1
//
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.modifiedSurnameTextField.text = self.surname;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/
-(IBAction)buttonPressed{
    NSString* data = self.modifiedSurnameTextField.text;
    [self.delegate addItemViewController:self didFinishEnteringItem:data];
    [self dismissViewControllerAnimated:YES completion:nil];
}


@end
