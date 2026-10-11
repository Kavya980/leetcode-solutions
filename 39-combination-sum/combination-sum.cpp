
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int i, vector<int>& candidates, int target) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (i == candidates.size() || target < 0) {
            return;
        }

        // Pick the current number
        temp.push_back(candidates[i]);
        solve(i, candidates, target - candidates[i]);

        // Backtrack
        temp.pop_back();

        // Skip the current number
        solve(i + 1, candidates, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0, candidates, target);
        return ans;
    }
};
