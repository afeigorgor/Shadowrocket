//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RETableViewCell.h"

@class UILabel;

@interface DLWStatisticsTableViewCell : RETableViewCell
{
    UILabel *_interfaceLabel;
    UILabel *_inSpeedLabel;
    UILabel *_outSpeedLabel;
    UILabel *_wwanBytesLabel;
    UILabel *_wifiBytesLabel;
    UILabel *_proxyInBytesLabel;
    UILabel *_proxyOutBytesLabel;
    UILabel *_directInBytesLabel;
    UILabel *_directOutBytesLabel;
}

@property(nonatomic) __weak UILabel *directOutBytesLabel; // @synthesize directOutBytesLabel=_directOutBytesLabel;
@property(nonatomic) __weak UILabel *directInBytesLabel; // @synthesize directInBytesLabel=_directInBytesLabel;
@property(nonatomic) __weak UILabel *proxyOutBytesLabel; // @synthesize proxyOutBytesLabel=_proxyOutBytesLabel;
@property(nonatomic) __weak UILabel *proxyInBytesLabel; // @synthesize proxyInBytesLabel=_proxyInBytesLabel;
@property(nonatomic) __weak UILabel *wifiBytesLabel; // @synthesize wifiBytesLabel=_wifiBytesLabel;
@property(nonatomic) __weak UILabel *wwanBytesLabel; // @synthesize wwanBytesLabel=_wwanBytesLabel;
@property(nonatomic) __weak UILabel *outSpeedLabel; // @synthesize outSpeedLabel=_outSpeedLabel;
@property(nonatomic) __weak UILabel *inSpeedLabel; // @synthesize inSpeedLabel=_inSpeedLabel;
@property(nonatomic) __weak UILabel *interfaceLabel; // @synthesize interfaceLabel=_interfaceLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)attributedStringPrefixIcon:(id)arg1 text:(id)arg2;
- (void)cellWillAppear;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

