//
//  NSMutableArray+Helpers.m
//  secret-santa
//
//  Created by Johnny Moralez on 12/17/12.
//  Copyright (c) 2012 Bathroom Gaming. All rights reserved.
//

#import "NSMutableArray+Helpers.h"

@implementation NSMutableArray (Helpers)

- (void)uniqueStringAdd:(NSString*)newEntry {
    if ([self indexOfObject:newEntry] == NSNotFound) {
        [self addObject:newEntry];
    }
}

@end
