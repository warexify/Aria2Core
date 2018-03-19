//
//  ACUriData.h
//  Aria2Core
//
//  Created by Eugene Istratov on 18.03.2018.
//  Copyright © 2018 Eugene Istratov. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    ACUriStatusUsed,
    ACUriStatusWaiting
} ACUriStatus;

@interface ACUriData : NSObject

@property (nonatomic, copy) NSString * uri;
@property (nonatomic) ACUriStatus status;

@end
