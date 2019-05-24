//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWViewController.h"

#import "GCDAsyncSocketDelegate-Protocol.h"

@class GCDAsyncSocket, NSMutableArray, NSObject, NSString, RETableViewItem;
@protocol OS_dispatch_queue;

@interface DLWCertificateViewController : DLWViewController <GCDAsyncSocketDelegate>
{
    unsigned long long _backgroundUpdateTask;
    GCDAsyncSocket *_serverSocket;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSString *_certSubject;
    RETableViewItem *_certButtonItem;
    RETableViewItem *_installButtonItem;
    RETableViewItem *_deleteButtonItem;
}

@property(retain, nonatomic) RETableViewItem *deleteButtonItem; // @synthesize deleteButtonItem=_deleteButtonItem;
@property(retain, nonatomic) RETableViewItem *installButtonItem; // @synthesize installButtonItem=_installButtonItem;
@property(retain, nonatomic) RETableViewItem *certButtonItem; // @synthesize certButtonItem=_certButtonItem;
@property(copy, nonatomic) NSString *certSubject; // @synthesize certSubject=_certSubject;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) GCDAsyncSocket *serverSocket; // @synthesize serverSocket=_serverSocket;
@property(nonatomic) unsigned long long backgroundUpdateTask; // @synthesize backgroundUpdateTask=_backgroundUpdateTask;
- (void).cxx_destruct;
- (void)UIApplicationDidBecomeActiveNotification;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)sendCertResponseWithSocket:(id)arg1;
- (void)sendTrustedResponseWithSocket:(id)arg1;
- (void)sendFrameResponseWithSocket:(id)arg1;
- (void)sendEmptyResponseWithSocket:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)tableView:(id)arg1 willLoadCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)generateRandomString:(int)arg1;
- (_Bool)trustEvaluateWithData:(id)arg1 password:(id)arg2;
- (void)installCACertificate;
- (void)generateCACertificateWithBlock:(CDUnknownBlockType)arg1;
- (void)reloadCertButtonItemWithP12:(id)arg1 password:(id)arg2;
- (void)reloadInstallButtonItem;
- (void)reloadDeleteButtonItem;
- (void)refreshButtonTouched;
- (void)setupTableViewManager;
- (void)setupRefreshButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

