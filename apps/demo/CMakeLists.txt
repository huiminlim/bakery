add_executable( Demo main.cpp )

target_link_libraries( Demo bar foo baz )

# Set solution folders to apps
set_target_properties( Demo PROPERTIES FOLDER "apps" )
