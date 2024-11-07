#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void bubbleSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {4, 1, 2, 5, 3};
    int totalIndex = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, totalIndex);
    printArray(arr, totalIndex);
}
