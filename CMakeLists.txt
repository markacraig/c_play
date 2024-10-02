cmake_minimum_required(VERSION 3.28)
project (AlgorithmsInC LANGUAGES C)

# Version Number
set (AlgorithmsInC_VERSION_MAJOR 1)
set (AlgorithmsInC_VERSION_MINOR 0)

include_directories(
    include
    test/include
)

# Entry point for the executable
add_executable(AlgorithmsInC 
            main.c
            src/linked_list.c
            test/test_linked_list.c
)