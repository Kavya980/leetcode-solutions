class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int> st;
       unordered_map<int,int>mp;
       for(int num:nums2){
        while(!st.empty() && num>st.top()){
            mp[st.top()]=num;
            st.pop();
        }
        st.push(num);
       }
       vector<int> ans;
       for(int num:nums1){
        if(mp.find(num)!=mp.end()){   //find key,end means not found
            ans.push_back(mp[num]);
        }else
        ans.push_back(-1);
       }
       return ans;
    }
};

//  vector<int> result;
//         for(int i=0;i<nums1.size();i++){
//              bool isGreater=false;

//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
                   
//                     for(int k=j+1;k<nums2.size();k++){
//                     if(nums2[j]<nums2[k]){
//                         isGreater=true;
//                         result.push_back(nums2[k]);
//                         break;
//                     }}if(!isGreater){
//                         result.push_back(-1);
//                     }
//                     break;
//                 }
//             }
//         }
//         return result;