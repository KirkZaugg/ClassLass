#include"shape.h"

class Shape {
public:
    Shape(double inwidth, double inheight);
    void SetDimensions(double inwidth, double inheight);
    double getArea();
    double getWidth();
    double getHeight();
private:
    double width;
    double height;
};