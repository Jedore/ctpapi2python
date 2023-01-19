cmake_minimum_required(VERSION 3.25.1)

project(ctpapi-python)

set(CMAKE_CXX_STANDARD 11)

SET(PY_VER "python_value" CACHE STRING "Python Version")
SET(PY_LIB "python_lib_value" CACHE STRING "Python Lib Version")

include_directories(${PROJECT_SOURCE_DIR}
	D:/pyenv/pyenv-win/versions/${PY_VER}/include
	)
link_directories(${PROJECT_SOURCE_DIR}
	D:/pyenv/pyenv-win/versions/${PY_VER}/libs
	)


if (${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	add_compile_options(/bigobj /MT)
	set(CMAKE_GENERATOR_PLATFORM x64)
else()
endif()

set(trader _thosttraderapi)
set(mduser _thostmduserapi)
add_library(${trader} SHARED thosttraderapi_wrap.cxx)
target_link_libraries(${trader} PUBLIC thosttraderapi_se python${PY_LIB})

add_library(${mduser} SHARED thostmduserapi_wrap.cxx)
target_link_libraries(${mduser} PUBLIC thostmduserapi_se python${PY_LIB})
