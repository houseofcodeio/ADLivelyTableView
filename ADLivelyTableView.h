//DLivelyTransform
//  ADLivelyTableView.h
//  ADLivelyTableView
//
//  Created by Romain Goyet on 18/04/12.
//  Copyright (c) 2012 Applidium. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSTimeInterval ADLivelyDefaultDuration;
typedef NSTimeInterval (^ADLivelyTableViewTransform)(CALayer * layer, float speed);

extern ADLivelyTableViewTransform ADLivelyTableViewTransformCurl;
extern ADLivelyTableViewTransform ADLivelyTableViewTransformFade;
extern ADLivelyTableViewTransform ADLivelyTableViewTransformFan;
extern ADLivelyTableViewTransform ADLivelyTableViewTransformFlip;
extern ADLivelyTableViewTransform ADLivelyTableViewTransformHelix;
extern ADLivelyTableViewTransform ADLivelyTableViewTransformTilt;
extern ADLivelyTableViewTransform ADLivelyTableViewTransformWave;

@interface ADLivelyTableView : UITableView <UITableViewDelegate> {
    id <UITableViewDelegate>  _preLivelyDelegate;
    CGPoint _lastScrollPosition;
    CGPoint _currentScrollPosition;
    ADLivelyTableViewTransform _transformBlock;
}
- (CGPoint)scrollSpeed;
- (void)setInitialCellTransformBlock:(ADLivelyTableViewTransform)block;
@end
