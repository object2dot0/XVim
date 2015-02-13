//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
// UUID: 5F7F06FA-1F0E-345C-B16C-87EDB2ABB499
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 68.1.5.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol LAContextManager
- (void)connectToContext:(NSData *)arg1 uiDelegate:(id <LAUIDelegate>)arg2 reply:(void (^)(id <LAContextXPC>, NSDictionary *, NSError *))arg3;
@end

@protocol LAContextXPC
- (void)enterPassword:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(NSError *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)evaluateACL:(NSData *)arg1 operation:(id)arg2 options:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
@end

@interface LAClient : NSObject <LAContextXPC>
{
    id <LAContextXPC> _remoteContext;
    NSXPCConnection *_daemonConnection;
    NSError *_permanentError;
    NSMutableArray *_callInvalidationBlocks;
    NSString *_creatorDisplayName;
    NSData *_externalizedContext;
}

+ (void)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (id)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 error:(id *)arg3;
@property(readonly) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(readonly) NSString *creatorDisplayName; // @synthesize creatorDisplayName=_creatorDisplayName;
- (void).cxx_destruct;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_setPermanentError:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDaemonConnection:(id)arg1 remoteContext:(id)arg2 constInfo:(id)arg3;

@end

@interface LAContext : NSObject
{
    LAClient *_client;
    _Bool _cancelButtonVisible;
    _Bool _fallbackButtonVisible;
    NSString *_localizedFallbackTitle;
    NSString *_creatorDisplayName;
    NSData *_externalizedContext;
}

@property(nonatomic, getter=isFallbackButtonVisible) _Bool fallbackButtonVisible; // @synthesize fallbackButtonVisible=_fallbackButtonVisible;
@property(nonatomic, getter=isCancelButtonVisible) _Bool cancelButtonVisible; // @synthesize cancelButtonVisible=_cancelButtonVisible;
@property(retain) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(retain) NSString *creatorDisplayName; // @synthesize creatorDisplayName=_creatorDisplayName;
@property(copy, nonatomic) NSString *localizedFallbackTitle; // @synthesize localizedFallbackTitle=_localizedFallbackTitle;
- (void).cxx_destruct;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)canEvaluatePolicy:(long long)arg1 error:(id *)arg2;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id *)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithUIDelegate:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1;
- (id)init;

@end

