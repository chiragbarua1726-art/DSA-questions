class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        stack<char> st;
        string res;
        int n = s.size();

        for(i = 0 ; i<n ; i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }else if(st.top()==s[i])
            {
                st.pop();
                continue;
            }else
            st.push(s[i]);
        }
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};