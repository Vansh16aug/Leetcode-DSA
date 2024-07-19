#include <bits/stdc++.h>
vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashSet;
            for (int k = j + 1; k < n; k++)
            {
                long long fourth = target - (arr[i] + arr[j] + arr[k]);
                long long sum = arr[i] + arr[j] + arr[k] + fourth;
                if (hashSet.find(fourth) != hashSet.end())
                {
                    vector<int> temp;
                    temp = {arr[i], arr[j], arr[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashSet.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}