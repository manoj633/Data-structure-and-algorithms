#include <iostream>
using namespace std;

int linearSearch(int n, int *arr, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, arr[100], value;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value to search for : " << endl;
    cin >> value;

    cout << value << " is found at index " << linearSearch(n, arr, value);
    return 0;
}