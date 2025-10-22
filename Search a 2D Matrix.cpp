class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0; int j=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        while(i<rows)
        {
            if(target>matrix[i][cols-1])//if the target is greater than the element in the last column of a certain row it means that the target is not in that row
            {
                j=0;
                i++;
            }
            else
            {
                while(j<cols)
                {
                    if(target==matrix[i][j]) return true;
                    else j++;
                }
                j=0;//the code should never reach this point
                i++;
            }
        }
        return false;
    }
};
