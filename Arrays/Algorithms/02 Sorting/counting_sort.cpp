#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int arr[], int n)
{
    int maximum_ele = -1;
    for (int i = 0; i < n; i++)
    {
        maximum_ele = max(maximum_ele, arr[i]);
    }

    vector<int> freq(maximum_ele + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i] -= 1;
            j++;
        }
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
    counting_sort(arr, n);
    cout << endl
         << "array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}