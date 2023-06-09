//
//  securiOS-Logging.h
//  securiOS
//
//  Created by GeoSn0w on 3/9/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface securiOS_Logging : UIViewController
@property (weak, nonatomic) IBOutlet UITextView *securiOSLoggingWindow;
@property (weak, nonatomic) IBOutlet UITableView *securiOSTableView;
@property (weak, nonatomic) IBOutlet UIImageView *scanningImage;
@property (weak, nonatomic) IBOutlet UIButton *viewVulnerabilities;
@property (weak, nonatomic) IBOutlet UIButton *changeRootPassword;
@property (weak, nonatomic) IBOutlet UIProgressView *scannProgressbar;
@property (weak, nonatomic) IBOutlet UILabel *scanningLabel;
@property (weak, nonatomic) IBOutlet UIButton *backButton12;
@property (weak, nonatomic) IBOutlet UITextView *logmeeh;
@property (weak, nonatomic) IBOutlet UILabel *currentFile;
void respringDeviceNow(void);
extern BOOL shouldScan;
@end
NS_ASSUME_NONNULL_END
