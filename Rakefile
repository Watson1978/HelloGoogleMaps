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
  app.frameworks += %w{AVFoundation CoreData CoreLocation CoreText GLKit ImageIO OpenGLES QuartzCore SystemConfiguration}
  app.libs       += %w{/usr/lib/libicucore.dylib /usr/lib/libstdc++.dylib /usr/lib/libz.dylib}
end

require 'rubygems'
require 'rake/hooks'
before :device do
  # to avoid https://code.google.com/p/gmaps-api-issues/issues/detail?id=5018
  Motion::Project::App.setup do |app|
    app.vendor_project('vendor/fix_google_sdk_arm_issue',
      :xcode,
      :headers_dir => 'fix_google_sdk_arm_issue')
  end
end