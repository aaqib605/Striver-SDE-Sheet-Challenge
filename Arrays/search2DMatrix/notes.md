# Problem: Search a 2D Matrix

## Problem Statement

Given a 2D matrix matrix of integers in sorted order (both row-wise and column-wise), and a target value target, we need to determine if the target value is present in the matrix.

## Problem Link

- [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

## Intuition

The given matrix is sorted row-wise and column-wise. This sorted structure allows us to apply an efficient search algorithm to find the target value. The intuition behind the solution is to start from the top-right corner of the matrix and move left or down based on whether the current element is greater or smaller than the target. By doing so, we can eliminate rows and columns at each step and converge towards the target value.

## Approach

1. Initialize two variables `i` and `j` to point to the top-right corner of the matrix. `i` represents the row index, and `j` represents the column index.

2. Start a loop that continues until `i` is less than the number of rows and `j` is greater than or equal to 0.

   - Get the current element `elem` at `matrix[i][j]`.

   - Compare `elem` with the target value:
     - If `elem` is equal to the target, return `true` as the target is found in the matrix.
     - If `elem` is greater than the target, decrement `j` to move left.
     - If `elem` is less than the target, increment `i` to move down.

3. If the loop completes without finding the target, return `false` as the target is not present in the matrix.

## Complexity Analysis

- Time Complexity: The time complexity of this approach is O(m \* n). In the worst case we will be iterating through the entire matrix.
- Space Complexity: The space complexity is O(1) as we are using a constant amount of additional space.

Since the algorithm has a linear time complexity, it can efficiently handle large inputs within a reasonable amount of time.
