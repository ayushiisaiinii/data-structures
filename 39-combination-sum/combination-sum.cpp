class Solution {
public:
void allsubset(int target, int i , vector<int> &subset, vector<vector<int>> &ans, vector<int>nums){
     if (target == 0) {
            ans.push_back(subset);
            return;
        }

    if(target < 0 || i == nums.size()){
        return;
    }

    
    subset.push_back(nums[i]);
    allsubset((target- nums[i]), i, subset, ans, nums);
    subset.pop_back();
    allsubset(target, i+1, subset, ans, nums);
    
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subset;
        vector<vector<int>> ans;
        allsubset(target, 0, subset, ans, nums);
        return ans;
    }
};