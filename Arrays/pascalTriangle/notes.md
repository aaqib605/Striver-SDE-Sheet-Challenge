# Problem: Pascal's Triangle

## Problem link(s)

- [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

## Problem Statement:

Pascal's Triangle is a triangular array of numbers where each number is the sum of the two numbers directly above it. The triangle starts with a 1 at the top and each row has one more number than the previous row. Given the number of rows to generate, write a function to generate Pascal's Triangle.

## Intuition:

Pascal's Triangle is constructed by summing the numbers from the previous row to generate the next row. The first and last elements of each row are always 1. By iteratively generating each row based on the previous row, we can build the entire Pascal's Triangle.

## Approach:

1. Create an empty 2D vector called `triangle` to store the rows of Pascal's Triangle.
2. If the number of rows is 0, return the empty `triangle`.
3. Add the first row `[1]` to the `triangle`.
4. Start a loop from the second row to the desired number of rows.
5. Inside the loop, create a new vector called `row` with the same number of elements as the current row and initialize all elements to 1.
6. Calculate the values between the first and last elements of the `row` by summing the corresponding elements from the previous row.
7. Replace the `row` vector with the updated values.
8. Add the `row` to the `triangle`.
9. Repeat steps 4-8 until all rows are generated.
10. Return the `triangle` containing Pascal's Triangle.

## Complexity Analysis:

- Time Complexity: O(numRows^2)
  - We need to generate `numRows` rows of Pascal's Triangle, and for each row, we calculate the values by summing the elements from the previous row. Therefore, the time complexity is proportional to the square of `numRows`.
- Space Complexity: O(numRows^2)
  - The space required to store Pascal's Triangle is proportional to the square of `numRows` since each row can have up to `numRows` elements. Therefore, the space complexity is also O(numRows^2).
