class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int left=0;
       int right=numbers.size()-1;
       while(left<right){
        int sum=numbers[left]+numbers[right];
        if(sum==target){
            return {left+1,right+1};
        }
        else if(sum<target){
           left++;
        }else{
            right--;
        }
       }
       return {};
    }
};

// for(int i=0;i<numbers.size();i++){
//             for(int j=i+1;j<numbers.size();j++){
//                 int sum=numbers[i]+numbers[j];
//                 if(target==sum){
//                     return {i+1,j+1};
//                 }
//             }
//         }
//         return {}; 