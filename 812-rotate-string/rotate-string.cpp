class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        
        int n=s.size();
        for(int i=0;i<n;i++){
            int j=0;
            while(j<n && s[(i+j)%n]==goal[j]){
                j++;
            }
             if(j==n){
            return true;
        }
        }

        return false;
    }
};