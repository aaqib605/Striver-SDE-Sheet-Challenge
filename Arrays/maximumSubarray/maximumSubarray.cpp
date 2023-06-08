class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = nums[0];     // Variable to store the maximum sum
        int currentSum = nums[0]; // Variable to store the current sum

        for (int i = 1; i < nums.size(); i++)
        {
            // Choose the maximum between the current element and the current element + previous sum
            currentSum = max(nums[i], currentSum + nums[i]);

            // Update the maximum sum if necessary
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};