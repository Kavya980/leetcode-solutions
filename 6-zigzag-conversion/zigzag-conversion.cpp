class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size())
            return s;

        vector<string> rows(numRows);
        int currentRow = 0;
        int dir = 1;

        for (char c : s) {
            rows[currentRow].push_back(c);

            if (currentRow == numRows - 1)
                dir = -1;
            else if (currentRow == 0)
                dir = 1;

            currentRow += dir;
        }

        string ans = "";

        for (string row : rows) {
            ans += row;
        }

        return ans;
    }
};