# CMakeList.txt : CMake project for sweep, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_subdirectory ("vendor/glfw")
add_subdirectory ("vendor/glad")

# Add source to this project's executable.
add_executable (sweep "src/main.cpp" "src/Sweep/Engine/Window.h")

target_include_directories(sweep PUBLIC "vendor/glfw/include")

# Link vendors
target_link_libraries(sweep
	"glfw"
	"glad"
)