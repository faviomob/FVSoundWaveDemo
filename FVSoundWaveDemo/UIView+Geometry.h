//
//  UIView+Geometry.h
//  FVSoundWaveDemo
//
//  Created by Marat on 12.09.14.
//  Copyright (c) 2014 Favio LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Geometry)

- (void)sizeToFitWithinSize:(CGSize)size;

- (CGFloat)left;
- (void)setLeft:(CGFloat)x;
- (CGFloat)top;
- (void)setTop:(CGFloat)y;
- (CGFloat)right;
- (void)setRight:(CGFloat)right;
- (CGFloat)bottom;
- (void)setBottom:(CGFloat)bottom;
- (CGFloat)centerX;
- (void)setCenterX:(CGFloat)centerX;
- (CGFloat)centerY;
- (void)setCenterY:(CGFloat)centerY;
- (CGFloat)width;
- (void)setWidth:(CGFloat)width;
- (CGFloat)height;
- (void)setHeight:(CGFloat)height;

@end
