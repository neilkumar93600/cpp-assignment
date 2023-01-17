#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements in the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the array elements
    }
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) { // Compare each element with max
            max = arr[i]; // Update max if a larger element is found
        }
    }
    cout << "Largest element: " << max << endl;
    return 0;
}
