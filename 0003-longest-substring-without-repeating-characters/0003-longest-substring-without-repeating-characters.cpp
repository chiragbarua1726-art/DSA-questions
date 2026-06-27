class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int low = 0;

        unordered_map<char, int> f;

        for (int high = 0; high < s.size(); high++) {
            f[s[high]]++;

            while (f.size() < high - low + 1) {
                f[s[low]]--;

                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }

                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};