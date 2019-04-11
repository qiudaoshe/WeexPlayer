//
//  QPlayer.h
//  AFNetworking
//
//  Created by vuechain on 2019/4/11.
//

#import "WXComponent.h"
#import "SPVideoPlayerView.h"
#import <WeexSDK/WXEventModuleProtocol.h>
#import <WeexSDK/WXModuleProtocol.h>
#import "PlayDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface QPlayer : WXComponent<WXModuleProtocol,SPVideoPlayerDelegate,PlayDelegate>
//@property(strong,nonatomic) MCPlayerKit *playerKit;
@property(strong,nonatomic) NSString *src;
@property(strong,nonatomic) NSString *title;
@property(strong,nonatomic) NSString *img;
@property(strong,nonatomic)  SPVideoPlayerView *video;
@property(strong,nonatomic)  UIImageView *placeholder;
@property(nonatomic) BOOL autoPlay;

@end

NS_ASSUME_NONNULL_END
