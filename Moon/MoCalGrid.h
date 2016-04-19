//
//  MoCalGrid.h
//
//
//  Created by Sanjay Madan on 12/3/14.
//  Copyright (c) 2014 mowglii.com. All rights reserved.
//

#import <AppKit/AppKit.h>
#import "MoDate.h"

@class MoCalCell;

@interface MoCalGrid : NSView

@property (nonatomic, readonly) NSArray *cells;

- (instancetype)initWithRows:(NSUInteger)rows columns:(NSUInteger)cols horizontalMargin:(NSUInteger)hMargin verticalMargin:(NSUInteger)vMargin;

//
// The cell at a given point
// point   the point in the receiver's coordinate system
// return  the cell at point or nil if no cell
//
- (MoCalCell *)cellAtPoint:(NSPoint)point;

//
// The cell with a given date
// date    the date to search for
// return  the first cell with date or nil if not found
//
- (MoCalCell *)cellWithDate:(MoDate)date;

//
// The rect that encompasses the cells
// return  the rect in the receiver's coordinate system
//         that encompasses the cells (ignoring the margins)
//
- (NSRect)cellsRect;

@end
