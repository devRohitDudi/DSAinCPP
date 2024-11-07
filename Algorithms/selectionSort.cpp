#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[si])
            {
                si = j;
            }
        }
        swap(arr[i], arr[si]);
    }
}

int main()
{
    int arr[] = {1, 4, 6, 2, 3, 7, 5};
    int totalIndex = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, totalIndex);
    printArr(arr, totalIndex);
}
