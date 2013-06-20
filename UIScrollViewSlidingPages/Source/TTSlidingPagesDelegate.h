//
//  TTSlidingPagesDelegate.h
//  UIScrollSlidingPages
//
//  Created by Yan Cheng on 13-6-20.
//  Copyright (c) 2013年 Thomas Thorpe. All rights reserved.
//

// 此文档由 SHARETOP 增加
// 提供分页滚动的事件回调

#import <Foundation/Foundation.h>

@class TTScrollSlidingPagesController;

@protocol TTSlidingPagesDelegate <NSObject>

-(void)pageSlideToFirst:(TTScrollSlidingPagesController*) source;
-(void)pageSlideToLast:(TTScrollSlidingPagesController*) source;

@end
