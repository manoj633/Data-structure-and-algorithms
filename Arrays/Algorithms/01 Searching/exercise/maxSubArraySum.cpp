#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    int max_ele = A[0], sum = 0;
    // Here if we make max_ele as zero, then in scenarios where the maximum subArray sum is negative, output will
    // be given as 0 instead of the least negative number
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i; j < A.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum += A[k];
            }
            max_ele = max(max_ele, sum);
            sum = 0;
        }
    }
    return max_ele;
}

int main()
{
    vector<int> A = {-5, -1, -1, -2, -1};
    cout << maxSumSubarray(A);
}