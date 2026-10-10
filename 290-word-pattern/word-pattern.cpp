class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;

        stringstream ss(s);
        vector<string> words;
        string word;

        while(ss>>word) {
           words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); i++) {

            char c = pattern[i];
            string w = words[i];

            if (mp1.find(c) != mp1.end() && mp1[c] != w) {
                return false;
            }

            if (mp2.find(w) != mp2.end() && mp2[w] != c) {
                return false;
            }
            mp1[c]=w;
            mp2[w]=c;
        }

        return true;
    }
};