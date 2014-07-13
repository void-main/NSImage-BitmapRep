#import <Cocoa/Cocoa.h>

@interface NSImage (BitmapRep)

+ (NSImage *)imageOfBestRepresentationFrom:(NSURL *)url;
- (NSBitmapImageRep *)bitmapImageRepresentation;

@end
