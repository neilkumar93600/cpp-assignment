#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements in the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the array elements
    }
    int maxCount = 1, res = arr[0], currCount = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) 
            currCount++;
        else {
            if (currCount > maxCount) {
                maxCount = currCount;
                res = arr[i - 1];
            }
            currCount = 1;
        }
    }
    if (currCount > maxCount) {
        maxCount = currCount;
        res = arr[n - 1];
    }
    cout << "The most occurring element is " << res << " with a frequency of " << maxCount << endl;
    return 0;
}
