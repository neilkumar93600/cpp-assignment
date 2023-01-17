#include <iostream>
using namespace std;

class Numbers {
    public:
        int n;

        Numbers(int num) {
            n = num;
        }

        void print() {
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << endl;
        }
};

int main() {
    int num;
    cin >> num;
    Numbers numbers(num);
    cout << "Numbers from 1 to " << num << " : ";
    numbers.print();
    return 0;
}
