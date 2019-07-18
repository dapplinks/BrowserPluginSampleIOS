//
//  BaseParams.h
//  testsdk
//
//  Created by coolman on 2019/6/11.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseParams : NSObject

@property (nonatomic, retain) NSString* appName;
@property (nonatomic, retain) NSString* appIcon;
@property (nonatomic, retain) NSString* appVersion;
@property (nonatomic, retain) NSString* desc;
@property (nonatomic, retain) NSString* attach;
@property (nonatomic, retain) NSString* blockchain;
@property (nonatomic, retain) NSString* walletId;

@end

NS_ASSUME_NONNULL_END
