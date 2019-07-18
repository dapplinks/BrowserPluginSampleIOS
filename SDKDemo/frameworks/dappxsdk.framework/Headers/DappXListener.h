//
//  DappXListener.h
//  testsdk
//
//  Created by coolman on 2019/6/11.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 常量列表
static NSString* KEY_CODE = @"code";
static const int CODE_SUCCESS = 0;
static const int CODE_CANCEL = 1;
static const int CODE_FAILED = 2;
static NSString* KEY_MESSAGE = @"message";
static NSString* KEY_ACTION = @"action";
static NSString* ACTION_SELECT = @"select";
static NSString* ACTION_AUTH = @"auth";
static NSString* ACTION_TRANSFER = @"transfer";
static NSString* ACTION_TRANSACTION = @"transaction";
static NSString* ACTION_SIGN = @"sign";
static NSString* BLOCK_CHAIN_EOS = @"EOS";
static NSString* BLOCK_CHAIN_BOS = @"BOS";
static NSString* BLOCK_CHAIN_IOST = @"IOST";
static NSString* KEY_ACCOUNT = @"account";
static NSString* KEY_REF = @"ref";
static NSString* KEY_TIME_STAMP = @"timestamp";
static NSString* KEY_PERMISSIONS = @"permissions";
static NSString* KEY_PUBLIC_KEY = @"public_key";
static NSString* KEY_SIGN = @"sign";
static NSString* KEY_WALLET = @"wallet";
static NSString* KEY_BALANCE = @"balance";
static NSString* KEY_TRANSACTION_ID = @"transaction_id";
static NSString* KEY_TRANSACTION_DATA = @"transaction_data";
static NSString* KEY_ATTACH = @"attach";

typedef void (^DappXCallback)(NSString* data);
@interface DappXListener : NSObject
@end

NS_ASSUME_NONNULL_END
