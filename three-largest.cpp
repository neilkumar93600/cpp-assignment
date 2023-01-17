#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements in the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the array elements
    }
    int max1 = arr[0], max2 = INT_MIN, max3 = INT_MIN; // Assume the first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) { // Compare each element with max1
            max3 = max2;
            max2 = max1;
            max1 = arr[i]; // Update max1 if a larger element is found
        } else if (arr[i] > max2) { // Compare each element with max2
            max3 = max2;
            max2 = arr[i]; // Update max2 if a larger element is found
        } else if (arr[i] > max3) { // Compare each element with max3
            max3 = arr[i]; // Update max3 if a larger element is found
        }
    }
    cout << "Largest three elements: " << max1 << ", " << max2 << ", " << max3 << endl;
    return 0;
}
