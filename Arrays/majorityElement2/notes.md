# Problem: Majority Element II

## Problem Statement

Given an array of N integers, we need to find the elements that appear more than N/3 times in the array. If no such element exists, we return an empty vector.

## Problem Link

- [Majority Element II](https://leetcode.com/problems/majority-element-ii/)

## Intuition

We are asked to find the elements that occur more than N/3 times in the array. One way to solve this problem is by using the Boyer-Moore Majority Vote algorithm. The algorithm allows us to find elements that occur more than N/2 times, but with a slight modification, we can adapt it to find elements occurring more than N/3 times.

## Approach

1. Initialize two candidate elements (candidate1 and candidate2) and their counters (count1 and count2) to 0.
2. Iterate through the array:
   - If the current element is equal to candidate1, increment count1.
   - If the current element is equal to candidate2, increment count2.
   - If count1 is 0, update candidate1 with the current element and set count1 to 1.
   - If count2 is 0, update candidate2 with the current element and set count2 to 1.
   - If none of the above conditions are met, decrement both count1 and count2.
3. Reset count1 and count2 to 0.
4. Iterate through the array again:
   - If the current element is equal to candidate1, increment count1.
   - If the current element is equal to candidate2, increment count2.
5. Check if count1 is greater than N/3. If true, add candidate1 to the result vector.
6. Check if count2 is greater than N/3. If true, add candidate2 to the result vector.
7. Return the result vector.

## Complexity Analysis

- Time complexity: O(N), where N is the size of the input array. We iterate through the array twice.
- Space complexity: O(1). We use only a constant amount of space to store the candidates and counters.
