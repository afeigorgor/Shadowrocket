//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DLWURLManager : NSObject
{
}

+ (id)parseSubscribeWithData:(id)arg1;
+ (_Bool)detectURLString:(id)arg1;
+ (id)urlStringWithConfig:(id)arg1;
+ (id)httpUrlStringWithConfig:(id)arg1;
+ (id)ssUrlStringWithConfig:(id)arg1;
+ (id)ssrUrlStringWithConfig:(id)arg1;
+ (id)configsWithUrlString:(id)arg1 error:(id *)arg2;
+ (id)configWithUrlString:(id)arg1 error:(id *)arg2;
+ (id)componentsWithUrlString:(id)arg1;
+ (id)ssrConfigWithUrlString:(id)arg1 error:(id *)arg2;
+ (id)parseVmessJson:(id)arg1;
+ (id)obfuscations;
+ (id)protocols;
+ (id)vmessMethods;
+ (id)methods;
+ (id)typeForScheme:(id)arg1;
+ (id)schemeForType:(id)arg1;
+ (id)schemes;

@end

