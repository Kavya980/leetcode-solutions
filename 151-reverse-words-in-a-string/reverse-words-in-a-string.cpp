class Solution {
public:
    string reverseWords(string s) {
    stack<string> st;
    string result="";
    for(char c:s){
        
        if(c!=' '){
            result+=c;
        }
        else{
            if(result!=""){
            st.push(result);
            result="";
            }
        }
    }
        if(result!="")
        st.push(result);
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
   
    return ans;
    }
};