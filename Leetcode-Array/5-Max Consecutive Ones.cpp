class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &arr)
    {
        int n = arr.size();
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++;
                if (count > maxCount)
                {
                    maxCount = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        return maxCount;
    }
};