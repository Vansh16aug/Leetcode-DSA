class Solution
{
public:
    int binarySearch(vector<int> &arr, int low, int high, int target)
    {
        int mid = (low + high) / 2;
        if (low > high)
            return -1;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);
        else
            return binarySearch(arr, mid + 1, high, target);
    }
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        return binarySearch(arr, low, high, target);
    }
};