//
//  UIImage+Exif.h
//  Pods
//
//  Created by Nikita Tuk on 12/02/15.
//
//

#import <UIKit/UIKit.h>

@class ExifContainer;

@interface UIImage (Exif)

+ (NSData *)addExifForImageData:(NSData *)imageData exif:(ExifContainer *)container;

@end
