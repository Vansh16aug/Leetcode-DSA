class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int buyPrice = arr[0];
        int maxProfit = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            buyPrice = min(buyPrice, arr[i]);
            int sellPrice = arr[i] - buyPrice;
            maxProfit = max(sellPrice, maxProfit);
        }
        return maxProfit;
    }
};