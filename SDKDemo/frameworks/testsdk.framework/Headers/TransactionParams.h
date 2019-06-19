//
//  TransactionParams.h
//  testsdk
//
//  Created by coolman on 2019/6/11.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import "BaseParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface TransactionParams : BaseParams

@property (nonatomic, strong) NSMutableArray<NSString*>* actions;
@property (nonatomic, copy) NSString* from;
@property (nonatomic, copy) NSString* options;

@end

NS_ASSUME_NONNULL_END
