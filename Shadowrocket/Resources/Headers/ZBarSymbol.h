//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ZBarSymbolSet;

@interface ZBarSymbol : NSObject
{
    const struct zbar_symbol_s *symbol;
}

+ (id)nameForType:(int)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) ZBarSymbolSet *components;
@property(readonly, nonatomic) const struct zbar_symbol_s *zbarSymbol; // @dynamic zbarSymbol;
@property(readonly, nonatomic) int orientation;
@property(readonly, nonatomic) int count; // @dynamic count;
@property(readonly, nonatomic) int quality; // @dynamic quality;
@property(readonly, nonatomic) NSString *data; // @dynamic data;
@property(readonly, nonatomic) unsigned long long modifierMask; // @dynamic modifierMask;
@property(readonly, nonatomic) unsigned long long configMask; // @dynamic configMask;
@property(readonly, nonatomic) NSString *typeName; // @dynamic typeName;
@property(readonly, nonatomic) int type; // @dynamic type;
- (void)dealloc;
- (id)initWithSymbol:(const struct zbar_symbol_s *)arg1;

@end

