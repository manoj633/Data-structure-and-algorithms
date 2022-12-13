#include <iostream>
using namespace std;

// SNNNEWE -> NNE
// SNNEW -> SNN
int main()
{
    char route[100] = "SNNNEWE";

    // solution
    int x = 0;
    int y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }
    cout << "Value of x: " << x << " and y: " << y << endl;
    // First quadrant
    if (x >= 0 and y >= 0)
    {
        while (x--)
        {
            cout << "E";
        }
        while (y--)
        {
            cout << "N";
        }
    }

    // Second quadrant
    else if (x < 0 and y >= 0)
    {
        while (x++)
        {
            cout << "W";
        }
        while (y--)
        {
            cout << "N";
        }
    }

    // Third quadrant
    else if (x < 0 and y < 0)
    {
        while (x++)
        {
            cout << "W";
        }
        while (y++)
        {
            cout << "S";
        }
    }

    // Fourth quadrant
    else if (x >= 0 and y < 0)
    {
        while (x--)
        {
            cout << "E";
        }
        while (y++)
        {
            cout << "S";
        }
    }
    return 0;
}