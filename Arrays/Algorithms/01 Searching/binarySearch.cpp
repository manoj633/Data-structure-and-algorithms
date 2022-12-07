#include <iostream>
using namespace std;

int binarySearch(int n, int *arr, int value)
{
    int start = 0, end = n - 1;
    while (end >= start)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, arr[100], value, pos;

    cout << "Enter the number of elements: " << endl;
    cin >> n;
    cout << "Enter the elements in ascending order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Enter the vale to be searched " << endl;
    cin >> value;
    pos = binarySearch(n, arr, value);
    if (pos != -1)
    {
        cout << value << " is found at the positon " << pos;
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}