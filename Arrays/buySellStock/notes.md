# Problem: Best Time to Buy and Sell Stock

## Problem Statement

Given an array `prices` where `prices[i]` represents the price of a stock on day `i`, find the maximum profit that can be achieved. You may complete at most one transaction (i.e., buy one and sell one share of the stock), and you cannot sell a stock before you buy one.

## Problem Link(s)

- [Buy Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Intuition

To maximize the profit, we need to buy the stock at a lower price and sell it at a higher price. The problem asks us to find the maximum difference between two numbers in the given array, where the larger number comes after the smaller number.

## Approach

We can use a simple one-pass algorithm to solve this problem. We iterate through the array of prices while keeping track of the minimum price seen so far and the maximum profit that can be achieved. At each step, we check if the current price is lower than the minimum price. If it is, we update the minimum price. Otherwise, we calculate the profit by subtracting the minimum price from the current price and update the maximum profit if necessary.

## Complexity Analysis

- Time Complexity: O(n), where n is the number of elements in the prices array. We perform a single pass through the array.
- Space Complexity: O(1). We use a constant amount of extra space to store the minimum price and maximum profit variables.
