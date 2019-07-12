//
//  SCRespObj.h
//  SCIOSTSDK
//
//  Created by 闪链 on 2019/5/31.
//  Copyright © 2019 fk. All rights reserved.
//

#import <Foundation/Foundation.h>

/**  回调结果状态 */
typedef NS_ENUM(NSUInteger, SCRespResult) {
    SCRespResultCanceled = 0,       // 取消
    SCRespResultSuccess,            // 成功
    SCRespResultFailure,            // 失败
};



/*!
 * @brief 跳转回调
 */
@interface SCRespObj : NSObject

@property (nonatomic, assign) SCRespResult result;      // 处理结果
@property (nonatomic, copy) NSString *message;          // 消息
@property (nonatomic, weak) id data;                    // 结果数据

@end
