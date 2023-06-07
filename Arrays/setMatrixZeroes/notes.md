# Set Matrix Zeros

## Problem link(s)

- [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

## Problem Description

Given a matrix, if an element is 0, we need to set its entire row and column to 0 in-place.

## Intuition

To solve this problem, we can iterate through the matrix and whenever we encounter a zero, we mark its corresponding row and column to be set to zero later. However, if we directly modify the matrix during the iteration, it can lead to incorrect results since the subsequent elements will also be affected. To overcome this, we need to store the information about the rows and columns that need to be set to zero separately. We can use the first row and first column of the matrix itself to track this information.

## Approach

1. First, we will check if the first row and first column of the matrix contain any zeros. We will use two boolean variables `firstRowHasZero` and `firstColHasZero` to keep track of this.

2. Next, we will iterate through the remaining elements of the matrix (excluding the first row and first column).

3. Whenever we encounter a zero at position `(i, j)`, we will set the corresponding element in the first row (`matrix[0][j]`) and the first column (`matrix[i][0]`) to zero. This acts as a marker to indicate that the respective row and column should be set to zero later.

4. After marking the zeros, we will iterate through the matrix again, except for the first row and first column.

5. For each element `(i, j)` in the matrix, we will check if either `matrix[0][j]` or `matrix[i][0]` is zero. If either of them is zero, it means the corresponding row or column needs to be set to zero. Therefore, we set `matrix[i][j]` to zero.

6. Finally, we will check the boolean variables `firstRowHasZero` and `firstColHasZero`. If either of them is true, it means the first row or first column needs to be set to zero. We iterate through the first row and first column and set all the elements to zero accordingly.

## Complexity Analysis

The optimized solution has a time complexity of O(m \* n) where m is the number of rows and n is the number of columns in the matrix. The space complexity is O(1) since we are using the first row and first column of the matrix to store information instead of using additional data structures.
