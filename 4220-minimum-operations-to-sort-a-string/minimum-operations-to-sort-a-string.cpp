class Solution {
public:
    int minOperations(std::string s) {
        int n = s.length();
        bool isSorted = true;
        char mn = s[0];
        char mx = s[0];
        
        // चेक करें कि क्या स्ट्रिंग पहले से सॉर्टेड है, और सबसे छोटा/बड़ा कैरेक्टर खोजें
        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                isSorted = false;
            }
            if (s[i] < mn) mn = s[i];
            if (s[i] > mx) mx = s[i];
        }
        
        // Case 1: पहले से सॉर्टेड है
        if (isSorted) return 0;
        
        // Case 2: लंबाई 2 है और सॉर्टेड नहीं है (Impossible)
        if (n == 2) return -1;
        
        // Case 3: सबसे छोटा कैरेक्टर शुरू में है या सबसे बड़ा कैरेक्टर अंत में है
        if (s[0] == mn || s.back() == mx) return 1;
        
        // Case 4: सबसे छोटा या सबसे बड़ा कैरेक्टर बीच में कहीं फंसा है
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx) return 2;
        }
        
        // Case 5: सबसे बड़ा कैरेक्टर शुरू में है और सबसे छोटा अंत में है
        return 3;
    }
};