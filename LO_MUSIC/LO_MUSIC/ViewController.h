//
//  ViewController.h
//  LO_MUSIC
//
//  Created by 杨少锋 on 16/2/24.
//  Copyright © 2016年 杨少锋. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) UIViewController *leftVC;
@property (nonatomic, strong) UIViewController *rootVC;
@property (nonatomic, strong) UIGestureRecognizer *tap;


- (instancetype)initWithRootVC:(UIViewController *)rootVC;
- (void)setRootViewController:(UIViewController *)controller;
- (void)setLeftViewController:(UIViewController *)controller;
- (void)showLeftVC;
- (void)showRootVC;


@end

