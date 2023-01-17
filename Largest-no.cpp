#include <iostream>
using namespace std;

class Largest {
    public:
        int num1, num2, num3;

        Largest(int n1, int n2, int n3) {
            num1 = n1;
            num2 = n2;
            num3 = n3;
        }

        int findLargest() {
            int largest = num1;
            if (num2 > largest) largest = num2;
            if (num3 > largest) largest = num3;
            return largest;
        }
};

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    Largest largest(n1, n2, n3);
    cout << "Largest among " << n1 << ", " << n2 << ", " << n3 << " is " << largest.findLargest() << endl;
    return 0;
}
