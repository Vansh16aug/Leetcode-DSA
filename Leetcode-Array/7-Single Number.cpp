class Solution
{
public:
    int singleNumber(vector<int> &arr)
    {
        int n = arr.size();
        // int num=0;
        // for(int i=0;i<n;i+=2){
        //     if(arr[i]!=arr[i+1]){
        //         num = arr[i];
        //     }
        // }
        // return num;
        int xorr = 0;
        for (int i = 0; i < n; i++)
        {
            xorr = xorr ^ arr[i];
        }
        return xorr;
    }
};