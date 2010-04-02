//
//  stalkerViewController.h
//  stalker
//
//  Created by Jevin Sweval on 2/4/10.
//  Copyright 2010 Purdue University. All rights reserved.
//

#import <UIKit/UIKit.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <fcntl.h>



@interface MainViewController : UIViewController <UITextViewDelegate> {
	UITextView *textView;
	UIButton *logButton;
	UILabel *label;
	
}

@property (nonatomic, retain) UITextView *textView;
@property (nonatomic, retain) UIButton *logButton;
@property (nonatomic, retain) UILabel *label;


@end