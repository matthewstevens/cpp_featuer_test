
add_library(CppFeatures structured_bindings.cpp regex_split.cpp)
target_include_directories(CppFeatures PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. )
