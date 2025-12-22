class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";  
        string prefix=strs[0];
        int n=strs.size();
        int n1=prefix.size();
        for(int i=1;i<n;i++){
            int j=0;
            while(j<n1 && j<strs[i].size() && prefix[j]==strs[i][j]){
                j++;
            }
            prefix = prefix.substr(0, j);

            if(prefix.empty()) return ""; 
        }
        return prefix;
    }
};