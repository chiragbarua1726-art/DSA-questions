Kth Largest Element in an Array
Given an integer array nums and an integer k, return the k-th largest element in the array.
Example:
Input:
nums = [3,2,1,5,6,4]
k = 2
Output: 5

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