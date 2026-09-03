 Daily Temperatures
Given an array temperatures, return an array where answer[i] tells you how many days you have to wait after
the i-th day to get a warmer temperature.
If no future day exists, return 0.
Example:
Input: [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]


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