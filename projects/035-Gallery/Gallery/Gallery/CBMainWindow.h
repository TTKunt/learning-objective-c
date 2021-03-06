#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@interface CBMainWindow : NSWindowController

// outlets
@property (retain) IBOutlet NSSegmentedControl*  viewSelectionControl;

// view management properties
@property (retain) NSMutableDictionary* viewControllers;
@property (assign) NSViewController*    currentViewController;
@property (copy)   NSArray*             controllerNamesByIndex;

// view management methods
- (IBAction) viewSelectionDidChange:(id)sender;
- (void) activateViewController: (NSViewController*)controller;
- (NSViewController*) viewControllerForName: (NSString*)name;

@end