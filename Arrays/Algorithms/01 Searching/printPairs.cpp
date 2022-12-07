#include <iostream>
using namespace std;

void printPairs(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        }
        cout << endl;
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

    printPairs(n, arr);
    return 0;
}