cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(BOBbot_simulation VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)





add_executable(BOBbot_simulation BOBbot_simulation.cxx)


target_include_directories(BOBbot_simulation PUBLIC
                           "${PROJECT_BINARY_DIR}"

                           )

              