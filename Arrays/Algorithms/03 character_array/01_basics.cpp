#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100] = {'a', 'b', 'c', 'd', 'e', 'c', 'd', 'e'};
    cout << s << endl; // prints garbage at end in some cases

    char a[100] = {'a', 'b', 'c', 'd', '\0'}; // null at end;
    cout << a << endl;

    cout << "Length of char array a = " << strlen(a) << endl;

    char b[100];
    cout << "Enter a string" << endl;
    cin >> b; // This doesn't work when we have whitespaces
    cout << "Value of b : " << b << endl;

        // cin.get() can be used to read whitespaces, it reads one char ata a time
    cout << "Enter a string" << endl;
    cin.get();
    char ch = cin.get();
    int i = 0;
    while (ch != '\n')
    {
        b[i] = ch;
        i++;
        ch = cin.get();
    }
    b[i] = '\0';
    cout << "Value of b : " << b << endl;

    return 0;
}