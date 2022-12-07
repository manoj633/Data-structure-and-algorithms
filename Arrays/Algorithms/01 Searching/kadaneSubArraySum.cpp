#include <iostream>
using namespace std;

// Sub array sum calculation in Kadane's method
// Best solution for finding sub Array sum
// O(N)
int kadaneSubArraySum(int n, int arr[])
{
    int largestSum = 0, currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        largestSum = max(largestSum, currentSum);
    }
    return largestSum;
}
int main()
{
    int arr[10], n;
    cout << "Enter the numberof elements of array: " << endl;
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Largest sum of the subArray is: " << kadaneSubArraySum(n, arr);
}