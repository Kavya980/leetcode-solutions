class Solution {
public:
    string smallestPalindrome(string s) {

        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }

        string left="";
        char mid=' ';

        for(char c='a';c<='z';c++){
            if(mp[c]%2)
              mid=c;

            left+=string(mp[c]/2,c);
        }
        string right=left;
        reverse(right.begin(), right.end());

        if(mid!=' '){
            return left+mid+right;
        }
        return left+right;
    }
};