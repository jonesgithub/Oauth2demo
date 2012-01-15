//
//  Auth.h
//  testOauth2
//
//  Created by radio on 11-11-22.
//  Copyright (c) 2011年 pawdigits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"
#import "ASIFormDataRequest.h"
#import "cocos2d.h"
#import "CJSONDeserializer.h"
#import "CJSONSerializer.h"
#import "NSDictionary+QueryString.h"

//新浪
#define sinaAppKey @"yourKey"
#define sinaAppSecret @"yourSecrect"
#define sinaAuthBaseURL @"https://api.weibo.com/oauth2/authorize"
#define sinaCallBackURL @"http://www.zun1.com"
#define sinaAccessTokenURL @"https://api.weibo.com/oauth2/access_token"
#define sinaUserIdURL @"https://api.weibo.com/2/account/get_uid.json"
#define sinaUserInfoURL @"https://api.weibo.com/2/users/show.json"

@interface OAuthHelper : NSObject<UIWebViewDelegate,ASIHTTPRequestDelegate>{
    NSString *accessToken;
    UIWebView *webView;
    int uid;
}

- (void) getAccessToken;
- (void) getUserId;
- (void) getUserInfo;
- (void) getBlogByUid;
- (void) getWeiBo;
- (void) uploadWeibo;
- (void) uploadImageWeibo;

- (NSURL*) generateURL:(NSString*)baseURL params:(NSDictionary*)params;
- (NSString *) getStringFromUrl: (NSString*) url needle:(NSString *) needle;
- (void) saveAccessTokenToDisk;
- (void) viewSuccessPage:(NSURL*)url;
- (void) viewErrorPage:(NSURL*)url;
- (void) hiddenWebView;


@end