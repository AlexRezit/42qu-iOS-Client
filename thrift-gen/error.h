/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import <TProtocol.h>
#import <TApplicationException.h>
#import <TProtocolUtil.h>
#import <TProcessor.h>


enum ErrorCode {
  ErrorCode_UNKNOWN = 1,
  ErrorCode_BAD_DATA_FORMAT = 2,
  ErrorCode_PERMISSION_DENIED = 3,
  ErrorCode_INTERNAL_ERROR = 4,
  ErrorCode_DATA_REQUIRED = 5,
  ErrorCode_LIMIT_REACHED = 6,
  ErrorCode_QUOTA_REACHED = 7,
  ErrorCode_INVALID_AUTH = 8,
  ErrorCode_AUTH_EXPIRED = 9,
  ErrorCode_DATA_CONFLICT = 10,
  ErrorCode_ENML_VALIDATION = 11,
  ErrorCode_SHARD_UNAVAILABLE = 12,
  ErrorCode_LEN_TOO_SHORT = 13,
  ErrorCode_LEN_TOO_LONG = 14,
  ErrorCode_TOO_FEW = 15,
  ErrorCode_TOO_MANY = 16,
  ErrorCode_UNSUPPORTED_OPERATION = 17
};

@interface UserException : NSException <NSCoding> {
  int __errorCode;
  NSString * __parameter;

  BOOL __errorCode_isset;
  BOOL __parameter_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=errorCode, setter=setErrorCode:) int errorCode;
@property (nonatomic, retain, getter=parameter, setter=setParameter:) NSString * parameter;
#endif

- (id) initWithErrorCode: (int) errorCode parameter: (NSString *) parameter;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int) errorCode;
- (void) setErrorCode: (int) errorCode;
- (BOOL) errorCodeIsSet;

- (NSString *) parameter;
- (void) setParameter: (NSString *) parameter;
- (BOOL) parameterIsSet;

@end

@interface SystemException : NSException <NSCoding> {
  int __errorCode;
  NSString * __message;

  BOOL __errorCode_isset;
  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=errorCode, setter=setErrorCode:) int errorCode;
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
#endif

- (id) initWithErrorCode: (int) errorCode message: (NSString *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int) errorCode;
- (void) setErrorCode: (int) errorCode;
- (BOOL) errorCodeIsSet;

- (NSString *) message;
- (void) setMessage: (NSString *) message;
- (BOOL) messageIsSet;

@end

@interface NotFoundException : NSException <NSCoding> {
  NSString * __identifier;
  NSString * __key;

  BOOL __identifier_isset;
  BOOL __key_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=identifier, setter=setIdentifier:) NSString * identifier;
@property (nonatomic, retain, getter=key, setter=setKey:) NSString * key;
#endif

- (id) initWithIdentifier: (NSString *) identifier key: (NSString *) key;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSString *) identifier;
- (void) setIdentifier: (NSString *) identifier;
- (BOOL) identifierIsSet;

- (NSString *) key;
- (void) setKey: (NSString *) key;
- (BOOL) keyIsSet;

@end

@interface errorConstants : NSObject {
}
@end