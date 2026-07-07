class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        for(auto &ch: intervals){
            if(ans.empty() || ans.back()[1] < ch[0]){
                ans.push_back(ch);
            }else{
            ans.back()[1] = max(ans.back()[1], ch[1]);
            }
        }
        return ans;
    }
};