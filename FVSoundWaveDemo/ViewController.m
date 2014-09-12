//
//  ViewController.m
//  FVSoundWaveDemo
//
//  Created by Marat on 09.09.14.
//  Copyright (c) 2014 Favio LLC. All rights reserved.
//

#import "FVSoundWaveView.h"
#import "ViewController.h"
#import "SoundManager.h"

@interface ViewController ()

@end



@implementation ViewController {
    
    FVSoundWaveView* _soundWaveView;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    _soundWaveView = [[FVSoundWaveView alloc] initWithFrame:CGRectMake(10, 50, 300, 200)];
    [self.view addSubview:_soundWaveView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)playSound:(id)sender {
    
    NSString* filename = [NSString stringWithFormat:@"%ld.m4a", (long)[sender tag]];
    
    NSURL* url = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:filename ofType:nil]];
    
    _soundWaveView.soundURL = url;
    
    [[SoundManager sharedManager] playSound:filename looping:NO];
}

@end
