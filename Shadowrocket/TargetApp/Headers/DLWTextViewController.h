//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface DLWTextViewController : UIViewController
{
    UITextView *_textView;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithText:(id)arg1;

@end

