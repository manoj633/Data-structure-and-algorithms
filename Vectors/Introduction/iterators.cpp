#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 1; i <= 5; i++)
    {
        vec.push_back(i);
    }

    cout << "Output of begin and end: ";
    for (auto i = vec.begin(); i < vec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "Output of cbegin and cend: ";
    for (auto i = vec.cbegin(); i < vec.cend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "Output of rbegin and rend: ";
    for (auto i = vec.rbegin(); i != vec.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "Output of crbegin and crend: ";
    for (auto i = vec.crbegin(); i != vec.crend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << endl;
    return 0;
}