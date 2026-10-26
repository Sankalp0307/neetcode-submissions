class Solution {
public:
    int findLucky(vector<int>& arr) 
    { 
       unordered_map<int,int>f;

       for(int i = 0; i < arr.size(); i++)
       {
        f[arr[i]]++;
       }  

        int great = -1;
       for(int i = 0; i < arr.size(); i++)
       {
         if(arr[i] == f[arr[i]])
         {
            great = arr[i];
         }
       }

       return great;
    }
};