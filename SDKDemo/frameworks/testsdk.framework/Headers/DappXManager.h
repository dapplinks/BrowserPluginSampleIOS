//
//  DappXManager.h
//  testsdk
//
//  Created by coolman on 2019/6/11.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DappXListener.h"
#import "DappXBridge.h"
#import "AuthParams.h"
#import "BaseParams.h"
#import "SelectParams.h"
#import "SignParams.h"
#import "TransferParams.h"
#import "TransactionParams.h"

NS_ASSUME_NONNULL_BEGIN

@class Wallet;
@class Random;

@interface DappXManager : NSObject
@property (nonatomic, weak) DappXListener* listener;
@property (nonatomic, retain) NSMutableDictionary<NSString*, Wallet*> *mWallets;
@property (nonatomic, retain) Random *mRandom;

+(DappXManager*) getInstance;
-(void)select: (SelectParams*) params listener: (DappXCallback) listener;
-(void)auth: (AuthParams*) params listener:(DappXCallback) listener;
-(void)transfer: (TransferParams*) params listener:(DappXCallback) listener;
-(void)transaction: (TransactionParams*) params listener:(DappXCallback) listener;
-(void)sign: (SignParams*) params listener:(DappXCallback) listener;
- (BOOL)handleURL:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
@end

NS_ASSUME_NONNULL_END
