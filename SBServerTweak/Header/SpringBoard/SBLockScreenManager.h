//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

//#import "SBLockScreenViewControllerDelegate.h"
//#import "SBUIBiometricEventMonitorDelegate.h"
//#import "SBUIBiometricEventObserver.h"

@class NSHashTable, NSMutableSet, NSString, SBLockScreenViewControllerBase, SBPasscodeEntryAlertViewController, SBPasscodeLockDisableAssertion;

@interface SBLockScreenManager : NSObject //<SBLockScreenViewControllerDelegate, SBUIBiometricEventObserver, SBUIBiometricEventMonitorDelegate>
{
    SBLockScreenViewControllerBase *_lockScreenViewController;
    BOOL _isUILocked;
    BOOL _isWaitingToLockUI;
    BOOL _appRequestedPasscodeEntry;
    BOOL _uiHasBeenLockedOnce;
    BOOL _uiUnlocking;
    SBPasscodeEntryAlertViewController *_passcodeEntryController;
    SBPasscodeLockDisableAssertion *_disablePasscodeLockWhileUIUnlockedAssertion;
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
    NSHashTable *_disableUnlockAssertions;
    BOOL _isInLostMode;
    unsigned int _failedMesaUnlockAttempts;
    BOOL _bioAuthenticatedWhileMenuButtonDown;
    NSMutableSet *_bioUnlockingDisabledRequesters;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)arg1;
@property(readonly) BOOL bioAuthenticatedWhileMenuButtonDown; // @synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown;
@property(nonatomic, getter=isUIUnlocking) BOOL UIUnlocking; // @synthesize UIUnlocking=_uiUnlocking;
@property(readonly) BOOL isWaitingToLockUI; // @synthesize isWaitingToLockUI=_isWaitingToLockUI;
@property(readonly) BOOL isUILocked; // @synthesize isUILocked=_isUILocked;
@property(readonly, nonatomic) SBLockScreenViewControllerBase *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)setBioUnlockingDisabled:(BOOL)arg1 forRequester:(id)arg2;
- (void)_frontmostDisplayChanged:(id)arg1;
- (void)_lockScreenDimmed:(id)arg1;
- (void)_bioAuthenticated:(id)arg1;
- (BOOL)biometricEventMonitorShouldRelockAfterBioUnlock:(id)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (BOOL)handleMenuButtonTap;
//- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)activationChanged:(id)arg1;
- (void)enableLostModePlugin;
- (BOOL)isInLostMode;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg1;
- (void)activateLostModeForRemoteLock:(BOOL)arg1;
- (void)_lockFeaturesForRemoteLock:(BOOL)arg1;
- (void)remoteLock:(BOOL)arg1;
- (void)_resetOrRestoreStateChanged:(id)arg1;
- (void)_deviceBlockedChanged:(id)arg1;
- (void)_deviceLockedChanged:(id)arg1;
- (BOOL)attemptUnlockWithPasscode:(id)arg1;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)_postLockCompletedNotification:(BOOL)arg1;
- (void)_removeDisableUnlockAssertion:(id)arg1;
- (void)_addDisableUnlockAssertion:(id)arg1;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (void)applicationRequestedDeviceUnlock;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (void)_handleExternalUIUnlock:(id)arg1;
- (void)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)_shouldAutoUnlockFromUnlockSource:(int)arg1;
- (void)_sendUILockStateChangedNotification;
- (void)_lockUI;
- (void)_setUILocked:(BOOL)arg1;
- (void)_relockUIForButtonPress:(BOOL)arg1 afterCall:(BOOL)arg2;
- (void)_activateLockScreenAnimated:(BOOL)arg1 automatically:(BOOL)arg2 inScreenOffMode:(BOOL)arg3 dimInAnimation:(BOOL)arg4 dismissNotificationCenter:(BOOL)arg5;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)shouldLockUIAfterEndingCall;
- (BOOL)_shouldLockAfterEndingFaceTimeCall;
- (BOOL)_shouldLockAfterEndingTelephonyCall;
- (BOOL)hasUIEverBeenLocked;
- (id)_newLockScreenController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

