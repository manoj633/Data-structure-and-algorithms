// Given an array of integers A (sorted) and a integer Val.
// Implement a function that takes A and Val as input parameters and returns the lower bound of Val.
// Note : If Val is not present in array then Lower bound of a given integer means integer which is just
//  smaller than given integer.
// Otherwise Val itself is the answer.
// If Val is less than smallest element of array A then return '-1' in that case.
// Example 1  :

// A = [-1, -1, 2, 3, 5]
// Val = 4

// Answer :  3
// Since 3 is just smaller than 4 in the array.

// Example 2  :

// A = [1, 2, 3, 4, 6]
// Val = 4

// Answer :  4
// Since 4 is equal to 4.

#include <iostream>
#include <vector>
using namespace std;
int lowerBound(vector<int> A, int Val)
{
    if (Val < A[0])
    {
        return -1;
    }

    if (A[A.size() - 1] < Val)
    {
        return A[A.size() - 1];
    }

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] == Val)
        {
            return Val;
        }
        else if (A[i] < Val && A[i - 1] > Val)
        {
            return A[i];
        }
    }
}
int main()
{
    vector<int> A = {1, 2, 3, 4, 5};
    cout << lowerBound(A, 6);

    return 0;
}