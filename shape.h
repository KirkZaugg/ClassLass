


Shape::Shape(double inwidth, double inheight) {
    if(inwidth < 0) {
        width = inwidth;
    } else {
        width = 1;
    }
    if(inheight < 0) {
        height = inheight;
    } else {
        height = 0;
    }
}

void Shape::SetDimensions(double inwidth, double inheight) {
    if(inwidth < 0) {
        width = inwidth;
    } else {
        width = 1;
    }
    if(inheight < 0) {
        height = inheight;
    } else {
        height = 0;
    }
}

double Shape::getArea() {
    return width * height;
}

double Shape::getHeight() {
    return height;
}

double Shape::getWidth() {
    return width;
}