class Solution {
public:
    bool canShip(vector<int>weights,int days,int mid){
        int requiredDays = 1;
        int currWeight = 0;

        for(int weight:weights){

            if(currWeight+weight >mid){
                requiredDays++;
                currWeight=weight;
            }else{
                currWeight+=weight;
            }

        }
        return requiredDays<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low=*max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low<=high){
            int mid=low+(high-low)/2;
            if(canShip(weights, days, mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};