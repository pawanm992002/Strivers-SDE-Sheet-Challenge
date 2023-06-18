vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr2[j] < arr1[i])
            ans.push_back(arr2[j++]);
        else
            ans.push_back(arr1[i++]);
    }
    while (i < m)
        ans.push_back(arr1[i++]);
    while (j < n)
        ans.push_back(arr2[j++]);

    return ans;
}