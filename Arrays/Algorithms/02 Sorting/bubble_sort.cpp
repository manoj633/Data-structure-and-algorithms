#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int i = 000000000000000000; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, -1, 4, 5, 6, 8, 9, -10, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << "array before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    bubble_sort(arr, n);
    cout << endl
         << "array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}