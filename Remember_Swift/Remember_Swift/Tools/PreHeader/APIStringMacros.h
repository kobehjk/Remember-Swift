//
//  APIStringMacros.h
//  PullVIew
//
//  Created by 何锦坤 on 16/1/28.
//  Copyright © 2016年 何锦坤. All rights reserved.
//

#ifndef APIStringMacros_h
#define APIStringMacros_h

//Admobi
//AD序列号
//测试
#define ADTEST @"ca-app-pub-3940256099942544/2934735716"
//正式横幅
#define ADBANNER @"ca-app-pub-2155667014100388/9032661156"

//4s序列号
#define iphoneSnum @[@"bb49e768b30dc41adfb80fffa0c4a4e9"]
//6P序列号
#define iphonePnum @[@"cdec76573f25a0a5940fd5632d713d32"]


//数据库表
#define kDefaultDBName @"hardware2.2.0.db"
#define kDBName @"iOSAppDB.sqlite"
//友盟key
//{"oid":"5b8374d934d59c56689c1b1f94b9356e95c634ff"}

#define UmengAppkey @"56e157f367e58edb76001f0c"

#define OperatorsKey @"+-x%^()÷√ƒ¥çåß∂/"
#define NUMANDDGREE @"0123456789.°'\""

#define NUMFLOATS @"0123456789."
#define NUMINTS @"0123456789"
#define NUMANDSTR @"0123456789abcdefghijklmnopqrstuvwxyz"
#define STR @"abcdefghijklmnopqrstuvwxyz%"
#define KJHEIGHT 40

//弧度转角度
#define RADIANS_TO_DEGREES(radians) ((radians) * (180.0 / M_PI))

//角度转弧度
#define DEGREES_TO_RADIANS(angle) ((angle) / 180.0 * M_PI)

#endif /* APIStringMacros_h */

//接口名称相关http://cad.glodon.com/collect/feedback/receiver/all

#ifdef DEBUG
//Debug状态下的测试API
#define API_BASE_URL_STRING     @"http://cad.glodon.com/"

#else
//Release状态下的线上API
#define API_BASE_URL_STRING     @"http://cad.glodon.com/"

#endif

//接口
#define POST_FORMULA_BACK      @"collect/feedback/receiver/all" //公式反馈

#define GET_COMMENT_LIST        @"comment/getCommentList"   //获取评论列表

#define COMMENT_LOGIN           @"comment/login"            //获取评论列表

#define COMMENT_PUBLISH         @"comment/publish"          //发布评论

#define COMMENT_DELETE          @"comment/delComment"       //删除评论

#define LOGINOUT                @"common/logout"            //登出
