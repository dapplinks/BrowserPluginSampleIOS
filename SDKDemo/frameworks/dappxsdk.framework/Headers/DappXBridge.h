//
//  DappXBridge.h
//  testsdk
//
//  Created by coolman on 2019/6/12.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "Util.h"

NS_ASSUME_NONNULL_BEGIN

@class BaseParams;
@class SelectParams;

@interface DappXBridge : NSObject
@property (nonatomic, retain) WKWebView* mWebView;

//- (instancetype)init;
//- (instancetype)initWithWebView:(WKWebView*) webView;
/**
 为传入的参数对象赋值

 @param jo 数据
 @param params 参数对象
 */
+(void)createParams:(NSDictionary *)jo params:(BaseParams *)params;
/**
 获取脚本

 @param params 选择钱包的数据
 @return 脚本
 */
-(NSString*)getScript:(SelectParams*) params;

-(void)requestHttp:(NSString*)params callback:(DappXCallback)listener;

#pragma mark - Javascript
-(void)callback:(NSString*)callbackId result:(NSString*)result;
-(void)callFunction:(NSString*)name params:(NSString*)params callbackId: (NSString*)callbackId;
-(void)select:(NSString*)params callback: (DappXCallback)listener;
-(void)auth:(NSString*)params callback: (DappXCallback)listener;
-(void)transfer:(NSString*)params callback: (DappXCallback)listener;
-(void)transaction:(NSString*)params callback: (DappXCallback)listener;
-(void)sign:(NSString*)params callback: (DappXCallback)listener;
-(void)showSimpleDialog:(NSString*)params callback: (DappXCallback)listener;
-(void)showToast:(NSString*)params callback: (DappXCallback)listener;
#pragma mark -

@end

NS_ASSUME_NONNULL_END
