// 2235 - Add two integer

#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
int main()
{
    int x, y;
    cout << "enter two numbers" << endl;
    cin >> x >> y;

    cout << "sum of two numbers" << add(x, y) << endl;
    return 0;
}