# Problem: Merge Intervals

## Problem Link

- [Merge Intervals](https://leetcode.com/problems/merge-intervals/)

## Problem Statement

Given a collection of intervals, merge any overlapping intervals to produce a new collection that contains mutually exclusive intervals.

## Intuition

To merge overlapping intervals, we can sort the intervals based on their start times. This sorting helps us identify intervals that potentially overlap with each other. Once the intervals are sorted, we can iterate through them, merging overlapping intervals as we encounter them. By updating the end time of the interval being merged, we can ensure that the merged interval covers all the overlapping intervals.

## Approach

1. If the collection of intervals is empty, return it as is.
2. Sort the intervals based on their start times.
3. Initialize an empty vector to store the merged intervals.
4. Initialize a temporary interval with the first interval from the sorted list.
5. Iterate through the sorted intervals from the second interval:
   - If the current interval overlaps with the temporary interval, update the end time of the temporary interval to cover both intervals.
   - If the current interval does not overlap, add the temporary interval to the merged intervals vector and update the temporary interval to the current interval.
6. Add the last remaining interval to the merged intervals vector.
7. Return the merged intervals vector.

## Complexity Analysis

- Sorting the intervals takes O(n log n) time, where n is the number of intervals.
- The subsequent iteration through the sorted intervals takes O(n) time.
- Thus, the overall time complexity is dominated by the sorting step, which is O(n log n).
- The space complexity is O(n) since we store the merged intervals in a separate vector.
