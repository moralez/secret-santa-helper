//
//  ParticipantTableViewController.h
//  secret-santa
//
//  Created by Johnny Moralez on 12/9/12.
//  Copyright (c) 2012 Bathroom Gaming. All rights reserved.
//

#import <UIKit/UIKit.h>

#define EXISTING_USERS_KEY @"existing"

@interface ParticipantTableViewController : UITableViewController

@property (nonatomic,retain) NSMutableDictionary *participants;
@property (nonatomic,retain) NSMutableArray      *groupParticipants;
@property (nonatomic,retain) NSMutableArray      *existingParticipants;

@end
