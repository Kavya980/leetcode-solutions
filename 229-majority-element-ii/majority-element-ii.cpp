class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int> major;
        for(int num:nums){
            mp[num]++;        
        }
        for(auto it:mp){
             if(it.second>n/3){
            major.push_back(it.first);                
            } 
        }
        return major;
    }
};