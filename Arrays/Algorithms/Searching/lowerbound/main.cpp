#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    pair<int, int> p;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         int sum = arr[i] + arr[j];
    //         if (sum == x)
    //         {
    //             return make_pair(arr[i], arr[j]);
    //         }
    //     }
    // }
    for (int i = 0; i < arr.size(); i++)
    {
        int j = arr.size() - 1, min_dif = INT_MAX;
        cout(min_dif);
        while (j>arr.size()/2)
        {
            if ((arr[i] + arr[j]) == x)
            {
                cout<<i<<" "<<j;
                return std::make_pair(arr[i], arr[j]);
            }
            if (abs((arr[i] + arr[j]) - x) < min_dif)
            {
                min_dif = abs((arr[i] + arr[j]) - x);
                p = std::make_pair(arr[i], arr[j]);

    cout<<i<<" "<<j<<endl;
                j--;
            } else {
                i++;
            }
        }
    }
    return p;
}

int main()
{
    vector<int> A = {10, 22, 28, 29, 30, 40};
    pair<int, int> p = closestSum(A, 54);
    cout << p.first << " " << p.second;
}
