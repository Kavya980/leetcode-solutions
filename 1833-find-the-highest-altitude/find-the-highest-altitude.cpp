class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int arr[n+1];
        arr[0]=0;
        arr[1]=gain[0];
        int Max=max(arr[0],arr[1]);
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+gain[i-1];
            Max=max(Max,arr[i]);
        }

        return Max;
    }
};