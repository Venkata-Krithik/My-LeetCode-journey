class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) return {};
        int cols = matrix[0].size();

        vector<int> m;
        m.reserve(rows * cols);

        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        while (left <= right && top <= bottom) {
            // left → right
            for (int j = left; j <= right; ++j)
                m.push_back(matrix[top][j]);
            ++top;

            // top → bottom
            for (int i = top; i <= bottom; ++i)
                m.push_back(matrix[i][right]);
            --right;

            // right → left
            if (top <= bottom) {
                for (int j = right; j >= left; --j)
                    m.push_back(matrix[bottom][j]);
                --bottom;
            }

            // bottom → top
            if (left <= right) {
                for (int i = bottom; i >= top; --i)
                    m.push_back(matrix[i][left]);
                ++left;
            }
        }
        return m;
    }
};
