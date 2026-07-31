class Solution {
public:
void allsubset(int i, vector<int> &subset, vector<int> nums,vector<vector<int>> &ans){
            
            if(i==nums.size()){
                ans.push_back(subset);
                return;
            }
            subset.push_back(nums[i]);
            allsubset(i+1, subset,nums, ans);
            subset.pop_back();
            allsubset(i+1, subset,nums, ans);
        
        }
    vector<vector<int>> subsets(vector<int>& nums ) {
        vector<int> subset;
        vector<vector<int>> ans;
        allsubset(0, subset,nums, ans);
        return ans;
    }
};