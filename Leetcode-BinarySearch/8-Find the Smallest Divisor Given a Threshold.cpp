#include <bits/stdc++.h>
class Solution
{
public:
    // ex [1,2,5,9]
    int maxEle(vector<int> &arr, int n)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    // do 1/1,2/1,5/1,9/1 etc till max of arr ie (9)
    int calculateDivisor(vector<int> &arr, int threshold, int val, int n)
    {
        int totalOfDivisors = 0;
        for (int i = 0; i < n; i++)
        {
            totalOfDivisors += ceil((double)arr[i] / (double)val);
            if (totalOfDivisors > threshold)
                break;
        }
        return totalOfDivisors;
    }
    int smallestDivisor(vector<int> &arr, int threshold)
    {
        int n = arr.size();
        int low = 1;
        int high = maxEle(arr, n);

        // iterate through 1 to max ele of arr
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (calculateDivisor(arr, threshold, mid, n) <= threshold)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};