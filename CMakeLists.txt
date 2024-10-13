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
)

# Entry point for the test
add_executable(test_linked_list 
            test/test_linked_list.c
            src/linked_list.c
)

# Enable testing
enable_testing()

# Define tests
add_test(
    NAME test_linked_list
    COMMAND $<TARGET_FILE:test_linked_list>
)