#include <bits/stdc++.h>

long long merge(long long *arr, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int newSize = right - left + 1;
    int k = 0;
    long long invCount = 0;
    long long tempArr[newSize]; // Using dynamic allocation for the temporary array

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            tempArr[k++] = arr[i++];
        }
        else
        {
            tempArr[k++] = arr[j++];
            invCount += (mid - i + 1);
        }
    }

    // Copy the remaining elements of the left subarray (if any)
    while (i <= mid)
    {
        tempArr[k++] = arr[i++];
    }

    // Copy the remaining elements of the right subarray (if any)
    while (j <= right)
    {
        tempArr[k++] = arr[j++];
    }

    // Copy the merged elements back to the original array
    for (int i = 0; i < newSize; i++)
    {
        arr[left + i] = tempArr[i];
    }

    return invCount;
}

long long mergeSort(long long *arr, int left, int right)
{
    long long invCount = 0;

    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Recursive calls to divide the array into subarrays
        invCount += mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);

        // Merge the two sorted subarrays
        invCount += merge(arr, left, mid, right);
    }

    return invCount;
}

long long getInversions(long long *arr, int n)
{
    return mergeSort(arr, 0, n - 1);
}