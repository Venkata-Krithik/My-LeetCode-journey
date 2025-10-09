class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i=0,j=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>> m=matrix;
        bool flag=false;
        int temp1=0;
        int temp2=0;
        for(i=0;i<rows;i++)
        {
           
            for(j=0;j<cols;j++)
            {
               
                if(matrix[i][j]==0)
                {
                    flag= true;
                    temp1=0;
                    while(temp1<rows)
                    {
                        m[temp1][j]=0;
                        temp1++;
                    }
                }
            }
            if(flag)
            {
                temp2=0;
                while(temp2<cols)
                    {
                        m[i][temp2]=0;
                        temp2++;
                    }
                    flag=false;
            }
        }
        matrix=m;
        //return matrix;
    }
};
