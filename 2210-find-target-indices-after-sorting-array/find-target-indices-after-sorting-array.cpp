class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count1=0;
        int count2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count1++;
            }
            else if(nums[i]<target){
                count2++;
            }
        }
        vector<int> ans(count1);
        int i=0;
        while(i<count1){
            ans[i]=count2+i;
            i++;
        }
        return ans;
    }
};