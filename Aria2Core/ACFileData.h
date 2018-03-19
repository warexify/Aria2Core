//
//  ACFileData.h
//  Aria2Core
//
//  Created by Eugene Istratov on 18.03.2018.
//  Copyright © 2018 Eugene Istratov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ACUriData.h"

typedef int64_t ACLength;

@interface ACFileData : NSObject

@property (nonatomic) int index;
@property (nonatomic, copy) NSString * path;
@property (nonatomic) ACLength length;
@property (nonatomic) ACLength completedLength;
@property (nonatomic) bool selected;
@property (nonatomic, copy) NSArray<ACUriData *> * uris;

@end
