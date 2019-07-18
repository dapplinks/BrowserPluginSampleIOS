//
//  SelectParams.h
//  testsdk
//
//  Created by coolman on 2019/6/11.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import "BaseParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface SelectParams : BaseParams

@property (nonatomic, retain) NSMutableArray<NSString*>* enabledWallets;

@end

NS_ASSUME_NONNULL_END
