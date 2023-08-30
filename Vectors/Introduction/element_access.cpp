#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> numbers;
    /*
     * reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
     * at(g) – Returns a reference to the element at position ‘g’ in the vector
     * front() – Returns a reference to the first element in the vector
     * back() – Returns a reference to the last element in the vector
     * data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
     */

    for (int i = 1; i <= 5; i++)
    {
        numbers.push_back(i);
    }

    cout << "Vector elements: ";
    for (auto i = numbers.begin(); i != numbers.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << "\nReference operator [numbers] : numbers[2] = " << numbers[2];

    cout << "\nat operator : numbers.at(2) = " << numbers.at(2);

    cout << "\nfront operator : numbers.front() = " << numbers.front();

    cout << "\nback operator : numbers.back() = " << numbers.back();

    cout << "\ndata operator : numbers.data() = return poiter to first element = " << numbers.data();

    int *pos = numbers.data();
    cout << "\nelement at that position : " << *pos;

    return 0;
}