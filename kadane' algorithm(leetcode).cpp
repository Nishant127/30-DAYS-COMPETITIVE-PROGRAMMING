class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum1=0,maxs=INT_MIN;
        for(auto i: nums)
        {
            sum1+=i;
            maxs=max(sum1,maxs);
            if(sum1<0) sum1=0;
        }
        return maxs;
    }
};