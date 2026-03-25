class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        while(i>=0 ||j>=0 ||carry){
            int sum=carry;
            if(i>=0){
                sum+=a[i]-'0';   //char to int   ASCII concept 49(1)-48(0)=1
                i--;
            }
            if(j>= 0){
                sum += b[j]-'0';
                j--;
            }

            result= char(sum%2+'0') + result;  //int to char
            carry = sum/2;
        }

        return result;
        }
};