class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0, j = 1;

   while (j < nums.size()) 
   {
    if (nums[i] != nums[j]) 
    {
        i++;
        nums[i] = nums[j]; // array se duplicate element remove kr rhe
    }
       j++;
   }

   return i + 1;// +1 isliye kyukki indexing 0 se start hoti hai 
    }
};