//
//  GameViewController.h
//  The Butcher
//
//  Created by Wouter Vandersyppe on 7/06/13.
//  Copyright (c) 2013 devine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Util.h"

#import "GameView.h"
#import "AppModel.h"
#import "HUDViewController.h"
#import "ChooseMeatViewController.h"
#import "HakkenViewController.h"
#import "BakkenViewController.h"
#import "SausenViewController.h"
#import "ExtraViewController.h"
#import "SpecialViewController.h"
#import "SubmitViewController.h"

@interface GameViewController : UIViewController

@property (nonatomic, strong) GameView *v;
@property (nonatomic, strong) AppModel *model;
@property (nonatomic, strong) HUDViewController *HUDVC;
@property (nonatomic, strong) ChooseMeatViewController *ChooseMeatVC;
@property (nonatomic, strong) HakkenViewController *HakkenVC;
@property (nonatomic, strong) BakkenViewController *BakkenVC;
@property (nonatomic, strong) SausenViewController *SausenVC;
@property (nonatomic, strong) ExtraViewController *ExtraVC;
@property (nonatomic, strong) SpecialViewController *specialVC;

@property (nonatomic, strong) SubmitViewController *submitVC;


@end
