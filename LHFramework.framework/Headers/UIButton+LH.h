//
//  UIButton+LH.h
//  OCProject
//
//  Created by lh on 2019/2/12.
//  Copyright © 2019 gaming17. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (LH)
- (instancetype)initWithFont:(UIFont *)font titleColor:(UIColor *)titleColor textAlignment:(UIControlContentHorizontalAlignment)textAlignment target:(nullable id)target action:(nullable SEL)action;
@end

NS_ASSUME_NONNULL_END
