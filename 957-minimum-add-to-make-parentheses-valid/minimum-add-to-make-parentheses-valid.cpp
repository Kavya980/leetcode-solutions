class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int balance=0;

        for(char c:s){
            if(c=='('){
                balance++;
            }
            else{
                balance--;
                if (balance < 0) {
                    ans++;
                    balance = 0;
                }
            }
        }
        return ans+balance;
    }
};