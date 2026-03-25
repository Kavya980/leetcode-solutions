class Solution {
public:
    void solve(string digits,int index,string current,vector<string>& result,vector<string>& map) {
        if(index==digits.length()){
            result.push_back(current);
            return;
        }
        string letters=map[digits[index]-'0'];  //char to int
        for(int i = 0; i < letters.length(); i++)
        {
            solve(digits, index + 1, current + letters[i], result, map);
        }}
        vector<string> letterCombinations(string digits) {

        vector<string> result;

        if(digits.empty())
        return result;

        vector<string> map = {
            "", "", "abc","def","ghi","jkl",
            "mno","pqrs","tuv","wxyz"
        };

        solve(digits, 0, "", result, map);
        return result;
    }
};