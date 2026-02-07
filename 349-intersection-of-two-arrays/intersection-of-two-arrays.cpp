class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int n1=nums1.size();
        int n2=nums2.size();
        int k=0;
       
        for(int i=0;i<n1;i++){
             bool isPresentn2= false;
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    isPresentn2 = true;
                    break;
                    }}
                    if (!isPresentn2) continue;
                    // for(int m=0;m<k;m++){
                    // if(nums1[i]!=nums[m])
                    // nums.push_back(nums1[i]);
                    // k++;
            bool alreadyAdded=false;
            for (int k=0;k<nums.size();k++) {
                if (nums[k]==nums1[i]) {
                    alreadyAdded = true;
                    break;
                }
            }
            if(!alreadyAdded){
                nums.push_back(nums1[i]);
            }
        }
            return nums;
        }
};