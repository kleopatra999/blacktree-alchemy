//
//  QSHandledObjectHandler.h
//  Quicksilver
//
//  Created by Nicholas Jitkoff on 9/24/05.
//  Copyright 2005 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class QSObject;
@interface QSHandledObjectHandler : NSObject
- (QSObject *)handledObjectObjectWithInfo:(NSDictionary *)dict;
@end
