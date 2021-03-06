/*
 *  This program is distributed under
 *  the terms of the MIT license.
 *  Please see the LICENSE file for details.
 */

#import <Foundation/Foundation.h>
#include "MyAlbum.h"

@interface Photo : NSObject
- (NSString*) caption;
- (void) setAlbum:(MyAlbum*)album;
@end
