//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZBarImage.h"

@class NSInvocationOperation;

@interface ZBarCVImage : ZBarImage
{
    struct __CVBuffer *pixelBuffer;
    void *rgbBuffer;
    NSInvocationOperation *conversion;
}

@property(readonly, nonatomic) void *rgbBuffer; // @synthesize rgbBuffer;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer;
- (void)convertCVtoRGB;
- (id)UIImageWithOrientation:(long long)arg1;
- (void)waitUntilConverted;
- (void)dealloc;

@end

