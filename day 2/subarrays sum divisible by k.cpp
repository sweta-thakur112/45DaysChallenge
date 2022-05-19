class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> c(k,0);
        int sums=0;
        for(int x:nums)
        {
            sums+=(x%k+k)%k;
            c[sums%k]++;
        }
        int res=c[0];
        for(int y:c)
        {
            res+=(y*(y-1))/2;
        }
        return res;
    }
};
