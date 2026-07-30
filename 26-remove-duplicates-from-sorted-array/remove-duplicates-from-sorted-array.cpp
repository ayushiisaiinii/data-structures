class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int k=1;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
                k++;
            }
            
        }
        return k;
}

    
};