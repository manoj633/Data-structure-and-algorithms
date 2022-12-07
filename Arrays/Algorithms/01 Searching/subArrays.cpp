#include <iostream>
using namespace std;

void subArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
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
    subArray(n, arr);
}