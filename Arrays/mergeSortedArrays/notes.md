# Problem: Merge Sorted Array

## Problem Link

- [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## Problem Statement

Given two sorted integer arrays `nums1` and `nums2`, merge `nums2` into `nums1` as one sorted array. The length of `nums1` and `nums2` are `m` and `n` respectively, and `nums1` has enough space (size that is greater or equal to `m + n`) to hold additional elements from `nums2`.

You need to modify `nums1` in-place by merging elements from `nums2` into it.

## Intuition

The problem asks us to merge two sorted arrays, `nums1` and `nums2`, into `nums1`. Since `nums1` has enough space to hold all the elements, we can start from the end of both arrays and compare elements at each position. By doing this, we can merge the two arrays in-place without requiring additional space.

## Approach

1. Initialize three pointers:

   - `i` points to the last element of `nums1` (before merging).
   - `j` points to the last element of `nums2`.
   - `k` points to the last position of the merged array (`nums1`).

2. Compare elements from both arrays starting from the end:

   - If the current element in `nums1` is greater, place it in the merged array (`nums1`) at position `k`, and decrement `i` by 1.
   - If the current element in `nums2` is greater or equal, place it in the merged array (`nums1`) at position `k`, and decrement `j` by 1.
   - Move the pointer `k` towards the beginning of the merged array.

3. If there are any remaining elements in `nums2` after the above process, copy them to the beginning of `nums1` starting from position `k`.

## Complexity Analysis

- Time Complexity: O(m + n)
  - Since we iterate through both `nums1` and `nums2` exactly once in a single pass, the time complexity is linear in the total number of elements in both arrays.
- Space Complexity: O(1)
  - The solution utilizes constant space as it performs the merging in-place without requiring any additional space.
