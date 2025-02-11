//
//  TestPropertyViewController.h
//  confuse_test
//
//  Created by yjs on 2020/9/9.
//  Copyright © 2020 coding520. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TestPropertyXibViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface TestPropertyViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label1;
@property (weak, nonatomic) IBOutlet TestPropertyXibView *propertyXibView;

@property (readonly,nonatomic) NSUInteger loopCount0;
@property (readonly,nonatomic) NSUInteger loopCount1;
@property (readonly) NSUInteger loopCount2;

@end

NS_ASSUME_NONNULL_END
