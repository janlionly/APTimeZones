//
//  JLTimeZoneCountry.h
//  JLTimeZoneCountry
//
//  Created by janlionly<jan_ron@qq.com> on 2019/8/14.
//  Copyright © 2019 Alterplay. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for JLTimeZoneCountry.
FOUNDATION_EXPORT double JLTimeZoneCountryVersionNumber;

//! Project version string for JLTimeZoneCountry.
FOUNDATION_EXPORT const unsigned char JLTimeZoneCountryVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JLTimeZoneCountry/PublicHeader.h>
#if __has_include("APTimeZones.h")
#import <JLTimeZoneCountry/APTimeZones.h>
#endif

#if __has_include("NSTimeZone+CountryCode.h")
#import <JLTimeZoneCountry/NSTimeZone+CountryCode.h>
#endif

#if __has_include("CLPlacemark+APTimeZones.h")
#import <JLTimeZoneCountry/CLPlacemark+APTimeZones.h>
#endif

#if __has_include("CLLocation+APTimeZones.h")
#import <JLTimeZoneCountry/CLLocation+APTimeZones.h>
#endif

