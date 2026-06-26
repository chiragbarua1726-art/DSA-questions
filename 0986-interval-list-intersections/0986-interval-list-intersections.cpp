class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {

        int i = 0;
        int j = 0;
        int n = f.size();
        int m = s.size();

        vector<vector<int>> res;

        while(i < n && j < m)
        {
            int start = max(f[i][0], s[j][0]);
            int end = min(f[i][1], s[j][1]);

            if(start <= end)
            {
                res.push_back({start, end});
            }

            if(f[i][1] < s[j][1])
                i++;
            else
                j++;
        }

        return res;
    }
};