# Problem: Rotate Image

## Problem Link

- [Rotate Image](https://leetcode.com/problems/rotate-image/)

## Intuition

To rotate the matrix by 90 degrees, we can perform two operations:

1. Transpose the matrix: This involves swapping the elements across the diagonal. The element at row `i` and column `j` is swapped with the element at row `j` and column `i`.
2. Reverse each row: After transposing, we reverse each row of the matrix to obtain the final rotated matrix.

## Approach

1. Iterate over the matrix and perform the transposition operation by swapping the elements at `(i, j)` and `(j, i)` for each pair of indices.
2. Reverse each row of the transposed matrix.
3. The matrix is now rotated by 90 degrees in-place.

## Complexity Analysis

- Time complexity: O(N^2), where N is the number of rows (or columns) in the matrix. We need to perform two operations: transposing the matrix and reversing each row, both of which require iterating over each element once.
- Space complexity: O(1), as we are modifying the input matrix in-place without using any extra space.
