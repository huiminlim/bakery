add_library( bar
             SHARED
             ${CMAKE_CURRENT_SOURCE_DIR}/inc/bar.hpp
             ${CMAKE_CURRENT_SOURCE_DIR}/src/bar.cpp )

target_include_directories( bar
                            PRIVATE
                            ${CMAKE_CURRENT_SOURCE_DIR}/inc )

target_link_libraries( bar
                       PRIVATE
                       binlog::headers
                       binlog::binlog )

# Set solution folders to Modules
set_target_properties( bar PROPERTIES FOLDER "modules" )
