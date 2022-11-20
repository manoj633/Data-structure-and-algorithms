#include <iostream>
using namespace std;

// Sub array sum calculation in brute force method
int subArraySum(int n, int arr[])
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subArraySum += arr[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
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
    cout << "Largest sum of the subArray is: " << subArraySum(n, arr);
}