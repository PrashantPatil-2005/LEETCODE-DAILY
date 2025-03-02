class Solution {
public:
    int missingNumber(vector<int>& a) {
           int xor1 = 0, xor2 = 0;
        int n = a.size();

        for (int i = 0; i < n; i++) {
            xor2 ^= a[i]; 
            xor1 ^= (i + 1); 
        }
        
        return xor1 ^ xor2;  
    }
};