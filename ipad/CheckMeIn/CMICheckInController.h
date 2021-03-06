//
//  CheckInController.h
//  CheckMeIn
//
//  Created by Antonio MENDES PINTO on 17/09/11.
//  Copyright (c) 2011 Moodstocks. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ASIHTTPRequest.h"

#import "EGOImageView.h"

@interface CMICheckInController : UIViewController<ASIHTTPRequestDelegate, UITableViewDataSource, UITableViewDelegate> {
    ASIHTTPRequest *_request; 
    
    NSString *_accessToken;
        
    EGOImageView *userAvatarView;
        
    UILabel *title, *description;
    
    UIView *mainLayer;
    
    BOOL checkedIn;
}

@property (nonatomic, retain) IBOutlet UINavigationItem *navItem;
@property (nonatomic, retain) NSString *accessToken;
@property (nonatomic, retain) ASIHTTPRequest *request;

@property (nonatomic, retain) IBOutlet EGOImageView *userAvatarView;

@property (nonatomic, retain) IBOutlet UILabel *title, *description;

- (void) checkin;
- (void) loadInfos;

-(void) timeout;

@end
