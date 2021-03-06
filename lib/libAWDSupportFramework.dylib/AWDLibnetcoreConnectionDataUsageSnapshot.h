/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    struct { 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
    } _has;
}

@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;

- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBytesIn;
- (BOOL)hasBytesOut;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setHasBytesIn:(BOOL)arg1;
- (void)setHasBytesOut:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
