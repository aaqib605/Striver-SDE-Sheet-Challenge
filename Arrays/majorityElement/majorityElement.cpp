#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    int majorityElement = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        (arr[i] == majorityElement) ? count++ : count--;

        if (count == 0)
        {
            majorityElement = arr[i];
            count = 1;
        }
    }

    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == majorityElement)
            count++;
    }

    return (count > (n / 2)) ? majorityElement : -1;
}