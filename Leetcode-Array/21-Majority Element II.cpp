class Solution
{
public:
    vector<int> majorityElement(vector<int> &arr)
    {
        int n = arr.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && ele2 != arr[i])
            {
                cnt1 = 1;
                ele1 = arr[i];
            }
            else if (cnt2 == 0 && ele1 != arr[i])
            {
                cnt2 = 1;
                ele2 = arr[i];
            }
            else if (ele1 == arr[i])
                cnt1++;
            else if (ele2 == arr[i])
                cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1 = 0;
        cnt2 = 0;
        int mini = int(n / 3) + 1;
        for (int i = 0; i < n; i++)
        {
            if (ele1 == arr[i])
                cnt1++;
            if (ele2 == arr[i])
                cnt2++;
        }
        if (cnt1 >= mini)
            ans.push_back(ele1);
        if (cnt2 >= mini)
            ans.push_back(ele2);

        return ans;
    }
};