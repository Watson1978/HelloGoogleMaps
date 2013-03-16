//
//  GMSGroundOverlayOptions.h
//  Google Maps SDK for iOS
//
//  Copyright 2013 Google Inc.
//
//  Usage of this SDK is subject to the Google Maps/Google Earth APIs Terms of
//  Service: https://developers.google.com/maps/terms
//

#import <CoreLocation/CoreLocation.h>

/**
 * The default position of the ground anchor of a GMSGroundOverlay: the center
 * point of the icon.
 */
FOUNDATION_EXTERN const CGPoint kGMSGroundOverlayDefaultAnchor;

/** The default zoom level this overlay is displayed at. */
FOUNDATION_EXTERN const CGFloat kGMSGroundOverlayDefaultZoom;

@interface GMSGroundOverlayOptions : NSObject

/**
 * The position of this ground overlay, or more specifically, the physical
 * position of its anchor.
 */
@property (nonatomic, assign) CLLocationCoordinate2D position;

/**
 * As groundAnchor on GMSMarker.  Specifies where the overlay is anchored to the
 * earth in relation to its position.
 */
@property (nonatomic, assign) CGPoint anchor;

/** Icon to render on the earth.  Unlike for GMSMarker, this is required. */
@property (nonatomic, strong) UIImage *icon;

/**
 * The zoom level at which this ground overlay is displayed at 1:1.  This value
 * is clamped in the range [kGMSMinZoomLevel, kGMSMaxZoomLevel].
 */
@property (nonatomic, assign) CGFloat zoomLevel;

/**
 * Bearing of this ground overlay, in degrees.  The default value, zero, points
 * this overlay up/down along the normal Y axis of the earth.
 */
@property (nonatomic, assign) CLLocationDirection bearing;

/** Convenience constructor for default initialized options. */
+ (GMSGroundOverlayOptions *)options;

@end
