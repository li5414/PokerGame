//
//  SCKSocket.h
//  服务器
//
//  Created by qianfeng on 15-11-23.
//  Copyright (c) 2015年 sunck. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <strings.h>

@interface SCKSocket : NSObject

//创建socket、绑定socket、监听socket
+(int)SCKNetMakeSocketWithPort:(int)nPort;
//等待客户端连接
+(int)SCKNetAcceptSocketWithSocket:(int)nSocket receiveClientIp:(NSMutableString *)address isBlock:(char)blockFlag;
//发送数据
+(NSUInteger)SCKNetWriteDataWithSocket:(int)nSocket data:(NSString *)dataString size:(int)lWriteSize;
//读取数据
+(NSUInteger)SCKNetReadDataWithSocket:(int)nSocket data:(NSMutableString *)readString size:(long)lReadSize;
//关闭socket
+(void)SCKNetCloseSocket:(int *)nSocket;

@end
