#include <iostream>
#include <algorithm>
using namespace std;

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
    sort(arr, arr + n);
    cout << endl
         << "array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}