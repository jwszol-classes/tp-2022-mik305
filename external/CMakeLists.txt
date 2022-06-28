project(imgui LANGUAGES CXX)

message("Build external library - imgui - for project")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/glad)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/imgui)

add_subdirectory(include)

set(EXTERNAL_INCLUDES
        ${CMAKE_CURRENT_SOURCE_DIR}/include/GLFW
        ${CMAKE_CURRENT_SOURCE_DIR}/include/fonts
        ${CMAKE_CURRENT_SOURCE_DIR}/include/glad
        ${CMAKE_CURRENT_SOURCE_DIR}/include/imgui
        ${CMAKE_CURRENT_SOURCE_DIR}/include/rapidjson/include
        ${CMAKE_CURRENT_SOURCE_DIR}/include/stb
    CACHE PATH "Path to includes for external libraries"
)

set(EXTERNAL_LIBS
        imgui
        glad
        glfw3
    CACHE STRING "List of names of required external libraries"
)

set(EXTERNAL_LINK_DIRS
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/GLFW
    CACHE PATH "External libraries location"
)
