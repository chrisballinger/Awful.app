//
//  AwfulThread.h
//  Awful
//
//  Created by Sean Berry on 7/27/10.
//  Copyright 2010 Regular Berry Software LLC. All rights reserved.
//

@class AwfulForum;

#define AwfulThreadRatingIsGold(rating) ((rating) >= 4)
#define AwfulThreadRatingIsShit(rating) ((rating) < 3)

typedef enum {
    AwfulStarCategoryBlue = 0,
    AwfulStarCategoryRed,
    AwfulStarCategoryYellow,
    AwfulStarCategoryNone
} AwfulStarCategory;

@interface AwfulThread : NSObject <NSCoding> {
    NSString *_threadID;
    NSString *_title;
    int _totalUnreadPosts;
    int _totalReplies;
    NSUInteger _threadRating;
    AwfulStarCategory _starCategory;
    NSURL *_iconURL;
    NSString *_authorName;
    NSString *_lastPostAuthorName;
    BOOL _seen;
    BOOL _isStickied;
    BOOL _isLocked;
    
    AwfulForum *_forum;
}

@property (nonatomic, strong) NSString *threadID;
@property (nonatomic, strong) NSString *title;
@property int totalUnreadPosts;
@property int totalReplies;
@property NSUInteger threadRating;
@property AwfulStarCategory starCategory;
@property (nonatomic, strong) NSURL *iconURL;
@property (nonatomic, strong) NSString *authorName;
@property (nonatomic, strong) NSString *lastPostAuthorName;
@property BOOL seen;
@property BOOL isStickied;
@property BOOL isLocked;
@property (nonatomic, strong) AwfulForum *forum;

@end
