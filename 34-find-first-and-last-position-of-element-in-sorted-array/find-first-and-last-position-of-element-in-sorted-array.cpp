class Solution {
public:
        int firstPosition(vector<int>& nums, int target){
        int n=nums.size();
        int beg=0;
        int end=n-1;
        int ans=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }else if(nums[mid]>target)
                end=mid-1;
            else
                beg=mid+1; 
        }
        return ans;
    }
    int lastPosition(vector<int>& nums, int target){
        int n=nums.size();
        int beg=0;
        int end=n-1;
        int ans=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target){
                ans=mid;
                beg=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                beg=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstPosition(nums, target), lastPosition(nums, target)};
    }
};