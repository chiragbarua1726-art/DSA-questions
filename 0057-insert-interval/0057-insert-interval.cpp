class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a)
    {
        sort(a.begin(), a.end());

        vector<vector<int>> res;

        int start = a[0][0];
        int end = a[0][1];

        for(int i = 1; i < a.size(); i++)
        {
            int s = a[i][0];
            int e = a[i][1];

            if(end >= s)
            {
                end = max(end, e);
            }
            else
            {
                res.push_back({start, end});
                start = s;
                end = e;
            }
        }

        res.push_back({start, end});
        return res;
    }

    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& newa)
    {
        vector<vector<int>> res;
        bool inserted = false;

        for(int i = 0; i < a.size(); i++)
        {
            if(inserted == false && newa[0] < a[i][0])
            {
                res.push_back(newa);
                inserted = true;
            }

            res.push_back(a[i]);
        }

        if(inserted == false)
        {
            res.push_back(newa);
        }

        return merge(res);
    }
};