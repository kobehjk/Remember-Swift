//
//  PathMacros.h
//  PullVIew
//
//  Created by 何锦坤 on 16/1/28.
//  Copyright © 2016年 何锦坤. All rights reserved.
//

#ifndef PathMacros_h
#define PathMacros_h
#endif

//文件目录
#define kPathBundle [NSBundle                                                                                        mainBundle]
#define kPathTemp                                                                                                    NSTemporaryDirectory()
#define kPathDocument               [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kPathCache                  [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)   objectAtIndex:0]

#define kPathCurrentList            [kPathDocument stringByAppendingPathComponent:@"CurrentList.plist"]

#define kPathFormultList            [kPathDocument stringByAppendingPathComponent:@"Formulas.plist"]

#define kPathCalculatorResult       [kPathDocument stringByAppendingPathComponent:@"Result.plist"]

#define kPathCustomformula          [kPathDocument stringByAppendingPathComponent:@"Customformula.plist"]
#define kPathSteelMenuold              [kPathDocument stringByAppendingPathComponent:@"SteelTypeMenu111.plist"]
#define kPathSteelMenu              [kPathDocument stringByAppendingPathComponent:@"SteelTypeMenu112.plist"]
#define kPathUnitsMenu              [kPathDocument stringByAppendingPathComponent:@"Units.plist"]

#define kPathDownloadedMgzs         [kPath stringByAppendingPathComponent:@"DownloadedMgz.plist"]
#define kPathDownloadURLs           [kPath stringByAppendingPathComponent:@"DownloadURLs.plist"]
#define kPathCalculatorResult1      [kPath stringByAppendingPathComponent:@"Result.plist"]

#define kPathSplashScreen           [kPathCache stringByAppendingPathComponent:@"splashScreen"]
