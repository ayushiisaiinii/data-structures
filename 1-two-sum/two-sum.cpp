class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=i+1;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1; j<=nums.size()-1; j++)
            {
                int k= nums[i]+nums[j];
                if(k==target){
                    return {i,j};
                }
                
            }

        }
        return {};
    }
};