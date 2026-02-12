class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0;i<nums1.size();i++){
             bool isGreater=false;

            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                   
                    for(int k=j+1;k<nums2.size();k++){
                    if(nums2[j]<nums2[k]){
                        isGreater=true;
                        result.push_back(nums2[k]);
                        break;
                    }}if(!isGreater){
                        result.push_back(-1);
                    }
                    break;
                }
            }
        }
        return result;
    }
};