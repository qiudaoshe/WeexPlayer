

Pod::Spec.new do |s|

 

  s.name         = "QPlayer"
  s.version      = "1.0.0"
  s.summary      = "Handle some data."
  s.description  = <<-DESC
                    Handle the data.
                   DESC

  s.homepage     = "https://github.com/GlobalQiu"
  s.license      = "MIT"
  s.author             = "邱丘秋"
  s.source =  { :path => '.' }
  s.source_files  = "Source", "**/**/*.{h,m,mm,c}"
  s.resources = '*.bundle'
  s.ios.vendored_libraries = '*.a'
  s.ios.vendored_frameworks = '*.framework'

  s.exclude_files = "Source/Exclude"
   
  s.platform  = :ios, "8.0"
  
  s.frameworks = 'SystemConfiguration', 'CoreTelephony', 'UIKit', 'Foundation', 'CFNetwork','Security'
  s.libraries = "z", "sqlite3.0"
  s.requires_arc  = true

end
