/* 
. Longest Substring Without Repeating Characters
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    unordered_map<char,int> mp;
    int ret = 0,slow = 0,n = str.size();
    for (int fast = 0; fast < n; fast++)
    {
        if(mp.count(str[fast]) != 0) slow = max(slow, mp[str[fast]]+1);
        mp[str[fast]] = fast;
        ret = max(ret, (fast-slow+1));
    }
    cout << ret;

    cout << "\n";
    return 0;
}