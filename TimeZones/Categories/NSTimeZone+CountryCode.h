//
//  NSTimeZone+CountryCode.h
//
//  Created by Jesse Armand on 27/2/13.
//
//

#import <Foundation/Foundation.h>

@interface NSTimeZone (CountryCode)

+ (NSString *)countryCodeFromLocalizedName;
- (NSString *)countryCode;
@end
