class Solution {
public:
    unordered_set<int> seenSum;
    bool isHappy(int n) {
        if(n==1){
            return true;
        }else{
            int sum = sumSD(n);
            if(seenSum.count(sum)){
                return false;
            }
            seenSum.insert(sum);
            return isHappy(sum);
        }
    }
    int sumSD(int num){
        return num==0 ? 0 : ((num%10) * (num%10)) + sumSD(num/10);
    }
};
