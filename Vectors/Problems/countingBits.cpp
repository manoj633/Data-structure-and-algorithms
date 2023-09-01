// 338. Counting Bits

#include <iostream>
#include <vector>

using namespace std;

vector<int> countBits(int num)
{
    vector<int> ans(num + 1, 0);

    for (int i = 1; i < num + 1; i++)
    {
        ans[i] = ans[i / 2] + i % 2;
    }

    return ans;
}

int main()
{
    int num = 4;
    vector<int> x = countBits(num);
    for (int i = 0; i < num + 1; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}