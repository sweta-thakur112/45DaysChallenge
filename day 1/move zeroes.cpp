class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // initialize two pointers
        int j = 0;
        int n = nums.size();
        
        while(i < n) { 
            if(nums[i] != 0) {  // if first pointer is not equal to 0, we swap it with second pointer.
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else {   // else we just move forward with first pointer.
                i++;
            }
        }
    }
};
