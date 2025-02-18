//
//  MapViewController.m
//  Example
//
//  Created by Sergii Kryvoblotskyi on 11/11/13.
//  Copyright (c) 2013 Alterplay. All rights reserved.
//

#import "MapViewController.h"
#import "APTimeZones.h"
#import "NSTimeZone+CountryCode.h"

@implementation MapViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString *zone = [NSTimeZone countryCodeFromLocalizedName];
    NSLog(@"----%@", zone);
}

#pragma mark - MapView Delegates
- (void)mapView:(MKMapView *)mapView regionDidChangeAnimated:(BOOL)animated {
    
    CLLocation *location = [[CLLocation alloc] initWithLatitude:mapView.centerCoordinate.latitude
                                                      longitude:mapView.centerCoordinate.longitude];
    self.timeZoneLabel.text = [location.timeZone countryCode];
}

@end
