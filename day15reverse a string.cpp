void reverse(string &s, int l, int h)
{
    while (l < h)
        swap(s[l++], s[h--]);
}

string removeExtraSpaces(string &str)
{
    string result;
    bool spaceFound = false;
    for (char c : str)
    {
        if (c == ' ')
        {
            if (!spaceFound)
            {
                result += c;
                spaceFound = true;
            }
        }
        else
        {
            result += c;
            spaceFound = false;
        }
    }
    if (result[0] == ' ')
        result.erase(result.begin());
    if (result.back() == ' ')
        result.erase(result.end() - 1);
    return result;
}

string reverseString(string &s)
{
    string str = removeExtraSpaces(s);
    int n = str.size();
    int j = 0;
    reverse(str, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str, j, i - 1);
            j = i + 1;
        }
    }
    reverse(str, j, n - 1);
    return str;
}