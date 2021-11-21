#include(FetchContent)
cmake_minimum_required(VERSION 3.21.3)

project(myProgram VERSION 0.1.0)

add_executable(myProgram 
helloworld.cc
main.cc
)

# FIND PACKAGE INSTALLED ON OS
find_package(PkgConfig)
if (PKG_CONFIG_FOUND)
  pkg_check_modules(GTK "gtkmm-4.0")
  if (GTK_FOUND)    
    target_link_libraries(myProgram ${GTK_LIBRARIES})
    add_definitions(${GTK_CFLAGS} ${GTK_CFLAGS_OTHER})
  endif()
endif()


#FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/whoshuu/cpr.git GIT_TAG c8d33915dbd88ad6c92b258869b03aba06587ff9) # the commit hash for 1.5.0
#FetchContent_MakeAvailable(cpr)




set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
