# Problem: Next Permutation

## Problem link(s)

- [Next Permutation](https://leetcode.com/problems/next-permutation/)

## Problem Statement:

The problem asks to find the next lexicographically greater permutation of a given sequence of numbers. The goal is to modify the sequence in-place, making it the smallest possible permutation greater than the original one.

## Approach

1. Start from the rightmost element of the sequence and find the first pair of adjacent elements such that the left element is smaller than the right element. This element is denoted as `nums[i]`.
2. If such an element is found, then there exists a permutation that is greater than the current one. Proceed to the next step; otherwise, the sequence is already the largest possible permutation, and it should be reversed to obtain the smallest permutation.
3. Find the smallest element from the right side of the sequence that is greater than `nums[i]`. Swap this element with `nums[i]`.
4. Reverse the sequence after index `i` to obtain the lexicographically smallest permutation. Since the elements after `i` are in decreasing order, reversing them will make them in increasing order, resulting in the smallest possible permutation.

## Complexity Analysis

- Time complexity: O(N), where N is the length of the input sequence. The algorithm performs a linear scan through the sequence twice, and both the finding and swapping steps take O(N) time. Reversing the remaining elements also takes O(N) time.
- Space complexity: O(1). The algorithm modifies the input sequence in-place and uses a constant amount of additional space.
