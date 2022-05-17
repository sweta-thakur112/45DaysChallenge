class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto price:prices)
        {
            mini=min(mini,price);
            maxi=max(maxi,price-mini);
        }
        return maxi;
    }
};
