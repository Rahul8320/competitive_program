#include <bits/stdc++.h>
using namespace std;

void countDuplicate(string str)
{
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cout << it.first << " --> " << it.second << "\n";
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    getline(cin, input);
    countDuplicate(input);
    cout << "\n";
    return 0;
}