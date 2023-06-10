#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left < right && top < bottom)
    {
        int temp = mat[top][left]; // Store the top-left element of the current ring

        // Rotate the top row (moving elements one position to the right)
        for (int col = left + 1; col <= right; col++)
        {
            int k = mat[top][col];
            mat[top][col] = temp;
            temp = k;
        }
        top++;

        // Rotate the rightmost column (moving elements one position downwards)
        for (int row = top; row <= bottom; row++)
        {
            int k = mat[row][right];
            mat[row][right] = temp;
            temp = k;
        }
        right--;

        // Rotate the bottom row (moving elements one position to the left)
        for (int col = right; col >= left; col--)
        {
            int k = mat[bottom][col];
            mat[bottom][col] = temp;
            temp = k;
        }
        bottom--;

        // Rotate the leftmost column (moving elements one position upwards)
        for (int row = bottom; row >= top; row--)
        {
            int k = mat[row][left];
            mat[row][left] = temp;
            temp = k;
        }
        left++;

        mat[top - 1][left - 1] = temp; // Store the last element in the top-left position of the current ring
    }
}