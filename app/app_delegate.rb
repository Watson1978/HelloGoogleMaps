GOOGLE_MAP_API_KEY = "YOUR_API_KEY"

class GoogleMapsController < UIViewController
  def loadView
    camera = GMSCameraPosition.cameraWithLatitude(35.689466, longitude: 139.700196, zoom: 15)
    @map_view = GMSMapView.mapWithFrame(CGRectZero, camera: camera)
    @map_view.myLocationEnabled = true
    self.view = @map_view

    options = GMSMarkerOptions.alloc.init
    options.position = CLLocationCoordinate2DMake(35.689466, 139.700196)
    options.title = "Shinjuku"
    options.snippet = "Japan"
    @map_view.addMarkerWithOptions(options)
  end
end

class AppDelegate
  def application(application, didFinishLaunchingWithOptions:launchOptions)
    GMSServices.provideAPIKey(GOOGLE_MAP_API_KEY)
    @window = UIWindow.alloc.initWithFrame(UIScreen.mainScreen.bounds)
    @window.rootViewController = GoogleMapsController.new
    @window.makeKeyAndVisible
    true
  end
end
