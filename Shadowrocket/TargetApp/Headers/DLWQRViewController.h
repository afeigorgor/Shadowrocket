//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "ZBarReaderViewDelegate-Protocol.h"

@class AVCaptureDevice, NSString, ZBarReaderView;

@interface DLWQRViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, ZBarReaderViewDelegate>
{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cancelBlock;
    ZBarReaderView *_zbarReaderView;
    AVCaptureDevice *_captureDevice;
}

@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) ZBarReaderView *zbarReaderView; // @synthesize zbarReaderView=_zbarReaderView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void).cxx_destruct;
- (void)readerView:(id)arg1 didStopWithError:(id)arg2;
- (void)readerView:(id)arg1 didReadSymbols:(id)arg2 fromImage:(id)arg3;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (_Bool)accessibilityPerformEscape;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)photoLibraryButtonTouched:(id)arg1;
- (void)setupPickButton;
- (void)torchButtonTouched:(id)arg1;
- (void)setupTorchButton;
- (_Bool)isCameraAuthorized;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

