class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         vector<int> ans(n);
         k%=n;
        for(int i=0;i<n;i++){
            if(i<k){
            ans[i]=nums[i+n-k];
        }else{
            ans[i]=nums[i-k];
        }
        }
        nums=ans;
    }
};