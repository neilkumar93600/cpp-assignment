#include <iostream>

class Complex {
    public:
        Complex(double r, double i) {
            real = r;
            imag = i;
        }

        Complex operator + (const Complex &c) {
            return Complex(real + c.real, imag + c.imag);
        }

        Complex operator - (const Complex &c) {
            return Complex(real - c.real, imag - c.imag);
        }

        Complex operator * (const Complex &c) {
            return Complex((real * c.real) - (imag * c.imag), (real * c.imag) + (imag * c.real));
        }

        void print() {
            std::cout << real << " + " << imag << "i" << std::endl;
        }

    private:
        double real, imag;
};

int main() {
    double r1, i1, r2, i2;
    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> r1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> i1;
    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> r2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;

    std::cout << "Sum: ";
    sum.print();
    std::cout << "Difference: ";
    diff.print();
    std::cout << "Product: ";
    prod.print();

    return 0;
}
