//
//  GameScreenshot.h
//  iVulcun
//
//  Created by Yu Qi Hao on 9/18/15.
//  Copyright (c) 2015 Yu Qi Hao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SavedGame;

@interface GameScreenshot : NSManagedObject

@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) SavedGame *game;

@end
