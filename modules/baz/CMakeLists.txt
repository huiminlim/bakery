add_library( baz
             SHARED
             ${CMAKE_CURRENT_SOURCE_DIR}/inc/baz.hpp
             ${CMAKE_CURRENT_SOURCE_DIR}/src/baz.cpp )

target_include_directories( baz
                            PRIVATE
                            ${CMAKE_CURRENT_SOURCE_DIR}/inc )

target_link_libraries( baz
                       PRIVATE
                       binlog::headers
                       binlog::binlog )

# Set solution folders to Modules
set_target_properties( baz PROPERTIES FOLDER "modules" )
