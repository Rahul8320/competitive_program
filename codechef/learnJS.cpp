#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int e;
    cin >> e;
    map<int, vector<pair<int, int>>> mp;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mp[a].push_back(make_pair(b, c));
    }

    int a, b;
    cin >> a >> b;
    int cost = 99999999;
    vector<pair<int, int>> vc = mp[a];
    for (auto it : vc)
    {
        if (it.first == b)
        {
            cost = min(cost, it.second);
        }

        int c = 0;
        vector<pair<int, int>> v = mp[it.first];
        for (auto it2 : v)
        {
            if (it2.first == b)
            {
                c += it2.second;
                break;
            }
        }
        if (c != 0)
        {
            cost = min(c, cost);
        }
    }
    cout << cost;

    return 0;
}