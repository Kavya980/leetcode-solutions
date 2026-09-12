class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int year[101] = {};

        for(auto log : logs) {
            year[log[0] - 1950]++;
            year[log[1] - 1950]--;
        }

        int current = 0;
        int maximum = 0;
        int answer = 1950;

        for(int i = 0; i < 101; i++) {
            current += year[i];

            if(current > maximum) {
                maximum = current;
                answer = 1950 + i;
            }
        }
        return answer;
    }
};