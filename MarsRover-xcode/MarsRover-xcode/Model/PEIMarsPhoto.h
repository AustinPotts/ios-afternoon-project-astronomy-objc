//
//  PEIMarsPhoto.h
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEICamera.h"

NS_ASSUME_NONNULL_BEGIN

@interface PEIMarsPhoto : NSObject

//@objc var id: Int = 0
// @objc var sol: Int = 0
// @objc let camera: String //Camera FIXME
// @objc let earthDate: Date
//
// @objc let imageURL: URL

@property (nonatomic, readonly) int *id;
@property (nonatomic, readonly) int *sol;
@property (nonatomic, readonly) PEICamera *camera;
@property (nonatomic, readonly) NSDate *earthDate;
@property (nonatomic, readonly) NSURL *imgSrc;



@end

NS_ASSUME_NONNULL_END
