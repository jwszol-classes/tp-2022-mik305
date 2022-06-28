project(glad LANGUAGES C)

message("Build external library - glad - for project")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(glad
    STATIC
        glad.c
)
