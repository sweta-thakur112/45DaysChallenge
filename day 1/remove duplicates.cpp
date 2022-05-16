class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1;
        if(nums.size()==0)
            return 0;
        for(int j=0;j<nums.size()-1;j++)
        {
          if(nums[j]!=nums[j+1])
          {
              nums[c]=nums[j+1];
              c++;
          }
            
      }
        return c;
    }
};
