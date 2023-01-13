#include <iostream>
#include <algorithm>
using namespace std;

class Reverse {
    public:
        int number;
        int reverse_num;

        Reverse(int num) {
            number = num;
            reverse_num = 0;
        }

        int calculate() {
            int temp = number;
            while (temp != 0) {
                reverse_num = reverse_num * 10 + temp % 10;
                temp /= 10;
            }
            return reverse_num;
        }
};

int main() {
    int num;
    cin >> num;
    Reverse reverse(num);
    cout << "Reverse of " << num << " is " << reverse.calculate() << endl;
    return 0;
}
