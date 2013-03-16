## HelloGoogleMaps - Google Maps SDK Sample with RubyMotion

![ScreenShot](https://raw.github.com/Watson1978/HelloGoogleMaps/master/screenshot/google_maps.png)

- Configure Your API KEY with `GOOGLE_MAP_API_KEY` in app_delegate.rb

## FYI
### Configuration

Google Maps SDK has only armv7 binary. So, we would not be able to build universal binary (ie, armv7, armv7s).

We need configuration to build armv7 binary only in your `Rakefile`:

```ruby
Motion::Project::App.setup do |app|
  ...
  app.archs['iPhoneOS'] = ['armv7']
  ...
end
```

### BridgeSupport
For the generation of `GoogleMaps.framework.bridgesupport`, we know that there is a bug (http://hipbyte.myjetbrains.com/youtrack/issue/RM-44).

So far, we need to modify its file manually like https://github.com/Watson1978/HelloGoogleMaps/commit/6f3785f23386a224fed9602aa085a6210c736832