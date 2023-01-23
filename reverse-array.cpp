#include <iostream>

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    reverseArray(arr, size);

    std::cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    return 0;
}
