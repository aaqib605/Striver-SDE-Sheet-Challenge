# Problem: Rotate Matrix

## Problem Link

- [Rotate Matrix](https://www.codingninjas.com/codestudio/problems/981260?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0)

## Problem Statement

We are given a matrix of integers and we need to rotate it in a clockwise direction. The goal is to modify the matrix in-place such that each element is rotated only once.

## Intuition

To solve this problem, we can divide the matrix into concentric square rings. Starting from the outermost ring and moving towards the inner rings, we rotate each ring individually. The rotation involves moving each element in the ring one position to the right.

## Approach

1. Initialize four variables `left`, `right`, `top`, and `bottom` to keep track of the boundaries of the current ring.
2. Iterate over the rings while `left < right` and `top < bottom`:
   - a. Store the value of the top-left element of the current ring in a temporary variable.
   - b. Rotate the top row of the current ring by moving each element one position to the right.
   - c. Rotate the rightmost column of the current ring by moving each element one position downwards.
   - d. Rotate the bottom row of the current ring by moving each element one position to the left.
   - e. Rotate the leftmost column of the current ring by moving each element one position upwards.
   - f. Update the boundaries of the current ring (`left`, `right`, `top`, and `bottom`).
   - g. Repeat steps a-f until the current ring is fully rotated.
3. The matrix is now rotated.

## Complexity Analysis

The time complexity of this approach is O(n \* m), where n is the number of rows and m is the number of columns in the matrix. We need to process each element of the matrix once during the rotation.

The space complexity is O(1) since we are modifying the matrix in-place and using only a constant amount of extra space.
