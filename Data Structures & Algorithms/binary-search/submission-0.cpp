class Solution {
public:
    int search(vector<int>& arr, int target) 
    {
        int start = 0, end = arr.size()-1 , mid;

        while(start <= end)
        {
            mid = start + (end-start)/2;

            if(target == arr[mid])
            return mid;

            if(target > arr[mid])
            start = mid +1;

            else
            end = mid-1;
        }

        return -1;
    }
};
