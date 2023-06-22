# Problem: Majority Element

## Problem Statement

Given an array of integers, find the majority element, which is an element that appears more than n/2 times in the array. If no such element exists, return -1.

## Problem Link

- [Majority Element](https://www.codingninjas.com/studio/problems/842495)

## Intuition

The majority element appears more than n/2 times, which means it occurs at least n/2 + 1 times in the array. If we cancel out every occurrence of other elements with the majority element, the majority element will be the last one remaining.

## Approach

1. Initialize the `majorityElement` as the first element in the array and set the `count` to 1.
2. Iterate through the array from the second element.
   - If `count` becomes 0, update `majorityElement` to the current element and set `count` to 1.
   - If the current element is the same as `majorityElement`, increment `count`.
   - Otherwise, decrement `count`.
3. Verify if the `majorityElement` occurs more than n/2 times by counting its occurrences in the array.
   - If the count is greater than n/2, return the `majorityElement`.
   - Otherwise, return -1.

# Complexity Analysis

- Time complexity: O(N), where N is the number of elements in the array.
  - We iterate through the array once to find the potential majority element.
  - Then, we iterate through the array once again to count its occurrences.
- Space complexity: O(1).
  - We use a constant amount of extra space to store the `majorityElement` and `count` variables, regardless of the input size.
