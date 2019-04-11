//
//  PlayDelegate.h
//  AFNetworking
//
//  Created by vuechain on 2019/4/11.
//

#ifndef PlayDelegate_h
#define PlayDelegate_h


#endif /* PlayDelegate_h */
@protocol PlayDelegate <NSObject>

@optional
/**  */
- (void)onPrepare;
/**  */
- (void)onStart;
/** 播放中 */
 - (void)onPlaying;
/** 暂停 */
- (void)onPause;

/** 完成 */
- (void)onCompelete;
@end
