#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> numbers;

    for (int i = 1; i <= 5; i++)
        numbers.push_back(i);

    /* size(): This function returns the current number of elements in the vector. It tells
     * you how many elements are actually stored in the vector at the moment. */
    cout << "size : " << numbers.size() << endl;

    /*The capacity represents the number of elements the vector can hold before it needs to
     * allocate more memory. It's a measure of how much space has been reserved for the
     * elements, which may be greater than or equal to the size() of the vector.*/

    cout << "Capacity : " << numbers.capacity() << endl;

    /*  max_size(): This function returns the maximum number of elements the vector can
     * theoretically hold due to system or library implementation constraints. It doesn't mean
     * you can actually create a vector of this size; it's more like an upper limit. */
    cout << "max size : " << numbers.max_size() << endl;

    // resizes the vector size to 4
    numbers.resize(4);

    // prints the vector size after resize()
    cout << "Size : " << numbers.size();

    // checks if the vector is empty or not
    if (numbers.empty() == false)
        cout << "\nVector is not empty" << endl;
    else
        cout << "\nVector is empty" << endl;

    /* shrink_to_fit() request that the vector reduces its capacity to match its current size.
     * In other words, it tries to free up any excess memory that the vector may have * * *   * allocated for  future growth but is not currently being used. */

    numbers.shrink_to_fit();
    cout << "Capacity : " << numbers.capacity() << endl;

    for (auto i = numbers.begin(); i != numbers.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}