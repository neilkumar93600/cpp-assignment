#include <iostream>

class Area {
    public:
        Area(double l, double b) {
            length = l;
            breadth = b;
        }

        double returnArea() {
            return length * breadth;
        }

    private:
        double length, breadth;
};

int main() {
    double l, b;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> l;
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> b;

    Area r(l, b);
    std::cout << "Area of the rectangle: " << r.returnArea() << std::endl;

    return 0;
}
