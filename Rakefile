# -*- coding: utf-8 -*-
$:.unshift("/Library/RubyMotion/lib")
require 'motion/project'

Motion::Project::App.setup do |app|
  # Use `rake config' to see complete project settings.
  app.name = 'HelloGoogleMaps'
  app.archs['iPhoneOS'] = ['armv7']
  app.vendor_project('vendor/GoogleMaps.framework',
    :static,
    :products    => %w{GoogleMaps},
    :headers_dir => 'Headers')
  app.resources_dirs << 'vendor/GoogleMaps.framework/Resources'
  app.frameworks += %w{AVFoundation CoreData CoreLocation CoreText GLKit ImageIO OpenGLES QuartzCore SystemConfiguration}
  app.libs       += %w{/usr/lib/libicucore.dylib /usr/lib/libc++.dylib /usr/lib/libz.dylib}
end
