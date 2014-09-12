//
//  FVSoundWaveView.h
//
//  Created by Marat Alekperov on 27.06.14.
//  Copyright (c) 2014 Favio Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FVSoundWaveView : UIView

@property (nonatomic, strong) NSURL* soundURL;

@property (nonatomic, assign) float progress;

@property (nonatomic, strong) UIColor* waveColor;

@property (nonatomic, strong) UIColor* progressColor;

@property (nonatomic, assign) BOOL drawSpaces;

@end
