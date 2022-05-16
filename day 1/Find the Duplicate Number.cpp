
```
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                n=nums[i];
                break;
            }
      }
        return n;
    }
};
```
//status - completed
