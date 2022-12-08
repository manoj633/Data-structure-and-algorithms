#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int min_ele_pos = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_ele_pos])
            {
                min_ele_pos = j;
            }
        }
        swap(arr[i], arr[min_ele_pos]);
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
    selection_sort(arr, n);
    cout << endl
         << "array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}