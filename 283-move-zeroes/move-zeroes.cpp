class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int i=0;
        while(i<n){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
            i++;
            }
    }
};

 // if(nums[i]==0 && nums[i+1]!=0 && nums[j]!=0){
            //     swap(nums[i],nums[i+1]);
            //     i++;
            // }
            // else if(nums[i]!=0){
            //     swap(nums[i],nums[j]);
            //     i++;
            // }


