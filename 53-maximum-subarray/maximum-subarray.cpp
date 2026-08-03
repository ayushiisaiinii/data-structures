class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cont, startnew, currentbest, overallbest;
        for(int i=0; i<nums.size(); i++){
            startnew= nums[i];
            if(i==0){
                cont=currentbest=overallbest=nums[i];
            }
            else
            cont= currentbest+ startnew;
            currentbest= max(cont, startnew);
            overallbest= max(currentbest, overallbest);
            
        }
        return overallbest;
    }
};