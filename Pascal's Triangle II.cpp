class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> m;
        int i,j;
        vector<int> one;one.push_back(1);
        vector<int> two;two.push_back(1);two.push_back(1);
        m.push_back(one);
        m.push_back(two);
        if(rowIndex<2) return m[rowIndex];
        for(i=2;i<=rowIndex;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(j=1;j<i;j++)
            {
                 temp.push_back((m[i-1][j-1]+m[i-1][j]));
            }
            temp.push_back(1);
            m.push_back(temp);
        }
        return m[rowIndex];
    }
};
