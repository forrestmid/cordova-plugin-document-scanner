#import <Cordova/CDV.h>
@import IRLDocumentScanner;
#import <VisionKit/VisionKit.h>

@interface Scan : CDVPlugin <IRLScannerViewControllerDelegate>
@property CDVInvokedUrlCommand* commandglo;
- (void) scanDoc:(CDVInvokedUrlCommand*)command;

@end
