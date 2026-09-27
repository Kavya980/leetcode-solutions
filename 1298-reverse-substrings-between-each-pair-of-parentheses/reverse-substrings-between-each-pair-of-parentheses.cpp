class Solution {
public:
    string reverseString(string r){
        stack<char> st;

        for(char c:r){
            st.push(c);
        }

        string result="";

        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        return result;
    }

    string reverseParentheses(string s) {

        string current="";
        stack<string> st;

        for(char c:s){

            if(c=='('){
                st.push(current);
                current = "";
            }
            else if(c == ')'){
                current = reverseString(current);
                current = st.top() + current;
                st.pop();
            } 
            else{
                current+=c;
            }
        }
        return current;
    }
};