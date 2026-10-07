class Solution {
public:
    int getsum(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1){
            if (seen.count(n))
                return false;

            seen.insert(n);
            n=getsum(n);
        }
        return true;
    }
};