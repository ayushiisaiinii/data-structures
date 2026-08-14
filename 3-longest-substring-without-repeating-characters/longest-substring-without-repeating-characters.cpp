class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start, end ,size;
        start= end= size=0;
        unordered_map<char , int>mp;
        for(end=0; end<s.length(); end++){
            mp[s[end]]++;
            while(mp[s[end]]>1){
                mp[s[start]]--;
                start++;
            }
            size= max(size, end- start+1);
        }
        return size;
    }
};