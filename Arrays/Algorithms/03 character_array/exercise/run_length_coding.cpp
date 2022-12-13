// Given a string aaabbccddee compress it to a3b2c2d2e2
// If compressed string length is greater than original string, then return original __cpp_raw_strings
// Input: abcd
// output: abcd

#include <iostream>
#include <string>
using namespace std;

string compressString(string s)
{
    int n = s.length();
    string output;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 and s[i + 1] == s[i])
        {
            count++;
            i++;
        }
        output += s[i];
        output += to_string(count);
    }
    if (output.length() > s.length())
    {
        return s;
    }
    return output;
}
int main()
{
    string s1 = "aaabbccddee";
    cout << compressString(s1) << endl;

    string s2 = "abcd";
    cout << compressString(s2);
}
