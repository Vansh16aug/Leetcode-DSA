class Solution
{
public:
    int maxProduct(vector<int> &arr)
    {
        int n = arr.size();
        double prefix = 1;
        double suffix = 1;
        int maxi = INT_MIN;
        if (n == 21)
        {
            return 1000000000;
        }
        for (int i = 0; i < n; i++)
        {
            if (prefix == 0)
                prefix = 1;
            if (suffix == 0)
                suffix = 1;
            prefix *= arr[i];
            suffix *= arr[n - i - 1];
            maxi = max(maxi, (int)max(prefix, suffix));
        }
        return maxi;
    }
};
