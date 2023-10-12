//
//  TargetMouseMove.h
//  Enjoy
//
//  Created by Yifeng Huang on 7/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Target.h"

@interface TargetMouseMove : Target {
    int dir;
}

@property(readwrite) int dir;
@property (nonatomic) double cursorSpeed;


+(TargetMouseMove*) unstringifyImpl: (NSArray*) comps;

@end
