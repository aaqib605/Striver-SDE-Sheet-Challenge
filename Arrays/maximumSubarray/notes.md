# Problem: Maximum Subarray

## Problem link(s)

- [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

## Problem Statement:

Given an array of integers, find the contiguous subarray with the largest sum and return the sum.

## Intuition

The Maximum Subarray problem asks us to find the subarray within a given array that has the maximum sum. This means we need to identify the starting and ending indices of the subarray, as well as calculate the sum of its elements.

## Approach

- To solve this problem, we can utilize Kadane's algorithm, which provides an efficient solution with a time complexity of O(n).

- The main idea behind Kadane's algorithm is to keep track of two variables: `currentSum` and `maxSum`. The `currentSum` represents the maximum sum of a subarray ending at the current element, while `maxSum` keeps track of the maximum sum found so far.

- We iterate over the input array from left to right, and for each element, we calculate the maximum between the current element itself and the sum of the current element and the `currentSum`. This ensures that we always have the maximum sum of a subarray ending at the current element.

- After updating `currentSum`, we compare it with `maxSum` and update `maxSum` if a new maximum is found. By the end of the iteration, `maxSum` will hold the maximum sum of a subarray within the given array.

## Complexity Analysis

The time complexity of this approach is O(n) since we iterate over the input array once. The space complexity is O(1) as we only use a constant amount of extra space for the variables `maxSum` and `currentSum`.
