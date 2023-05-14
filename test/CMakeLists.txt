
enable_testing()

# Prevent overriding the parent project's compiler/linker settings on Windows.
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(install_gtest OFF)
set(install_gmock OFF)
set(build_gmock OFF)

# This project is tested using GoogleTest.
add_subdirectory("../third_party/googletest" "googletest")

include_directories("../src")

set(UNIT_TEST UnitTest)
set(UNIT_TEST2 UnitTest2)
add_executable(${UNIT_TEST} unit_test.cpp)
target_link_libraries(${UNIT_TEST} base gtest_main)

add_executable(${UNIT_TEST2} unit_test2.cpp)
target_link_libraries(${UNIT_TEST2} base gtest_main)

add_test(NAME UnitTest COMMAND ${UNIT_TEST})
add_test(NAME UnitTest2 COMMAND ${UNIT_TEST2})
add_custom_target(run_unit_test ALL
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure )
