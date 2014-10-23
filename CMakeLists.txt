cmake_minimum_required(VERSION 2.8)
project("smash")
set(SFML_DIR "C:\\my\\SFML-2.1\\install")
add_executable(smash main.cpp ball.cpp)
target_include_directories(smash PUBLIC ${SFML_DIR}\\include)
target_compile_definitions(smash PUBLIC SFML_STATIC)
target_compile_options(smash PUBLIC "-mwindows")
find_package(OpenGL REQUIRED)
target_link_libraries(smash ${SFML_DIR}\\lib\\libsfml-main.a
                            ${SFML_DIR}\\lib\\libsfml-graphics-s.a
                            ${SFML_DIR}\\lib\\libsfml-window-s.a
                            ${SFML_DIR}\\lib\\libsfml-system-s.a
                            ${OPENGL_LIBRARIES})
