class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {
        int ele;
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (count == 0)
            {
                count = 1;
                ele = arr[i];
            }
            else if (arr[i] == ele)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        int cnt1 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == ele)
                cnt1++;
        }

        if (cnt1 > (arr.size() / 2))
            return ele;
        return -1;
    }
};