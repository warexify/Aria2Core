//
//  ACGlobalStatus.h
//  Aria2Core
//
//  Created by Eugene Istratov on 18.03.2018.
//  Copyright © 2018 Eugene Istratov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ACGlobalStatus : NSObject

@property (nonatomic) int downloadSpeed;
@property (nonatomic) int uploadSpeed;
@property (nonatomic) int numberOfActive;
@property (nonatomic) int numberOfStopped;
@property (nonatomic) int numberOfWaiting;

@end
