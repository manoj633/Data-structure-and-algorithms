#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100];
    int alpha = 0, digits = 0, spaces = 0;

    char ch = cin.get();
    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            spaces++;
        }
        ch = cin.get();
    }

    cout << "total character: " << alpha << endl;
    cout << "total digits: " << digits << endl;
    cout << "total Spaces: " << spaces << endl;
    return 0;
}