//
//  UIViewController+LH.h
//  WanchangLawFirms
//
//  Created by lh on 2019/2/1.
//  Copyright © 2019 gaming17. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LHBGModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (LH)
@property (nonatomic, strong) LHBGModel *lhbgModel;
@property (nonatomic, assign) BOOL lhbgNeed;
@end

NS_ASSUME_NONNULL_END
