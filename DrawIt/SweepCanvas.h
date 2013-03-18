//
//  SweepCanvas.h
//  DrawIt
//
//  Created by James Cryer on 18/03/2013.
//  Copyright (c) 2013 James Cryer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SweepCanvas : UIView {
    UIBezierPath *path;
    UIImage *incrementalImage;
    CGPoint pts[4]; // to keep track of the four points of our Bezier segment
    uint ctr; // a counter variable to keep track of the point index
}

@end
