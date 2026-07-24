class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0, l=0, r=0, n=s.size();

        while(i<n){
            while (i<n && s[i]==' ')
                i++;

            while (i<n && s[i]!=' ')
                s[r++]=s[i++];

            reverse(s.begin() + l, s.begin() + r);

            while (i < n && s[i] == ' ')
             i++;

            if(i<n)
               s[r++]=' ';

            l=r;
        }
    
   s.resize(r);
    return s;
    }
};