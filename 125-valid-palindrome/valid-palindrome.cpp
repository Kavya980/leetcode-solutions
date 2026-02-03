class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(char c:s){
            if(isalnum(c)){
                clean+=tolower(c);
            }}
            string rev = clean;
        reverse(rev.begin(), rev.end());
        return clean == rev;
        }
};

// int left = 0;
//         int right = s.size() - 1;
//         if(s==NULL)return true;
//         string temp=s;
//         while (left < right) {
//             swap(s[left], s[right]);
//             left++;
//             right--;
//     }
//     if(s==temp)return true;
//     else return false;