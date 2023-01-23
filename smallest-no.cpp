#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 1, 9, 6, 3, 7, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first_smallest = arr[0];
    int second_smallest = arr[1];
    for(int i = 0; i < n; i++) {
        if(arr[i] < first_smallest) {
            second_smallest = first_smallest;
            first_smallest = arr[i];
        } else if(arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }
    cout << "Sum of two smallest elements: " << first_smallest + second_smallest << endl;
    return 0;
}
