//
//  Util.h
//  The Butcher
//
//  Created by Wouter Vandersyppe on 5/06/13.
//  Copyright (c) 2013 devine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Reachability.h"

@interface Util : NSObject


+ (CGRect)getMainScreenLandscape;
+(CGRect)getGameFrame;
+ (id)createImageFromPNG:(NSString *)pngName InDirectory:(NSString *)dir DoYouWantImageView:(BOOL)imgView;
+ (UIButton *)createMenuButtonWithXpos:(CGFloat)x AndYpos:(CGFloat)y;

+(CGFloat)radiansFromDegrees:(float)deg;
+(BOOL)networkConnectionAvailable;


@end
