/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataInsertionJournalEntry : HDJournalEntry {
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}

@property (nonatomic, readonly) HKObject *dataObject;
@property (nonatomic, readonly) HDDataOriginProvenance *provenance;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 provenance:(id)arg2;
- (id)provenance;

@end
