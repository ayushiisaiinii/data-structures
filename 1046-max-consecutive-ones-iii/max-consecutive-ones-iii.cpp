class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low, high, size, zero;
        low=0;
        size=0;
        high=zero=0;
        for(high=0; high<nums.size(); high++){
            if(nums[high]==0){
                zero++;
            }
            while(zero>k){
                if( nums[low]==0){
                    zero--;
                }
               
                low++;
            }
            size= max(size, high-low+1 );
        }
        return size;
    }
};