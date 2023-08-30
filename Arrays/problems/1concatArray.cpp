// #1929 Concatenate array

#include <iostream>
#include <vector>

using namespace std;

vector<int> concat(vector<int> s)
{
    s.insert(s.end(), s.begin(), s.end());

    return s;
}

int main()
{
    vector<int> n, x;
    for (int i = 1; i <= 5; i++)
        n.push_back(i);

    x = concat(n);
    for (auto i = x.begin(); i != x.end(); i++)
        cout << *i << " ";
    return 0;
}