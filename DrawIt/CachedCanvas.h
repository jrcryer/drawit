//
//  CachedCanvas.h
//  DrawIt
//
//  Created by James Cryer on 18/03/2013.
//  Copyright (c) 2013 James Cryer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CachedCanvas : UIView {
    UIBezierPath *path;
    UIImage *incrementalImage;
}

@end
