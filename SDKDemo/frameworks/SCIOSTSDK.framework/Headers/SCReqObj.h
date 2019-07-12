//
//  SCReqObj.h
//  SCIOSTSDK
//
//  Created by 闪链 on 2019/5/31.
//  Copyright © 2019 fk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCReqObj : NSObject
@property (nonatomic, copy, readonly) NSString *action;     // login,transfer...(子类自动赋值)

@property (nonatomic, copy) NSString *dappName;             // dapp名字,用于在钱包展示                <optional>
@property (nonatomic, copy) NSString *dappIcon;             // dapp图标Url,用于在钱包展示
@end

#pragma mark - SCLoginObj -

/**
  登录授权
  */
@interface SCLoginObj : SCReqObj
 
@property (nonatomic, copy) NSString *wallet;               // 请求授权的IOST账号       <optional>

@end

#pragma mark - SCSignObj -

/**
  数据签名
  */
@interface SCSignObj : SCReqObj

@property (nonatomic, copy) NSString *message;              // 请求签名的数据          <required>
@property (nonatomic, copy) NSString *wallet;               // 请求签名的钱包          <optional>

@end

#pragma mark - SCTransferObj -

/**
  交易/转账数据
  */
@interface SCTransferObj : SCReqObj

@property (nonatomic, copy) NSString *from;                 // 付款人的IOST账号        <optional>
@property (nonatomic, copy) NSString *to;                   // 收款人的IOST账号        <required>
@property (nonatomic, copy) NSNumber *amount;               // 转账数额[float]       <required>
@property (nonatomic, copy) NSString *symbol;               // token的名称           <required>
@property (nonatomic, copy) NSString *contract;             // token合约名           <required>

@property (nonatomic, copy) NSString *memo;
@end

#pragma mark - TPPushTransactionObj -

/**
  Push Transaction
  */
@interface SCPushTransactionObj : SCReqObj

@property (nonatomic, strong) NSArray *actions;             // json数组 每个对象是一个action     <required>

@end
