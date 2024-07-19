class Solution
{
public:
    int lb(vector<int> &arr, int n, int k)
    {
        int low = 0;
        int high = n - 1;
        int first = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
            {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return first;
    }
    int ub(vector<int> &arr, int n, int k)
    {
        int low = 0;
        int high = n - 1;
        int last = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
            {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return last;
    }
    pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
    {

        int first = lb(arr, n, k);
        // if(first==-1) return {-1,-1};
        int last = ub(arr, n, k);

        return {first, last};
    }

    vector<int> searchRange(vector<int> &arr, int target)
    {
        pair<int, int> ans = firstAndLastPosition(arr, arr.size(), target);
        if (ans.first == -1)
            return {-1, -1};
        return {ans.first, ans.second};
    }
};