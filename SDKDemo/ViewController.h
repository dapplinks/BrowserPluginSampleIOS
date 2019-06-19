//
//  ViewController.h
//  SDKDemo
//
//  Created by coolman on 2019/6/19.
//  Copyright © 2019 mylove39. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <testsdk/testsdk.h>

@interface ViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler>

@property (nonatomic, copy) DappXBridge *bridge;

@end

