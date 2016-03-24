/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATMessage : NSObject <NSSecureCoding> {
    NSUUID *_messageUUID;
}

@property (nonatomic, retain) NSUUID *messageUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)messageUUID;
- (void)setMessageUUID:(id)arg1;

@end