#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int main ()
{
    // new a point cloud
    pcl::PointCloud<pcl::PointXYZ> cloud;
    std::string data_path = "/home/xiaosong/workspace/pcl_test/build/test_data.pcd";

    pcl::io::loadPCDFile<pcl::PointXYZ>(data_path, cloud);
    
    std::cout << "We have read: " << cloud.size() << " points! " << std::endl;
    std::cout << "cloud Height: " << cloud.height << std::endl;
    std::cout << "cloud Width: " << cloud.width << std::endl;
    return 0;
}