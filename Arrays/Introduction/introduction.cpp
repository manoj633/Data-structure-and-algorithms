#include <iostream>

using namespace std;

int main()
{
    int n, a[100], b[100] = {0}, c[100] = {1, 2, 3}, d[100] = {0};

    // Array filled with garbage values without initialization
    for (int i = 0; i < 100; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // All elements of array initialized to 0
    for (int i = 0; i < 100; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    // All elements of array initialized to 0 except the first three
    for (int i = 0; i < 100; i++)
    {
        cout << c[i] << " ";
    }

    // Reading input from user
    cout << endl
         << "Enter the size of array" << endl;
    cin >> n;
    cout << endl
         << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    // Outputting elements
    cout << endl
         << "Elements of the array are:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << d[i] << " ";
    }

    // Updating an element
    d[50] = 12;
    cout << endl
         << "Elements of the array are:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << d[i] << " ";
    }
}
