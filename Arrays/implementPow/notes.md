# Problem: Implement pow(x,n)

## Problem Statement

The problem requires calculating the power of a given number `x` raised to the exponent `n`.

## Problem Link

- [Implement pow(x,n)](https://leetcode.com/problems/powx-n/description/)

## Intuition

To calculate the power efficiently, we can utilize the concept of recursion. We divide the problem into smaller subproblems by repeatedly dividing the exponent by 2. By using recursion, we can calculate the power in a more optimized manner.

## Approach

The code consists of two functions: `power` and `myPow`.

## power Function:

- The `power` function takes two parameters, `x` and `n`, and returns a double value.
- If the exponent `n` is 0, the function returns 1 since any number raised to the power 0 is 1.
- If the exponent `n` is even, the function recursively calls itself with `x` squared and `n/2`.
- If the exponent `n` is odd, the function recursively calls itself with `x` squared and `n/2` and multiplies the result by `x`.
- The function returns the calculated result.

## myPow Function:

- The `myPow` function takes two parameters, `x` and `n`, and returns a double value.
- It first assigns the absolute value of `n` to the variable `num` to handle negative exponents.
- It calls the `power` function with `x` and `n` to calculate the power.
- If the original exponent `n` is negative, the function returns `1.0/ans` as the result.
- Otherwise, it returns the calculated result `ans`.

# Complexity Analysis

- The time complexity of the code is O(log n), where `n` is the exponent. This is because the code divides the exponent by 2 at each recursive call.
- The space complexity is O(log n) as well due to the recursive stack used for the function calls.
