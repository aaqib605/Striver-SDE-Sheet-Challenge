# Problem: Sort Colors

## Problem Statement

Given an array `nums` containing only 0s, 1s, and 2s, sort the array in-place so that the numbers are arranged in ascending order.

## Problem Link(s)

- [Sort Colors](https://leetcode.com/problems/sort-colors/)

## Intuition

The problem asks us to sort an array containing three different colors: red (represented by 0), white (represented by 1), and blue (represented by 2). A straightforward approach would be to use a sorting algorithm, such as QuickSort or MergeSort. However, we can solve this problem more efficiently using a technique called the Dutch National Flag algorithm.

## Approach

The Dutch National Flag algorithm uses three pointers to divide the array into three sections: the section for 0s, the section for 1s, and the section for 2s. We maintain the following pointers:

- `left`: This pointer indicates the boundary between 0s and 1s. All elements to the left of this pointer are 0s.
- `right`: This pointer indicates the boundary between 1s and 2s. All elements to the right of this pointer are 2s.
- `i`: This pointer traverses the array from left to right.

We start with `left = 0`, `right = n - 1` (where `n` is the size of the array), and `i = 0`. While `i` is less than or equal to `right`, we perform the following steps:

1. If `nums[i]` is equal to 0, we swap `nums[i]` with `nums[left]` and increment both `left` and `i`.
2. If `nums[i]` is equal to 2, we swap `nums[i]` with `nums[right]` and decrement `right`. We also decrement `i` to recheck the current position since it could be 0 or 1 now.
3. If `nums[i]` is equal to 1, we don't perform any swap and simply increment `i`.

By the end of the algorithm, the array will be sorted in ascending order.

## Complexity Analysis

- Time Complexity: O(n), where n is the size of the input array. We traverse the array once, performing constant-time operations.
- Space Complexity: O(1), as we only use a constant amount of extra space to store the pointers.
