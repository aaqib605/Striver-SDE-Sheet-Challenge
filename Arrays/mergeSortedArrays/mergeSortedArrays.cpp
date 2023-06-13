class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // Initialize three pointers:
        // i points to the last element of nums1 (before merging)
        // j points to the last element of nums2
        // k points to the last position of the merged array (nums1)
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        // Compare elements from both arrays starting from the end
        while (i >= 0 && j >= 0)
        {
            // If the current element in nums1 is greater, place it in the merged array
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            // If the current element in nums2 is greater or equal, place it in the merged array
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            // Move the pointer for the merged array and the respective array being merged
            k--;
        }

        // If there are any remaining elements in nums2, copy them to the beginning of nums1
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};