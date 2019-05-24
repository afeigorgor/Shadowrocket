//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RETableViewItem.h"

@class NSArray, NSString, REInlinePickerItem;

@interface REPickerItem : RETableViewItem
{
    _Bool _inlinePicker;
    NSArray *_options;
    NSArray *_value;
    NSString *_placeholder;
    REInlinePickerItem *_inlinePickerItem;
    CDUnknownBlockType _onChange;
}

+ (id)itemWithTitle:(id)arg1 value:(id)arg2 placeholder:(id)arg3 options:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(retain, nonatomic) REInlinePickerItem *inlinePickerItem; // @synthesize inlinePickerItem=_inlinePickerItem;
@property(nonatomic) _Bool inlinePicker; // @synthesize inlinePicker=_inlinePicker;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSArray *value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)errors;
- (id)initWithTitle:(id)arg1 value:(id)arg2 placeholder:(id)arg3 options:(id)arg4;

@end

