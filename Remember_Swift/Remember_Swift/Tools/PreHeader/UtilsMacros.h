//
//  UtilsMacros.h
//  PullVIew
//
//  Created by 何锦坤 on 16/1/28.
//  Copyright © 2016年 何锦坤. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h


#endif /* UtilsMacros_h */

//Log utils marco

#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif

#ifdef DEBUG
#define ULog(...)
//#define ULog(fmt, ...)  { UIAlertView *alert = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] message:[NSString stringWithFormat:fmt, ##__VA_ARGS__]  delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil]; [alert show]; }
#else
#define ULog(...)
#endif


//System version utils

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

//小字体设置
#define SMALLFONT [UIFont fontWithName:@"Helvetica" size:13];
//普通字体设置
#define NORMALFONT [UIFont fontWithName:@"Helvetica" size:14];
//普通字体设置
#define NORMALFONT2 [UIFont fontWithName:@"Helvetica" size:15];
//大字体设置
#define BIGFONT [UIFont fontWithName:@"Helvetica" size:16];
//超大字体设置
#define SUPERBIGFONT [UIFont fontWithName:@"Helvetica" size:24];
// 获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

//黄绿
#define ThemeColorYellow RGB(190, 215, 45)
#define ThemeColorDarkGreen RGB(111, 165, 56)
//淡绿
#define ThemeColorGreen RGB(146, 207, 83)
#define ThemeColorDarkGreen RGB(111, 165, 56)
//浅蓝
#define ThemeColorBlue RGB(96, 186, 211)
#define ThemeColorDarkBlue RGB(61, 148, 173)
//淡绿
#define ThemeColorRed RGB(146, 207, 83)
//紫
#define ThemeColorPurple RGB(136, 96, 146)
#define ThemeColorDarkPurple RGB(138, 71, 133)
//深绿
#define ThemeColorGreen2 RGB(46, 170, 158)
#define ThemeColorDarkGreen2 RGB(42, 154, 146)
//粉
#define ThemeColorPinch RGB(214, 125, 169)
#define ThemeColorDarkPinch RGB(203, 93, 141)


//主题颜色
#define TINTCOLOR [UIColor colorWithRed:0.1686 green:0.6073 blue:0.5494 alpha:1.0]

#define IsPortrait ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait || [UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortraitUpsideDown)


#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))


//大于等于7.0的ios版本
#define iOS7_OR_LATER SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")

//大于等于8.0的ios版本
#define iOS8_OR_LATER SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")

//iOS6时，导航VC中view的起始高度
#define YH_HEIGHT (iOS7_OR_LATER ? 64:0)

//获取系统时间戳
#define getCurentTime [NSString stringWithFormat:@"%ld", (long)[[NSDate date] timeIntervalSince1970]]


