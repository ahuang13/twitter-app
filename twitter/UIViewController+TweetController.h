//
//  UIViewController+TweetController.h
//  twitter
//
//  Created by Angus Huang on 2/7/14.
//  Copyright (c) 2014 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (TweetController)

- (void)onReplyToTweet:(Tweet *)originalTweet;
- (void)onFavoriteTweet:(Tweet *)tweet button:(UIButton *)favoriteButton label:(UILabel *)favoriteCountLabel;

- (void)retweetTweet:(Tweet *)originalTweet button:(UIButton *)retweetButton label:(UILabel *)retweetCountLabel;
- (void)unretweet:(Tweet *)originalTweet button:(UIButton *)retweetButton label:(UILabel *)retweetCountLabel;

@end
