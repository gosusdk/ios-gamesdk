//
//  FacebookManager.h
//  GameSDK
//
//  Created by Nero-Macbook on 11/4/21.
//

#import <UIKit/UIKit.h>
#import "UserProfileResponse.h"
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>

@interface FacebookManager : NSObject {
    
}
+ (FacebookManager *) sharedInstance;
- (void) facebookLogin:(UIViewController *)viewMain andUserProfileCallback:(void (^)(UserProfileResponse *))userProfileCallback;
- (void) signOut;
//tracking
- (void) FBTrackingEnable;
- (void) FBTrackingUnEnable;
- (void) FBAppActive;
- (void) FBLogEvent:(NSString *)eventName parameters:(NSDictionary *)values;
- (void) FBLogPurchase:(double)amount andCurrency:(NSString *)currency;
@end
