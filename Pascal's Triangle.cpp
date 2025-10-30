class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> one;one.push_back(1);
        vector<vector<int>> out;out.push_back(one);
        if(numRows>1){vector<int> two;two.push_back(1);two.push_back(1);out.push_back(two);}
        int i,j;
        for(i=2;i<numRows;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(j=1;j<i;j++) temp.push_back(out[i-1][j-1]+out[i-1][j]);
            temp.push_back(1);
            out.push_back(temp);
        }
        return out;
    }
};
