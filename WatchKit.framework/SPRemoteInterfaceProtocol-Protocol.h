//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol SPRemoteInterfaceProtocol <NSObject>
- (void)dataInterfaceWillResignActive:(NSString *)arg1;
- (void)dataInterfaceDidBecomeActive:(NSString *)arg1;
- (void)applicationWillResignActive:(NSString *)arg1;
- (void)applicationDidBecomeActive:(NSString *)arg1;
- (void)applicationDidFinishConnecting:(NSString *)arg1;
- (void)applicationDidTerminate:(NSString *)arg1;
- (void)receiveProtoData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;
- (void)receiveData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;
@end

