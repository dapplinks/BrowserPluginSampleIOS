//
//  SCApi.h
//  SCIOSTSDK
//
//  Created by 闪链 on 2019/5/31.
//  Copyright © 2019 fk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCRespObj.h"
#import "SCReqObj.h"

@interface SCApi : NSObject

/**
 * 注册ID
 * @param AppID a) 请确保AppID已经添加在Xcode工程info.plist-> URL types -> URL Schemes里!
 *              b) AppID也作为App回调时的URL跳转, 务必设置好AppID!
 *              c) 为了避免误操作其他App的跳转请求，请设置一个唯一的appID给SCIOSTSDK;
 *
 * 在AppDelegate -(application:didFinishLaunchingWithOptions:)方法里注册
 */
+ (void)registerAppID:(NSString *)AppID;

/**
 * 发起请求
 * @param obj 接收SDK内TPReqObj的业务子类, 如交易/转账SCTransferObj, ...
 * @return 成功发起请求会返回YES, 其他情况返回NO;
 */
+ (BOOL)sendObj:(SCReqObj *)obj;

/*!
 * 处理SDK的回调跳转
 * 在AppDelegate -(application:openURL:options:)方法里调用
 */
+ (BOOL)handleURL:(NSURL *)url
          options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options
           result:(void(^)(SCRespObj *respObj))result;

@end


