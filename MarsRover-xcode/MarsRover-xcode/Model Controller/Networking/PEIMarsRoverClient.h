//
//  PEIMarsRoverClient.h
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEIMarsRover.h"

//Swift Type Alias
typedef void (^PEIMarsRoverFetcherCompletion)(NSArray<PEIMarsRover *> * _Nullable quakes, NSError * _Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface PEIMarsRoverClient : NSObject

- (void)fetchMarsRover:(NSString *)name
       completionBlock:(PEIMarsRoverFetcherCompletion)completion;


@end

NS_ASSUME_NONNULL_END
