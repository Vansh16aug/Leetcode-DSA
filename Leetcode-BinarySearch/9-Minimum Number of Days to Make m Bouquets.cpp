#include <bits/stdc++.h>
class Solution
{
public:
    bool possible(vector<int> &arr, int day, int totalB, int pairs)
    {
        int count = 0;
        int numberOfB = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= day)
                count++;
            else
            {
                numberOfB += (count) / pairs;
                count = 0;
            }
        }
        numberOfB += (count) / pairs;
        if (numberOfB >= totalB)
            return true;
        else
            return false;
    }
    int minDays(vector<int> &arr, int m, int k)
    {
        int n = arr.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        if ((long long)m * k > n)
            return -1;

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }

        int low = mini;
        int high = maxi;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (possible(arr, mid, m, k))
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return low;
    }
};