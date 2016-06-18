//
//  DetailViewController.h
//  MyNotepad
//
//  Created by Федосеева Евгения on 17.06.16.
//  Copyright © 2016 efedoseeva. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UITextView *tView;

@end

