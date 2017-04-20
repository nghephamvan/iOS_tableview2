//
//  AddTaskController.h
//  iOS_StoryBoard
//
//  Created by TMA103 on 4/19/17.
//  Copyright © 2017 TMA. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TaskListViewController;
@interface AddTaskController : UITableViewController
- (IBAction)btnCancel:(id)sender;
- (IBAction)btnDone:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *txtName;
@property (weak, nonatomic) TaskListViewController *taskListViewController;
@end
