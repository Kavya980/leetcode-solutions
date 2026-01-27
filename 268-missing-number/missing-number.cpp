class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //nums.sort();
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
                if(nums[i]!=i) return i;
        }
        return nums.size();
    }
};