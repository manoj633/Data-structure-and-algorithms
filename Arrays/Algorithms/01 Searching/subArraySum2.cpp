#include <iostream>
using namespace std;

// Sub array sum calculation using prefix sum
// O(N^2)
int subArraySum(int n, int arr[])
{
    int prefix[10] = {0}, largestSum = 0;
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
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
    return 0;
}