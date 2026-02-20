class Solution {
public:
    string decodeString(string s) {
        stack<int> st1;
        stack<string> st2;
        string curr="";
        int num=0;
        for(char c:s){
            if(isdigit(c)){
                num=num*10+(c-'0');
                // st.push_back(c);
            }else if(c=='['){
                st1.push(num);
                st2.push(curr);
                num=0;
                curr="";
            }else if(c==']') {
                int repeat=st1.top();
                st1.pop();
                
                string prev=st2.top();
                 st2.pop();
                
                string temp="";
                for(int i=0;i<repeat;i++) {
                    temp+=curr;
                }
                
                curr= prev+temp;
            }

            else{
                curr+=c;
            }
        }return curr;
    }
};