class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        // If the intervals vector is empty, return it as is
        if (intervals.empty())
        {
            return intervals;
        }

        // Sort the intervals based on the start times
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergedIntervals;
        vector<int> tempInterval = intervals[0];

        for (const auto &interval : intervals)
        {
            // If the current interval's start time is less than or equal to the previous interval's end time,
            // merge the intervals by updating the end time of the temporary interval
            if (interval[0] <= tempInterval[1])
            {
                tempInterval[1] = max(tempInterval[1], interval[1]);
            }
            // If the current interval does not overlap with the previous interval,
            // add the previous interval to the mergedIntervals vector and update the temporary interval
            else
            {
                mergedIntervals.push_back(tempInterval);
                tempInterval = interval;
            }
        }

        // Add the last remaining interval to the mergedIntervals vector
        mergedIntervals.push_back(tempInterval);

        return mergedIntervals;
    }
};