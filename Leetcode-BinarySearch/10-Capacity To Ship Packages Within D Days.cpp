#include <bits/stdc++.h>
class Solution
{
public:
    int sumArr(vector<int> &arr, int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
    int maxEle(vector<int> &arr, int n)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    int numberOfDays(vector<int> &arr, int n, int capacity)
    {
        int days = 1;
        int load = 0;
        for (int i = 0; i < n; i++)
        {
            if (load + arr[i] > capacity)
            {
                days++;
                load = arr[i];
            }
            else
            {
                load += arr[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int> &arr, int days)
    {
        int n = arr.size();
        int low = maxEle(arr, n);
        int high = sumArr(arr, n);

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (numberOfDays(arr, n, mid) <= days)
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