class Solution
{
public:
    bool search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
                return true;

            // check for duplicates
            if (arr[low] == arr[mid] && arr[mid] == arr[high])
            {
                high--;
                low++;
                continue;
            }

            // left half
            if (arr[low] <= arr[mid])
            {
                if (arr[low] <= target && arr[mid] >= target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            // right half
            else
            {
                if (arr[mid] <= target && arr[high] >= target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};