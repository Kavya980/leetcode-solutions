class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
         int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
// int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         int maxsum=INT_MIN;
//         for(int i=0;i<n;i++){
//         int sum=0;
//             for(int j=i;j<n;j++){
//             sum+=nums[j];
//             if(maxsum<sum){
//                 maxsum=sum;
//             }}
//         }
//         return maxsum;
//     }
// };