//
//  ViewController.h
//  KirakiraVIEW
//
//  Created by Nacho on 19/05/2015.
//  Copyright (c) 2015 Jack Cho. All rights reserved.
//


#import <UIKit/UIKit.h>
#define HAS_LIBCXX
#import <Structure/Structure.h>
#import <GLKit/GLKit.h>

@interface ViewController : UIViewController <STSensorControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *cameraImageView;
@property (weak, nonatomic) IBOutlet UIImageView *depthImageView;
@property (strong, nonatomic) IBOutlet GLKView *pointCloudView;

@end


