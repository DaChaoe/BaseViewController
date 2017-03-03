//
//  BaseViewController.h
//  navBlock
//
//  Created by 李增超 on 2017/3/2.
//  Copyright © 2017年 李增超. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ReturnTextBlock)(NSString *showText);
@interface BaseViewController : UIViewController
@property (nonatomic, copy) ReturnTextBlock returnTextBlock;

- (void)returnText:(ReturnTextBlock)block;
@end
