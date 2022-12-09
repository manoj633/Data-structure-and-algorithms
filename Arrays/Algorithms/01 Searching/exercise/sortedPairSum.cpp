#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    pair<int, int> p;
    int j = arr.size() - 1, min_dif = INT_MAX, i = 0;
    while (i < j)
    {
        if ((arr[i] + arr[j]) == x)
        {
            return std::make_pair(arr[i], arr[j]);
        }
        if (abs((arr[i] + arr[j]) - x) < min_dif)
        {
            min_dif = abs((arr[i] + arr[j]) - x);
            p = std::make_pair(arr[i], arr[j]);
        }
        if ((arr[i] + arr[j] - x) > 0)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return p;
}

int main()
{
    vector<int> A = {1, 3, 4, 7, 10};
    pair<int, int> p = closestSum(A, 0);
    cout << p.first << " " << p.second;
}
