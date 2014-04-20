//
//  ViewController.h
//  matchingame
//
//  Created by Pragya Singh on 4/18/14.
//
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UIButton *buttonFourMoved;


@property (weak, nonatomic) IBOutlet UIButton *buttonFiveMoved;


@property (weak, nonatomic) IBOutlet UIButton *buttonOneMoved;


@property (weak, nonatomic) IBOutlet UIButton *buttonTwoMoved;


@property (weak, nonatomic) IBOutlet UIButton *buttonThreeMoved;




- (IBAction)buttonOne:(id)sender;


- (IBAction)buttonTwo:(id)sender;


- (IBAction)buttonThree:(id)sender;


- (IBAction)buttonFour:(id)sender;


- (IBAction)buttonFive:(id)sender;


@end
