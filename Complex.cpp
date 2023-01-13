#include <iostream>
using namespace std;

class Complex {
    public:
        int real, imag;

        Complex(int r, int i) {
            real = r;
            imag = i;
        }

        Complex add(Complex const &obj) {
            Complex res(real + obj.real, imag + obj.imag);
            return res;
        }

        void print() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    int real1, imag1, real2, imag2;
    cin >> real1 >> imag1 >> real2 >> imag2;
    Complex c1(real1, imag1);
    Complex c2(real2, imag2);
    Complex c3 = c1.add(c2);
    cout << "Resultant complex number: ";
    c3.print();
    return 0;
}
