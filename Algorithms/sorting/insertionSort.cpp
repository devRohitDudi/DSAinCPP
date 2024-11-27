#include <iostream>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void insertionSort(int arr[], int n) // big O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) // change condition for descending order
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main()
{
    int arr[] = {1, 4, 6, 2, 3, 7, 5};
    int totalIndex = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, totalIndex);
    printArr(arr, totalIndex);
}