class Solution {
public:
    int addDigits(int x){
        if(x==0) 
          return 0;

        int sum = x%10;
        return sum + addDigits(x/10);
    }

    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]=addDigits(num);
        }
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++)
        //      if(mp[nums[i]]>mp[nums[j]]){
        //         swap(nums[i],nums[j]);
        //         ans++;
        //      }
        //      else if(mp[nums[i]]==mp[nums[j]]){
        //         if(nums[i]>nums[j]){
        //             swap(nums[i],nums[j]);
        //             ans++;
        //         }
        //      }
        // }

        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end(), [&](auto a, auto b) {
            if (mp[a.first] != mp[b.first])
                return mp[a.first] < mp[b.first];

            return a.first < b.first;
        });

        vector<bool> visited(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i].second == i)
                continue;

            int j = i, cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = arr[j].second;
                cycleSize++;
            }

            ans += cycleSize - 1;
        }

        return ans;
    }
};