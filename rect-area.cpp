#include <iostream>

class Rectangle {
    public:
        Rectangle(double l, double b) {
            length = l;
            breadth = b;
        }

        double Area() {
            return length * breadth;
        }

    private:
        double length, breadth;
};

int main() {
    Rectangle r1(4, 5);
    std::cout << "Area of rectangle 1: " << r1.Area() << std::endl;

    Rectangle r2(5, 8);
    std::cout << "Area of rectangle 2: " << r2.Area() << std::endl;

    return 0;
}
