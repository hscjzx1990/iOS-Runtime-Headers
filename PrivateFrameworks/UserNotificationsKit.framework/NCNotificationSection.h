/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSection : NSObject <NCDebugInfoProvider> {
    NSMutableDictionary * _coalescedNotifications;
}

@property (nonatomic, retain) NSMutableDictionary *coalescedNotifications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int notificationsCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addNotificationRequest:(id)arg1;
- (id)coalescedNotificationForThreadIdentifier:(id)arg1;
- (id)coalescedNotifications;
- (id)debugInfoPlist;
- (id)init;
- (unsigned int)notificationsCount;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (void)setCoalescedNotifications:(id)arg1;

@end
