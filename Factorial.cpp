#include <iostream>
using namespace std;

class Factorial {
    public:
        int number;

        Factorial(int num) {
            number = num;
        }

        int calculate() {
            int result = 1;
            for (int i = 1; i <= number; i++) {
                result *= i;
            }
            return result;
        }
};

int main() {
    int num;
    cin >> num;
    Factorial factorial(num);
    cout << "Factorial of " << num << " is " << factorial.calculate() << endl;
    return 0;
}

