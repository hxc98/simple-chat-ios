//
//  ChatViewController.h
//  SimpleChat
//
//  Created by lzw on 15/5/13.
//  Copyright (c) 2015年 leancloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LeanMessageManager.h"

@interface ChatViewController : UIViewController

@property (nonatomic, strong) AVIMConversation *conversation;

@end
