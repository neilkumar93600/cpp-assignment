#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 1, 9, 6, 3, 7, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_element = arr[0];
    int max_element = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min_element) {
            min_element = arr[i];
        } else if(arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    cout << "Difference between largest and smallest elements: " << max_element - min_element << endl;
    return 0;
}
