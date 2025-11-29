#include <iostream>
#include <vector>

#include "lib/lib.hpp"

int main(int argc, char const *argv[])
{
    const std::vector<Point> points = {Point(1.0, 2.0), Point(3.0, 4.0), Point(5.0, 6.0)};
    Driver *driver = new Driver();
    std::cout << "Points in the vector:" << std::endl;
    for (const auto &point : points)
    {
        std::cout << "\t- Point coordinates: (" << point.getX() << ", " << point.getY() << ")" << std::endl;
    }
    driver->openFile("output.txt");
    const int i = driver->writeData("Sample data to write to file.");
    if (i == -1)
    {
        std::cerr << "Error writing data to file." << std::endl;
    }
    driver->closeFile();
    return 0;
}
