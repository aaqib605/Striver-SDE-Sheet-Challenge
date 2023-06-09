class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            // Update the minimum price if we find a new minimum
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            // Update the maximum profit if we find a new maximum
            else if (prices[i] - minPrice > maxProfit)
            {
                maxProfit = prices[i] - minPrice;
            }
        }

        return maxProfit;
    }
};