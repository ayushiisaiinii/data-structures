class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best= nums[0];
        int minsum=nums[0];
        int ans=nums[0];
        int worst= nums[0];
        int sum= nums[0];
        for(int i=1; i<nums.size();i++){
            int a= nums[i];
            int b= nums[i]+best;
            int c= nums[i]+worst;
            best=max(a, b);
            worst= min(a,c);
            ans= max(ans, best);
            minsum= min(minsum, worst);
            sum = sum+nums[i];
        }
        if(ans<0){
            return ans;
        }
     else
     return max(ans, sum-minsum);
    }
};