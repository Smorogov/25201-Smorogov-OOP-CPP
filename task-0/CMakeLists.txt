cmake_minimum_required(VERSION 4.2)
project(task_0_2)

set(CMAKE_CXX_STANDARD 11)

add_executable(task_0 main.cpp
        FileReader.cpp
        FileReader.h
        FileWriter.cpp
        FileWriter.h
        Storage.cpp
        Storage.h
        WordStat.cpp
        WordStat.h
        Parser.cpp
        Parser.h)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tester_task0
        Parser.cpp
        Parser.h
        Storage.cpp
        Storage.h
        ParserTester.cpp
        StorageTester.cpp
        WordStat.cpp
        WordStat.h

)
target_link_libraries(
        tester_task0
        GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(tester_task0)