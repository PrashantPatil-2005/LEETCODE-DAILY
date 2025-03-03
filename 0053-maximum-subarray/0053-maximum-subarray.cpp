class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MAX=INT_MIN;
        int cursum=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            MAX=max(cursum,MAX);
                if(cursum<0)
                {
                    cursum=0;
                }
        }
        return MAX;
        }
};