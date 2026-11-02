class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;

        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
            }
            else if(isVowel(s[i])){
                while(!isVowel(s[j])){
                    j--;
                }
                swap(s[i],s[j]);
            }
            else if(isVowel(s[j])){
                while(!isVowel(s[i])){
                    i++;
                }
                swap(s[i],s[j]);
            }
            i++;
            j--;
        }
        return s;
    }
};