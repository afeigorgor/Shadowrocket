//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@interface ZBarSymbolSet : NSObject <NSFastEnumeration>
{
    const struct zbar_symbol_set_s *set;
    _Bool filterSymbols;
}

@property(nonatomic) _Bool filterSymbols; // @synthesize filterSymbols;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) const struct zbar_symbol_set_s *zbarSymbolSet; // @dynamic zbarSymbolSet;
@property(readonly, nonatomic) int count; // @dynamic count;
- (void)dealloc;
- (id)initWithSymbolSet:(const struct zbar_symbol_set_s *)arg1;

@end

