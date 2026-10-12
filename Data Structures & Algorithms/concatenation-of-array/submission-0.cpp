class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    { 
        int a = nums.size();
        vector<int>arr(2*a,0);
        for(int i = 0; i < a; i++)
        {
            arr[i] = nums[i];
        }
        for(int i = a; i < a+a; i++)
        {
            arr[i] = nums[i - a];
        }

        return arr;

    }
};