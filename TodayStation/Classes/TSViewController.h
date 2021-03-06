//
//  TSViewController.h
//  TodayStation
//
//  Created by Eric Huss on 2/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TSWunderground.h"
#import "TSWeatherController.h"
#import "TSCalendar.h"
#import "TSLocation.h"
#import "TSBusy.h"
#import "TSSelectCityController.h"

@interface TSViewController : UIViewController <TSLocationDelegate,
                                                TSWeatherDelegate,
                                                TSCalendarDelegate>

@property (weak, nonatomic) IBOutlet UILabel *timeView;
@property (weak, nonatomic) IBOutlet UILabel *dateView;
@property (weak, nonatomic) IBOutlet UILabel *secondsView;
@property (weak, nonatomic) IBOutlet UILabel *periodView;
@property (weak, nonatomic) IBOutlet UIView *calendarView;
@property (weak, nonatomic) IBOutlet UIButton *settingsButton;
@property (strong, nonatomic) TSCalendar *calendar;
@property (nonatomic, strong) NSTimer *secondsTimer;
@property (weak, nonatomic) UIView *currentView;
@property (nonatomic, weak) UIView *tallView;
@property (nonatomic, weak) UIView *foreView;
@property (nonatomic, strong) TSLocation *location;
@property (nonatomic, strong) TSBusy *busy;
@property (nonatomic, strong) TSSelectCityController *selectCityCont;
@property (nonatomic, strong) UINavigationController *selectCityNav;
@property (nonatomic, strong) UINavigationController *settingsNav;
- (void)secondsTick:(NSTimer *)timer;
- (void)updateTime;

@end
