//
//  NSView+LayerAddition.h
//  Duoduo
//
//  Created by 独嘉 on 14-5-4.
//  Copyright (c) 2014年 zuoye. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSView (LayerAddition)
- (void)setShadow:(NSColor*)color
           offset:(NSSize)offset
          opacity:(CGFloat)opacity;
@end
