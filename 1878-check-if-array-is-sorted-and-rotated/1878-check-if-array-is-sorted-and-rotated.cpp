class Solution {
public: //tc=O(n);sc=O(1);
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        int pos=1;
        while (pos<n and nums[pos-1]<=nums[pos]){
            pos++;
        }
        if(pos==n) return true;
        if(nums[pos]>nums[0]) return false;

        pos++;

        while(pos<n and nums[pos-1]<=nums[pos] and nums[pos]<=nums[0]){
            pos++;
        }
        return (pos==n);
    }
};