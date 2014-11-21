//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SPCompanionAppServerProtocol <NSObject>
- (void)launchGizmoAppForCompanionAppWithIdentifier:(NSString *)arg1 withURLString:(NSString *)arg2;
- (void)sendTimingData:(NSDictionary *)arg1 identifier:(NSString *)arg2 clientIdentifiers:(NSArray *)arg3 index:(long long)arg4;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg2;
- (void)sendData:(NSData *)arg1 identifier:(NSString *)arg2 clientIdentifiers:(NSArray *)arg3;
- (void)sendCacheRequest:(NSData *)arg1 identifier:(NSString *)arg2;
@end

