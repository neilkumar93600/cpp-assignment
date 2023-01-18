#include <iostream>
#include <cmath>

class Triangle {
    public:
        Triangle(double a, double b, double c) {
            side1 = a;
            side2 = b;
            side3 = c;
        }

        double getArea() {
            double s = (side1 + side2 + side3) / 2;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }

        double getPerimeter() {
            return side1 + side2 + side3;
        }

    private:
        double side1, side2, side3;
};

int main() {
    Triangle t(3, 4, 5);
    std::cout << "Area: " << t.getArea() << std::endl;
    std::cout << "Perimeter: " << t.getPerimeter() << std::endl;
    return 0;
}
