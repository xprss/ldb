#pragma once

class Point
{
public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0);

    double getX() const { return x_; }
    double getY() const { return y_; }
    double getZ() const { return z_; }

    void setX(double x) { x_ = x; }
    void setY(double y) { y_ = y; }
    void setZ(double z) { z_ = z; }

private:
    double x_;
    double y_;
    double z_;
};
