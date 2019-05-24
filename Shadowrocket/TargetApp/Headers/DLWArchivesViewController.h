//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DLWStatisticsReader, NSDateFormatter, NSMutableArray, NSString, UITableView;

@interface DLWArchivesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _loadMoreAvailable;
    UITableView *_tableView;
    DLWStatisticsReader *_reader;
    NSMutableArray *_data;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool loadMoreAvailable; // @synthesize loadMoreAvailable=_loadMoreAvailable;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) DLWStatisticsReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)sendTruncateTask;
- (void)loadMoreData;
- (void)reloadData;
- (void)UIControlEventValueChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)moreButtonTouched:(id)arg1;
- (void)setupMoreButton;
- (void)setupTableView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

