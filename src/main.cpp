#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "lib/lib.hpp"

int main(int argc, char const *argv[])
{
    std::vector<Point> points;
    Driver *driver = new Driver();

    points.push_back(Point(1.0, 2.0, 3.0));
    
    driver->openFile("output.txt", "a+");
    for (const auto &point : points)
    {
        std::ostringstream oss;
        oss << "(" << point.getX() << ", " << point.getY() << ", " << point.getZ() << ")";
        const std::string pointData = oss.str();
        driver->writeData(pointData);
        driver->writeData("\n");
    }
    driver->closeFile();
    return 0;
}
