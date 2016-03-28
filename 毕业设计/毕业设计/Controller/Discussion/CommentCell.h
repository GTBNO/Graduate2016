//
//  CommentCell.h
//  毕业设计
//
//  Created by lanou on 16/3/28.
//  Copyright © 2016年 SK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Comment.h"

@interface CommentCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *commenterLabel;
@property (weak, nonatomic) IBOutlet UILabel *contentLabel;

@property (weak, nonatomic) IBOutlet UILabel *commenteeLabel;
@property (nonatomic,strong) Comment *comment;  

@end
