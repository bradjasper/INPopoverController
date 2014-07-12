//
//  INPopoverWindowFrame.h
//  Copyright 2011-2014 Indragie Karunaratne. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "INPopoverControllerDefines.h"

/**
 @class INPopoverWindowFrame
 The NSView subclass responsible for drawing the frame of the popover
 */
@interface INPopoverWindowFrame : NSView {
    NSPoint arrowPoints[3];
}

@property (nonatomic, strong) NSColor *color;
@property (nonatomic, strong) NSColor *borderColor;
@property (nonatomic, strong) NSColor *topHighlightColor;
@property (nonatomic, strong) NSColor *arrowColor;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) NSSize arrowSize;
@property (nonatomic, assign) INPopoverArrowDirection arrowDirection;
@end
