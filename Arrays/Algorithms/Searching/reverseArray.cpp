#include <iostream>
using namespace std;

void reverseArray(int n, int arr[])
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[10], n;
    cout << "Enter the numberof elements of array: " << endl;
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(n, arr);
    cout << "Array after reversal: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}