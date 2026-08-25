class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> prevrow;

        for(int i = 0 ; i < numRows; i++){
            vector<int> currentRow(i+1 , 1);

            for(int j = 1; j<i ; j++){
                currentRow[j] = prevrow[j - 1] + prevrow[j];
            }

            result.push_back(currentRow);
            prevrow = currentRow;
        }

        return result;
    }
};