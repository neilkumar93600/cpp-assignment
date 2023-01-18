#include <iostream>

class Average {
    public:
        static double calculate(double a, double b, double c) {
            return (a + b + c) / 3;
        }
};

int main() {
    double a, b, c;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the third number: ";
    std::cin >> c;

    std::cout << "The average of the three numbers is: " << Average::calculate(a, b, c) << std::endl;

    return 0;
}
