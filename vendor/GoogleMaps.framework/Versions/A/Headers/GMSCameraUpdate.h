//
//  GMSCameraUpdate.h
//  Google Maps SDK for iOS
//
//  Copyright 2013 Google Inc.
//
//  Usage of this SDK is subject to the Google Maps/Google Earth APIs Terms of
//  Service: https://developers.google.com/maps/terms
//

@class GMSCoordinateBounds;

/**
 * GMSCameraUpdate represents an update that may be applied to a GMSMapView.
 * It encapsulates some logic for modifying the current camera.
 * It should only be constructed using the factory helper methods below.
 */
@interface GMSCameraUpdate : NSObject

/**
 * Returns a GMSCameraUpdate that zooms in on the map.
 * The zoom increment is 1.0.
 */
+ (GMSCameraUpdate *)zoomIn;

/**
 * Returns a GMSCameraUpdate that zooms out on the map.
 * The zoom increment is -1.0.
 */
+ (GMSCameraUpdate *)zoomOut;

/**
 * Returns a GMSCameraUpdate that changes the zoom by the specified amount.
 */
+ (GMSCameraUpdate *)zoomBy:(CGFloat)delta;

/**
 * Returns a GMSCameraUpdate that sets the zoom to the specified amount.
 */
+ (GMSCameraUpdate *)zoomTo:(CGFloat)zoom;

/**
 * Returns a GMSCameraUpdate that sets the camera target to the specified
 * coordinate.
 */
+ (GMSCameraUpdate *)setTarget:(CLLocationCoordinate2D)target;

/**
 * Returns a GMSCameraUpdate that sets the camera target and zoom to the
 * specified values.
 */
+ (GMSCameraUpdate *)setTarget:(CLLocationCoordinate2D)target
                          zoom:(CGFloat)zoom;

/**
 * Returns a GMSCameraUpdate that sets the camera to the specified
 * GMSCameraPosition.
 */
+ (GMSCameraUpdate *)setCamera:(GMSCameraPosition *)camera;

/**
 * Returns a GMSCameraUpdate that transforms the camera such that the specified
 * bounds are centered on screen at the greatest possible zoom level. The bounds
 * will have a default padding of 64 points.
 *
 * The returned camera update will set the camera's bearing and tilt to their
 * default zero values (i.e., facing north and looking directly at the Earth).
 */
+ (GMSCameraUpdate *)fitBounds:(GMSCoordinateBounds *)bounds;

/**
 * This is similar to fitBounds: but allows specifying the padding (in points)
 * in order to inset the bounding box from the view's edges.
 */
+ (GMSCameraUpdate *)fitBounds:(GMSCoordinateBounds *)bounds
                   withPadding:(CGFloat)padding;

/**
 * Returns a GMSCameraUpdate that shifts the center of the view by the
 * specified number of points in the x and y directions.
 * X grows to the right, Y grows down.
 */
+ (GMSCameraUpdate *)scrollByX:(CGFloat)dX Y:(CGFloat)dY;

/**
 * Zoom with a focus point. The focus point stays fixed on screen.
 */
+ (GMSCameraUpdate *)zoomBy:(CGFloat)zoom atPoint:(CGPoint)point;

@end
