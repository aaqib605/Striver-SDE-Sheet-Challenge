# Problem: Find the Duplicate Number

## Problem Link

- [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)

## Problem Statement

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. There is only one duplicate number in nums, but it could be repeated multiple times. Return the duplicate number.

## Intuition

To solve this problem, we can make use of the property that the array contains integers in the range [1, n]. We can treat the array as a linked list, where each value represents the index of the next element in the list. Since there is a duplicate number in the array, this linked list will contain a cycle.

## Approach

We can use Floyd's Tortoise and Hare algorithm to detect the cycle in the linked list. The algorithm works by initializing two pointers, slow and fast, to the first element of the array. The slow pointer moves one step at a time, while the fast pointer moves two steps at a time. If there is a cycle in the linked list, the two pointers will eventually meet at a point within the cycle.

Once the intersection point is found, we reset one of the pointers to the first element and move both pointers one step at a time. The point at which they meet again will be the start of the cycle, which corresponds to the duplicate number in the array.

## Complexity Analysis

- Time complexity: O(n)
  - The Floyd's Tortoise and Hare algorithm takes O(n) time to detect the cycle.
- Space complexity: O(1)
  - The algorithm uses only a constant amount of extra space.
