#include <iostream>
using namespace std;

// The issue with cin.get() is it reads on character at a time and there's no limit maintained.
// So if we try to push more it 'll result in segamentation fault errror.

// To over comethis we have cin.getline() which reads entire input at a time
// we can send in the maximum chars to read
// we can also specify our own chararray delimiter
// syntax: cin.getline(array_name, max_limit, delimiter_character);

int main()
{

    char para[1000];
    cout << "enter a string" << endl;
    cin.getline(para, 1000); // stops reading on encountering \n(user clicks enter)
    cout << para << endl;
    cout << "enter a string" << endl;
    cin.getline(para, 1000, '.');
    cout << "entered para: " << endl
         << para << endl;
    return 0;
}