class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        size_t row = matrix.size();
        size_t col = matrix[0].size();

        int i = 0;
        int j = col - 1;

        while (i < row && j >= 0)
        {

            int elem = matrix[i][j];

            if (elem == target)
            {
                return true;
            }
            else if (elem > target)
            {
                j--;
            }
            else if (elem < target)
            {
                i++;
            }
        }
        return false;
    }
};