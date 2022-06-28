project(imgui LANGUAGES CXX)

message("Build external library - imgui - for project")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(imgui
    STATIC
        imgui.cpp
        imgui_demo.cpp
        imgui_draw.cpp
        imgui_tables.cpp
        imgui_widgets.cpp
        backends/imgui_impl_glfw.cpp
        backends/imgui_impl_opengl3.cpp
)
