//
//  NSMacro.h
//  NLiteAVDemo
//
//  Created by Think on 2020/8/26.
//  Copyright © 2020 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

// base host
#define BASE_HOST @""

// 隐私政策URL
static NSString *kPrivatePolicyURL = @"https://reg.163.com/agreement_mobile_ysbh_wap.shtml?v=20171127";
// 用户协议URL
static NSString *kUserAgreementURL = @"http://yunxin.163.com/clauses";

// UIColor宏定义

#define HEXCOLORA(rgbValue, alphaValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0x0000FF))/255.0 \
alpha:alphaValue]

#define HEXCOLOR(rgbValue) HEXCOLORA(rgbValue, 1.0)
// 线程
void ntes_main_sync_safe(dispatch_block_t block);
void ntes_main_async_safe(dispatch_block_t block);


/// 设备尺寸
#define kScreenWidth        [UIScreen mainScreen].bounds.size.width
#define kScreenHeight       [UIScreen mainScreen].bounds.size.height
#define kScreenMinLen       MIN([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height)
#define kScreenMaxLen       MAX([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height)
#define KStatusHeight       [[UIApplication sharedApplication] statusBarFrame].size.height
#define KNavBottom          KStatusHeight + 44
#define KIsSmallSize        [UIScreen mainScreen].bounds.size.width <= 568 ? YES : NO

/// 颜色
#define KThemColor          [UIColor colorWithRed:26/255.0 green:26/255.0 blue:36/255.0 alpha:1.0]

/// weakSelf strongSelf reference
#define WEAK_SELF(weakSelf) __weak __typeof(&*self) weakSelf = self;
#define STRONG_SELF(strongSelf) __strong __typeof(&*weakSelf) strongSelf = weakSelf;
