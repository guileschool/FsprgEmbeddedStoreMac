//
//  FsprgLicense.h
//  FsprgEmbeddedStore
//
//  Created by Lars Steiger on 2/24/10.
//  Copyright 2010 FastSpring. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface FsprgLicense : NSObject {
	NSDictionary *raw;
}

+ (FsprgLicense *)licenseWithDictionary:(NSDictionary *)aDictionary;

- (FsprgLicense *)initWithDictionary:(NSDictionary *)aDictionary;
- (NSDictionary *)raw;
- (void)setRaw:(NSDictionary *)aDictionary;

- (NSString *)licenseName;
- (NSString *)licenseEmail;
- (NSString *)licenseCompany;
- (NSString *)firstLicenseCode;
- (NSArray *)licenseCodes;
- (NSDictionary *)licensePropertyList;
- (NSURL *)licenseURL;

@end
