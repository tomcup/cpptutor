cmake_minimum_required(VERSION 4.1.1)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD d0edc3af-4c50-42ea-a356-e2862fe7a444)

set(CMAKE_CXX_MODULE_STD TRUE)

project(Tutorial LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_features(${PROJECT_NAME}
	PUBLIC		cxx_std_23
	INTERFACE	cxx_std_20
)
