pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> aux(n + 1, 0);
    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++)
    {
        aux[arr[i]]++;
    }

    int missing = -1;   // Initialize missing to -1
    int repeating = -1; // Initialize repeating to -1

    // Find the missing and repeating elements
    for (int i = 1; i <= n; i++)
    {
        if (aux[i] == 0)
        {
            missing = i;
        }
        else if (aux[i] == 2)
        {
            repeating = i;
        }
    }

    // Create a pair of missing and repeating elements
    pair<int, int> res(missing, repeating);

    return res;
}