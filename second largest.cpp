#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements in the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the array elements
    }
    int max1 = INT_MIN, max2 = INT_MIN; // Assume the initial maximums are the minimum integer value
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) { // Compare each element with max1
            max2 = max1;
            max1 = arr[i]; // Update max1 if a larger element is found
        } else if (arr[i] > max2 && arr[i] < max1) { // Compare each element with max2
            max2 = arr[i]; // Update max2 if a larger element is found
        }
    }
    cout << "Second largest element: " << max2 << endl;
    return 0;
}
