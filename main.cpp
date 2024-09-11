#include<iostream>
#include"shape.h"

void printDetails(Shape inshape, int shapenum) {
    std::cout << "The area of Shape " << shapenum << " is " << inshape.getArea() << ", the width is " << inshape.getWidth() << ", and the height is " << inshape.getHeight() << ".\n";
}

int main() {
    Shape rectangle(15, 30);
    printDetails(rectangle, 1);
    Shape square(20, 20);
    printDetails(square, 2);
    square.SetDimensions(38, 38);
    printDetails(square, 3);
}