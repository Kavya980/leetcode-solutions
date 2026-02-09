class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(char c:s){
        if(c=='#'){
            if(!st1.empty()) st1.pop();
        }else{
            st1.push(c);
        }}
        string ans1 = "";
        while(!st1.empty()) {
            ans1 += st1.top();
            st1.pop();
        }
        reverse(ans1.begin(), ans1.end());

        for(char c:t){
        if(c=='#'){
            if(!st2.empty()) 
            st2.pop();
        }else{
            st2.push(c);
        }}
        string ans2 = "";
        while(!st2.empty()) {
            ans2 += st2.top();
            st2.pop();
        }
        reverse(ans2.begin(), ans2.end());
        return ans1==ans2;
    }
};