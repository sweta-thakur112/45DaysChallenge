class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            { 
                if(nums[j]==k)
                { 
                    result.push_back(i);
                     result.push_back(j);
}
             }
        }
        return result;
    }
};
