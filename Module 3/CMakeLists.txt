cmake_minimum_required(VERSION 3.10)
project(main1)

# Explicitly set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(deal.II 8.0 REQUIRED
  HINTS ${deal.II_DIR} ${DEAL_II_DIR} ../ ../../ $ENV{DEAL_II_DIR})
find_package(fmt CONFIG REQUIRED)

# Initialize deal.II variables
deal_II_initialize_cached_variables()

# Define source files (adjust extension as needed)
set(TARGET_SRC main1.cpp)  # or use main1.cpp if that's your source file

# Create the executable target
add_executable(main1 ${TARGET_SRC})
target_link_libraries(main1 fmt::fmt)

# Setup deal.II target settings
# deal_II_invoke_autopilot()
deal_II_setup_target(main1)