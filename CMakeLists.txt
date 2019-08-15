cmake_minimum_required(VERSION 3.5)
project(libpi VERSION 1.0.0 LANGUAGES CXX)

list(INSERT CMAKE_MODULE_PATH 0 ${CMAKE_SOURCE_DIR}/cmake)

add_library(pi
    src/pi.cpp
)

add_library(Pi::pi ALIAS pi)

target_include_directories(pi
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_features(pi PRIVATE cxx_auto_type)
target_compile_options(pi PRIVATE $<$<CXX_COMPILER_ID:GNU>:-Wall>)


include(GNUInstallDirs)
set(INSTALL_CONFIGDIR ${CMAKE_INSTALL_LIBDIR}/cmake/Pi)

install(TARGETS pi
    EXPORT pi-targets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

set_target_properties(pi PROPERTIES EXPORT_NAME Pi)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(EXPORT pi-targets
  FILE
    PiTargets.cmake
  NAMESPACE
    Pi::
  DESTINATION
    ${INSTALL_CONFIGDIR}
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/PiConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(${CMAKE_CURRENT_LIST_DIR}/cmake/PiConfig.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/PiConfig.cmake
    INSTALL_DESTINATION ${INSTALL_CONFIGDIR}
)

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/PiConfig.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/PiConfigVersion.cmake
    DESTINATION ${INSTALL_CONFIGDIR}
)

export(EXPORT pi-targets FILE ${CMAKE_CURRENT_BINARY_DIR}/PiTargets.cmake NAMESPACE Pi::)

export(PACKAGE Pi)

add_subdirectory(test)