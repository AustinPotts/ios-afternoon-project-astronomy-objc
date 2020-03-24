//
//  PEIMarsRover.h
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarsRover_xcode-Swift.h"

@class SolDescription;

NS_ASSUME_NONNULL_BEGIN

// Objective C Enum Solution
typedef NS_ENUM(NSInteger, PEIMarsRoverStatus) {
    PEIMarsRoverStatusActive,
    PEIMarsRoverStatusComplete,
};

@interface PEIMarsRover : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *launchDate;
@property (nonatomic, readonly) int *maxSol;
@property (nonatomic, readonly) NSDate *maxDate;
@property (nonatomic, readonly) int *totalPhotos;

//API has staus as the key CHECK: Doc
@property (nonatomic, readonly) PEIMarsRoverStatus *status;
@property (nonatomic, readonly) NSArray<SolDescription *> *solDescriptions;





@end

NS_ASSUME_NONNULL_END
