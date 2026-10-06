class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> st;
        int score=0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]=='(') {
                st.push('(');
            }
            else {
                st.pop();

                if (s[i-1] =='(') {
                    score += 1<<st.size();    //2^(st.size())
                }
            }
        }
        return score;
    }
};