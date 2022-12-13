#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1 = "Hello world";
    cout << "S1 = " << s1 << endl;

    string s2("Hello world");
    cout << "s2 = " << s2 << endl;

    string s3;
    cout << "Enter a string: " << endl;
    getline(cin, s3);
    cout << "Entered string : " << s3 << endl;

    // for of can also be used
    for (char ch : s3)
    {
        cout << ch;
    }

    // vector of string
    int n;
    cout << "enter number of string" << endl;
    cin >> n;
    cin.get(); // to remove redundant \n
    vector<string> sarr;
    while (n--)
    {
        string temp;
        getline(cin, temp);
        sarr.push_back(temp);
    }

    // vector of strings
    cout << "entered string" << endl;
    for (string s : sarr)
    {
        cout << s << endl;
    }
    return 0;
}