//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKInterfaceObject : NSObject
{
    NSString *_interfaceProperty;
    NSString *_viewControllerID;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *viewControllerID; // @synthesize viewControllerID=_viewControllerID;
@property(copy, nonatomic) NSString *interfaceProperty; // @synthesize interfaceProperty=_interfaceProperty;
- (void).cxx_destruct;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_sendValueChanged:(id)arg1;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 index:(long long)arg3;
- (id)init;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;

@end

