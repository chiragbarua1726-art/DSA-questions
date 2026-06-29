class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> res(n,0);
        stack<int> st;
        res[n-1] = 0;

        for(int i = n-1 ; i>=0 ; i--)
        {
            while(!st.empty() && temp[st.top()]<=temp[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i] = 0;
            }else
            {
                res[i] = st.top() - i;   
            }
            st.push(i);
        
        }
        return res;
    }
};