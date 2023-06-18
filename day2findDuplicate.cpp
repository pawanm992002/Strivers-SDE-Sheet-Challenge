int findDuplicate(vector<int> &arr, int n)
{
    unordered_set<int> check;
    int repeating = -1;
    for (int x : arr)
    {
        if (check.find(x) == check.end())
            check.insert(x);
        else
            repeating = x;
    }
    return repeating;
}