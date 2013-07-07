//
//  BPBarButtonItem.h
//
//  Created by Cory Imdieke on 4/25/13.
//  Copyright (c) 2013 BitSuites, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum : NSInteger {
	BPBarButtonItemStyleAction,
	BPBarButtonItemStyleStandardDark,
	BPBarButtonItemStyleStandardLight
} BPBarButtonItemStyle;

typedef enum : NSInteger {
	BPBarButtonItemOutlineFull = 100,
	BPBarButtonItemOutlineMedium = 75,
    BPBarButtonItemOutlineThin = 50
} BPBarButtonItemOutline;

@interface BPBarButtonItem : NSObject

// Generate individual buttons
+ (id)barButtonItemWithStyle:(BPBarButtonItemStyle)style outline:(BPBarButtonItemOutline)outline title:(NSString *)title target:(id)target action:(SEL)action;
+ (id)barButtonItemWithTintColor:(UIColor *)tintColor outline:(BPBarButtonItemOutline)outline title:(NSString *)title target:(id)target action:(SEL)action;

// Skin all or specific bar button items
+ (void)customizeBarButtonItem:(UIBarButtonItem *)item withStyle:(BPBarButtonItemStyle)style outline:(BPBarButtonItemOutline)outline;
+ (void)customizeBarButtonItem:(UIBarButtonItem *)item withTintColor:(UIColor *)tintColor outline:(BPBarButtonItemOutline)outline;

// Skin all or specific segmented controls
+ (void)customizeSegmentedControl:(UISegmentedControl *)segmentedControl withStyle:(BPBarButtonItemStyle)style outline:(BPBarButtonItemOutline)outline;
+ (void)customizeSegmentedControl:(UISegmentedControl *)segmentedControl withTintColor:(UIColor *)tintColor outline:(BPBarButtonItemOutline)outline;

@end
