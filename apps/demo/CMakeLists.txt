add_executable( Demo main.cpp )

target_link_libraries( Demo bar foo baz )
target_include_directories( Demo
                            PRIVATE
                            ${CMAKE_SOURCE_DIR}/modules/bar/inc
                            ${CMAKE_SOURCE_DIR}/modules/baz/inc
                            ${CMAKE_SOURCE_DIR}/modules/foo/inc )

# Set solution folders to apps
set_target_properties( Demo PROPERTIES FOLDER "apps" )

# Set as start up project
set_property( DIRECTORY ${PROJECT_SOURCE_DIR}
              PROPERTY VS_STARTUP_PROJECT Demo )

# Set PATH variable for this solution file
set( Demo_PATH
     "PATH=" )
     message(${CMAKE_BINARY_DIR} )
list( APPEND
      Demo_Bin_Folders
      ${CMAKE_BINARY_DIR}/modules/bar/Debug )
list( APPEND
      Demo_Bin_Folders
      ${CMAKE_BINARY_DIR}/modules/bar/Release )
list( APPEND
      Demo_Bin_Folders
      ${CMAKE_BINARY_DIR}/modules/baz/Debug )
list( APPEND
      Demo_Bin_Folders
      ${CMAKE_BINARY_DIR}/modules/baz/Release )
list( APPEND
      Demo_Bin_Folders
      ${CMAKE_BINARY_DIR}/modules/foo/Debug )
list( APPEND
      Demo_Bin_Folders
      ${CMAKE_BINARY_DIR}/modules/foo/Release )
foreach( bin_folder ${Demo_Bin_Folders} )
    set( Demo_PATH "${Demo_PATH}${bin_folder}\\;" )
endforeach()
set_target_properties( Demo
                       PROPERTIES VS_DEBUGGER_ENVIRONMENT
                       "${Demo_PATH}" )
