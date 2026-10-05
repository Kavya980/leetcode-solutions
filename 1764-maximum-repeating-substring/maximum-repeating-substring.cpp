class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count=0;
        string temp="";
        while(sequence.find(temp+word) != string::npos){
            temp+=word;
            count++;
        }
        return count;
    }
};