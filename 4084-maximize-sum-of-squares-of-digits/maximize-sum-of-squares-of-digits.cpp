class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";
        string ans="";
        for(int i=0;i<num;i++){
            for(int j=9;j>=0;j--){
                if(j<=sum){
                    ans+=char('0'+j);
                    sum-=j;
                    break;
                }
            }
        }
        return ans;
    }
};