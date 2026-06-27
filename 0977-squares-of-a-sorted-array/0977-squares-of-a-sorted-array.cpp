class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        vector<int> res(a);
        int left = 0;
        int right = a.size()-1;

        for (int i = a.size() - 1; i >= 0; i--)
        {
            if(abs(a[left])>abs(a[right]))
            {
                res[i] = a[left]*a[left];
                left++;
            }else{
                res[i] = a[right]*a[right];
                right--;
            
            }
        }
        return res;
    }
};