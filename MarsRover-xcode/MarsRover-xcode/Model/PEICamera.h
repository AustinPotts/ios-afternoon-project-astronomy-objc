//
//  PEICamera.h
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PEICamera : NSObject

//let id: Int
//let name: String
//let roverId: Int
//let fullName: String


@property (nonatomic, readonly) int *id;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int *roverId;
@property (nonatomic, readonly) NSString *fullName;

@end

NS_ASSUME_NONNULL_END
