//
//  LHBGModel.h
//  DevelopSDK
//
//  Created by lh on 2019/2/13.
//  Copyright © 2019 gaming17. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface LHBGModel : NSObject
@property (nonatomic, copy, readonly) NSString *imageName;
@property (nonatomic, strong, readonly) UIColor *backgroundColor;
@property (nonatomic, assign, readonly) BOOL translucent;

@property (nonatomic, assign) CGFloat alpha;

- (instancetype)initWithImageName:(NSString *)imageName translucent:(BOOL)translucent alpha:(CGFloat)alpha;
- (instancetype)initWithBackgroundColor:(UIColor *)backgroundColor translucent:(BOOL)translucent alpha:(CGFloat)alpha;

- (BOOL)equalTo:(LHBGModel *)refrenceModel;
- (LHBGModel *)copy;
@end
