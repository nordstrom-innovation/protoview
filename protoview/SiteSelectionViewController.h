//
//  SiteSelectionViewController.h
//  protoview
//
//  Created by Madison, Jon on 8/18/14.
//  Copyright (c) 2014 nordlab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SiteSelectionViewController : UIViewController <UICollectionViewDataSource,UICollectionViewDelegate,UIAlertViewDelegate>
@property (weak, nonatomic) IBOutlet UIBarButtonItem *buttonItemEditSites;
@property (weak, nonatomic) IBOutlet UICollectionView *sitesCollectionView;
@end
