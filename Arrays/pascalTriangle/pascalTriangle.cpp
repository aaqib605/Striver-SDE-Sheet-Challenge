class Solution
{
public:
    vector<vector<int>> generatePascalTriangle(int numRows)
    {
        vector<vector<int>> triangle;

        // Handle edge cases
        if (numRows == 0)
        {
            return triangle;
        }

        // Generate the first row
        triangle.push_back({1});

        for (int i = 1; i < numRows; i++)
        {
            vector<int> row(i + 1, 1); // Initialize the row with 1s

            // Calculate the values between the first and last elements
            for (int j = 1; j < i; j++)
            {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            // Append the row to the triangle
            triangle.push_back(row);
        }

        return triangle;
    }
};