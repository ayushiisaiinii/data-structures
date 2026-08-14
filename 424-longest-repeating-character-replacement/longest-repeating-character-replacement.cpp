class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0, high = 0;
        int maxfreq = 0;
        int size = 0;

        unordered_map<char, int> mp;

        for (high = 0; high < s.length(); high++) {

            mp[s[high]]++;

            maxfreq = max(maxfreq, mp[s[high]]);

            while ((high - low + 1) - maxfreq > k) {
                mp[s[low]]--;
                low++;
            }

            size = max(size, high - low + 1);
        }

        return size;
    }
};