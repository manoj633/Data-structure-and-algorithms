#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, element, j;
    for (i = 1; i < n; i++)
    {
        element = arr[i];
        j = i - 1; /* Move elements of arr[0..i-1], that are greater than key by one position */
        while (j >= 0 && arr[j] > element)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = element;
    }
}
int main()
{
    int arr[] = {5, 3, 2, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << endl
         << "array before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    insertion_sort(arr, n);
    cout << endl
         << "array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}