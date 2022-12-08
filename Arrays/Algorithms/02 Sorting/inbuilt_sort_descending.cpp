#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    int arr[] = {1, 3, 4, 8, 4, 0};
    int n = sizeof(arr) / sizeof(int);
    cout << "array before sorting: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    sort(arr, arr + n, compare);
    cout << "array before sorting: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
}