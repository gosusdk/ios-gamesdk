//
//  AppleIAP.h
//  GameSDK
//
//  Created by Nero-Macbook on 11/9/21.
//

#import <UIKit/UIKit.h>
#import "IAPDataRequest.h"
#import "IAPDelegate.h"
//use IAP
#import <StoreKit/StoreKit.h>

@interface AppleIAP : NSObject<SKProductsRequestDelegate, SKPaymentTransactionObserver> {
    
}

@property (nonatomic, strong) id<IAPDelegate> iAPDelegate;
@property (nonatomic, strong) IAPDataRequest *iAPDataRequest;
@property (nonatomic, assign) BOOL isIAP;

+ (AppleIAP *) sharedInstance;
- (void) showIAP:(IAPDataRequest *) iapData;
- (void)terminateIAP;
- (void) canMakePayments;
- (void)verifyPyConfirm:(id)payInfo;
@end
