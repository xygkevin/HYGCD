//
//  GCDTimer.h
//  HYGCD
//
//  Created by HEYANG on 16/3/16.
//  Copyright © 2016年 HEYANG. All rights reserved.
//
//  http://www.cnblogs.com/goodboy-heyang
//  https://github.com/HeYang123456789
//

#import <Foundation/Foundation.h>
@class GCDQueue;


@interface GCDTimer : NSObject
@property (strong, readonly, nonatomic) dispatch_source_t dispatchSource;

#pragma 初始化
- (instancetype)init;
- (instancetype)initInQueue:(GCDQueue *)queue;

#pragma mark - 用法
- (void)event:(dispatch_block_t)task timeInterval:(uint64_t)interval;
- (void)event:(dispatch_block_t)task timeInterval:(uint64_t)interval delay:(uint64_t)delay;
- (void)event:(dispatch_block_t)task timeIntervalWithSecs:(float)secs;
- (void)event:(dispatch_block_t)task timeIntervalWithSecs:(float)secs delaySecs:(float)delaySecs;


- (void)start;
- (void)suspend;
- (void)destroy;

@end
