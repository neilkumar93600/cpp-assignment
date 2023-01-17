#include <iostream>
using namespace std;

class Swap {
    public:
        int num1, num2;

        Swap(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        void swapNumbers() {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        void print() {
            cout << "Num1: " << num1 << endl;
            cout << "Num2: " << num2 << endl;
        }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Swap s(n1, n2);
    cout << "Before swapping: " << endl;
    s.print();
    s.swapNumbers();
    cout << "After swapping: " << endl;
    s.print();
    return 0;
}
