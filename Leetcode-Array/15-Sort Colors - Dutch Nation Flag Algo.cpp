class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};