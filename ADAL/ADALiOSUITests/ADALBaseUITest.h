// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <XCTest/XCTest.h>
#import "ADTestAccountsProvider.h"
#import "XCUIElement+ADALiOSUITests.h"

@interface ADALBaseUITest : XCTestCase

@property (nonatomic) XCUIApplication *testApp;
@property (nonatomic) ADTestAccountsProvider *accountsProvider;
@property (nonatomic) ADTestAccount *accountInfo;
@property (nonatomic) NSMutableDictionary *baseConfigParams;

- (NSMutableDictionary *)fociConfig;
- (NSMutableDictionary *)basicConfig;
- (NSMutableDictionary *)sovereignConfig;

- (void)assertRefreshTokenInvalidated;
- (void)assertAccessTokenExpired;
- (void)assertAuthUIAppear;
- (void)assertError:(NSString *)error;
- (void)assertAccessTokenNotNil;
- (void)assertRefreshTokenNotNil;

- (void)closeResultView;
- (void)invalidateRefreshToken:(NSString *)jsonString;
- (void)expireAccessToken:(NSString *)jsonString;
- (void)acquireToken:(NSString *)jsonString;
- (void)acquireTokenSilent:(NSString *)jsonString;
- (void)clearCache;
- (void)clearCookies;
- (void)aadEnterEmail:(NSString *)email;
- (void)aadEnterEmail;
- (void)closeAuthUI;

- (void)waitForElement:(id)object;
- (NSString *)configParamsJsonString:(NSMutableDictionary *)config
                    additionalParams:(NSDictionary *)additionalParams;
- (NSString *)configParamsJsonString:(NSDictionary *)additionalParams;
- (NSDictionary *)resultDictionary;

@end
