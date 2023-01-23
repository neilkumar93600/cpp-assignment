#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 6, 2, 7, 8 , 7, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_element = arr[0];
    int max_count = 1;
    int current_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
                max_element = arr[i - 1];
            }
            current_count = 1;
        }
    }
    if (current_count > max_count) {
        max_count = current_count;
        max_element = arr[n - 1];
    }
    cout << "Element: " << max_element << endl;
    cout << "Frequency: " << max_count << endl;
    return 0;
}
