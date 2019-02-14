//
//  LHNavigationController.h
//  LHNavigationController
//
//  Created by lh on 2019/1/30.
//  Copyright © 2019 gaming17. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LHNavigationControllerDelegate <NSObject>

- (void)lhNavigationControllerHandGestureBeganAt:(CGPoint)point;
- (void)lhNavigationControllerHandGestureMoveAt:(CGPoint)point;
- (void)lhNavigationControllerHandGestureEndAt:(CGPoint)point;

@end

NS_ASSUME_NONNULL_BEGIN

@interface LHNavigationController : UINavigationController

@property (nonatomic, assign) BOOL popGestureDisabled;
@property (nonatomic, weak) id<LHNavigationControllerDelegate> ges_delegate;


- (void)lh_changeNavAlphaRefresh;
@end

NS_ASSUME_NONNULL_END
