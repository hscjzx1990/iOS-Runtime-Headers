/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxLeDeviceDiscovered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int rssi : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _peerId;
    int  _rssi;
    NSString * _sessionId;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic, readonly) BOOL hasPeerId;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic, readonly) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *peerId;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPeerId;
- (BOOL)hasRssi;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (BOOL)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionId;
- (void)setHasRssi:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setPeerId:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (void)writeTo:(id)arg1;

@end
