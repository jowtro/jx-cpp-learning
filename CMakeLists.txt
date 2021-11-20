#include(FetchContent)
cmake_minimum_required(VERSION 3.0.0)

project(learning VERSION 0.1.0)


add_executable(learning 
main.cpp
)

#FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/whoshuu/cpr.git GIT_TAG c8d33915dbd88ad6c92b258869b03aba06587ff9) # the commit hash for 1.5.0
#FetchContent_MakeAvailable(cpr)




set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

#target_link_libraries(learning PRIVATE cpr::cpr)
#target_compile_options(learning PRIVATE -DCPR_BUILD_TESTS=OFF)