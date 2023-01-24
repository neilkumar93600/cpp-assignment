#include <iostream>
using namespace std;
int calcArraySum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[n - 1];
    }
    return arr[n - 1] + calcArraySum(arr, n - 1);
}
int main()
{
    int arr[] = {1, 4, 5, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The sum of elements in a given array is" << calcArraySum(arr, n);
    return 0;
}