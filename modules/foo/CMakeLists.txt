add_library( foo
             SHARED
             ${CMAKE_CURRENT_SOURCE_DIR}/inc/foo.hpp
             ${CMAKE_CURRENT_SOURCE_DIR}/src/foo.cpp )

target_include_directories( foo
                            PRIVATE
                            ${CMAKE_CURRENT_SOURCE_DIR}/inc )

target_link_libraries( foo
                       PRIVATE
                       binlog::headers
                       binlog::binlog )

# Set solution folders to Modules
set_target_properties( foo PROPERTIES FOLDER "modules" )
