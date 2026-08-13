class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low, high , size;
        low=high=size=0;
        unordered_map<int , int >mp;
        for(high=0; high<fruits.size(); high++){
            mp[fruits[high]]++;
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0 ){
                    mp.erase(fruits[low]);
                }
                 low++;
            }
             size= max(size, high- low+1);
            
        
        }
        return size;
    }
};