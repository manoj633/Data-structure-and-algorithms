#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    cout << "vector elements: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;

    cout << "Using for loop to fill vector with 5 elements..." << endl;

    for (int i = 1; i <= 5; i++)
    {
        vec.push_back(i);
    }

    cout << "Size of vector is " << vec.size() << endl;

    // passing vector to a function
    display(vec);
    return 0;
}