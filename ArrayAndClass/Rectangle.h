#include <cstdio>

class Rectangle
{
    int width, length, height;

public:
    Rectangle(){}
    Rectangle(const int &init_width, const int &init_height)
    :width(init_width), height(init_height)
    {}
    ~Rectangle(){}

    int area()
    {
        return width*height;
    }
    int perimeter()
    {
        return (width+height)*2;
    }

};
