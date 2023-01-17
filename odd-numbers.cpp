#include <iostream>
using namespace std;

class Sum {
    public:
        int sum;

        Sum() {
            sum = 0;
        }

        void calculate() {
            for (int i = 1; i <= 100; i++) {
                if (i % 2 != 0) {
                    sum += i;
                }
            }
        }
};

int main() {
    Sum s;
    s.calculate();
    cout << "Sum of odd numbers between 1 and 100 is " << s.sum << endl;
    return 0;
}
