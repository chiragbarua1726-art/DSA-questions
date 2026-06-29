class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char, int>> st;
        int n = s.size();

        for (int i = 0; i < n; i++) {

            char c = s[i];

            if (st.empty()) {
                st.push({c, 1});
                continue;
            }

            if (st.top().first != c) {
                st.push({c, 1});
            }
            else {

                pair<char, int> p = st.top();
                st.pop();

                p.second++;

                if (p.second < k) {
                    st.push(p);
                }
            }
        }

        string res = "";

        while (!st.empty()) {

            pair<char, int> p = st.top();
            st.pop();

            while (p.second--) {
                res.push_back(p.first);
            }
        }

        reverse(res.begin(), res.end());

        return res;
    }
};