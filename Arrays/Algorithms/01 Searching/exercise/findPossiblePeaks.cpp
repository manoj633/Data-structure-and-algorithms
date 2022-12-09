#include <iostream>
#include <vector>
using namespace std;

void findPeak(vector<int> a)
{
    if (a[0] > a[1])
    {
        cout << a[0] << " ";
    }
    for (int i = 1; i < a.size() - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            cout << a[i] << " ";
        }
    }
    if (a[a.size() - 1] > a[a.size() - 2])
    {
        cout << a[a.size() - 1] << " ";
    }
}
int main()
{
    vector<int> arr = {10, 15, 15, 15, 23, 90, 67};
    findPeak(arr);
}