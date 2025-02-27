class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int MAX=INT_MIN;
        for(int i=0;i<n;i++){
            if (nums[i]==1){
                cnt++;
            }
            else{
            cnt=0;
            }
            MAX=max(MAX,cnt);

        }
        return MAX;
    }
};