cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(MY_GRAND_PROJECT)

# add pcl
find_package(PCL)

# add pcd writer file
add_executable(pcd_write_test pcd_write.cpp)
target_link_libraries(pcd_write_test ${PCL_LIBRARIES})

# add pcd read file
add_executable(pcd_read_test pcd_read.cpp)
target_link_libraries(pcd_read_test ${PCL_LIBRARIES})


