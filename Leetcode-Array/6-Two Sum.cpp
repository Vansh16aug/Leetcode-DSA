#include <bits/stdc++.h>
string read(int n, vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int j = n - 1;
    int i = 0;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
            return "YES";
        if (sum > target)
            j--;
        if (sum < target)
            i++;
    }
    return "NO";
}
