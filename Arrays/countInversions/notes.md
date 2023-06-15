# Problem: Count Inversions

## Problem Statement

Given an array of integers, an inversion occurs when two elements in the array are out of order. The task is to count the total number of inversions in the array.

## Problem Link

[Count Inversions](https://www.codingninjas.com/codestudio/problems/count-inversions_615)

## Intuition

Inversion in an array occurs when an element at a lower index is greater than an element at a higher index. For example, in the array [2, 4, 1, 3, 5], there are three inversions: (2, 1), (4, 1), and (4, 3).

## Approach

We can solve this problem using the merge sort algorithm. The basic idea is to divide the array into two halves, recursively sort each half, and then merge the two sorted halves while counting the number of inversions.

1. Divide the array into two halves by finding the middle index.
2. Recursively sort the left half and the right half.
3. Merge the two sorted halves while counting the number of inversions:
   - Start with two pointers, one for each half.
   - Compare the elements at the pointers and add the smaller element to a temporary array.
   - If an element from the right half is smaller than an element from the left half, it forms inversions with all the remaining elements in the left half.
   - Increment the inversion count by the number of remaining elements in the left half.
   - Continue this process until both halves are merged.
4. Copy the remaining elements from the left or right half (if any) to the temporary array.
5. Copy the elements from the temporary array back to the original array.
6. Return the inversion count.

## Complexity Analysis

- Time complexity: O(n log n), where n is the size of the array. This is because the merge sort algorithm has a time complexity of O(n log n).
- Space complexity: O(n), where n is the size of the array. This is due to the temporary array used during the merging process.
