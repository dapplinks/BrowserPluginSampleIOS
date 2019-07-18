# BrowserPluginSampleIOS
DAppLinks浏览器插件的iOS示例工程。

# 使用引导

## 相关文件

dappxsdk.framework
dappxsdkBundle.bundle
MODAppSDK.framework
TPSDK.framework
SCIOSTSDK.framework

放置于工程目录下

## 工程调整

设置General->Embedded Binaries 加入MODAppSDK.framework

关闭工程的bitcode选项

设置info 为工程设置scheme

设置info 加入跳转外部: LSApplicationQueriesSchemes -> tpoutside、meetone以及sciostwallet

##

## 修改WKWebView所在控制器

引入<dappxsdk/dappxsdk.h>

添加协议 WKScriptMessageHandler
  
添加变量 @property (nonatomic, copy) DappXBridge *bridge;

## WKWebView初始化，同时填写基本信息

在WebView初始化时，加入如下代码：

~~~
WKWebViewConfiguration *config = [[WKWebViewConfiguration alloc] init];
config.userContentController = [[WKUserContentController alloc] init];
[config.userContentController addScriptMessageHandler: self name: @"callFunction"];
bridge = [[DappXBridge alloc] init];
SelectParams *params = [[SelectParams alloc] init];
params.appName = @"Sample Test";
params.appIcon = @"http://download.dappx.com/static/assets/images/appicon.png";
NSString* script = [bridge getScript: ps];
[config.userContentController addUserScript: [[WKUserScript alloc] initWithSource: script injectionTime: WKUserScriptInjectionTimeAtDocumentEnd forMainFrameOnly: NO]];
~~~

在初始化WKWebView时，使用此config。

最后将初始化好的WKWebView传入bridge

~~~
[bridge setMWebView: webView];
~~~

## 修改didReceiveScriptMessage方法

注册callFunction回调

~~~
if ([message.name isEqualToString:@"callFunction"]) {
    NSDictionary *dict = message.body;
    NSString *name = [dict objectForKey:@"name"];
    NSString *params = [dict objectForKey:@"params"];
    NSString *callbackId = [dict objectForKey:@"callbackId"];
    [bridge callFunction:name params:params callbackId:callbackId];
}
~~~

## 基本信息

如果只想显示指定的钱包，就加入类似代码：

~~~
[params.enabledWallets addObject:@"TokenPocket"];
[params.enabledWallets addObject:@"MeetOne"];
[params.enabledWallets addObject:@"ShineChain"];
~~~
