class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        // Sort by ending time
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 0;
        int lastEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            
            // Overlap
            if (intervals[i][0] < lastEnd) {
                count++;   // remove current interval
            }
            else {
                // No overlap
                lastEnd = intervals[i][1];
            }
        }

        return count;
    }
};