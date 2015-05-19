//
//  PointCloudRender.h
//  KirakiraVIEW
//
//  Created by Nacho on 19/05/2015.
//  Copyright (c) 2015 Jack Cho. All rights reserved.
//

#import <GLKit/GLKit.h>
#import <Structure/StructureSLAM.h>

@interface PointCloudRenderer : NSObject

@property (strong, nonatomic) EAGLContext *context;

- (PointCloudRenderer *)initWithCols:(size_t)cols rows:(size_t)rows;
- (void)setupGL;
- (void)tearDownGL;
- (GLKViewDrawableDepthFormat)drawableDepthFormat;
- (void)updateWithBounds:(CGRect)bounds
              projection:(GLKMatrix4)projection
               modelView:(GLKMatrix4)modelView
                invScale:(float)invScale;
- (void)glkView:(GLKView *)view drawInRect:(CGRect)rect;
- (void)updatePointsWithDepth:(STFloatDepthFrame*)depthFrame image:(CGImageRef)image;

@end

