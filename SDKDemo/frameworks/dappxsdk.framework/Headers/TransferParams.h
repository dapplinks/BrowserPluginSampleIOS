//
//  TransferParams.h
//  testsdk
//
//  Created by coolman on 2019/6/11.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import "BaseParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface TransferParams : BaseParams

@property (nonatomic, retain) NSString* from;
@property (nonatomic, retain) NSString* to;
@property (nonatomic, retain) NSString* amount;
@property (nonatomic, assign) int precision;
@property (nonatomic, retain) NSString* symbol;
@property (nonatomic, retain) NSString* contract;
@property (nonatomic, retain) NSString* memo;

@end

NS_ASSUME_NONNULL_END
