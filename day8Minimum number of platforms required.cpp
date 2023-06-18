int calculateMinPatforms(int at[], int dt[], int n)
{
    sort(at, at + n);
    sort(dt, dt + n);
    int cnt = 1, j = 0;
    for (int i = 1; i < n; i++)
    {
        if (at[i] > dt[j])
            j++;
        else
            cnt++;
    }
    return cnt;
}