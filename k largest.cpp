#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n; // Input the number of elements in the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the array elements
    }
    cin >> k; // Input the value of k
    sort(arr, arr+n, greater<int>()); // Sort the array in descending order
    cout << "K largest elements: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " "; // Output the first k elements
    }
    cout << endl;
    return 0;
}
