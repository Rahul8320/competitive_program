#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void combination_sum(vector<ll>v, ll start, ll target, vector<ll>temp, vector<vector<ll>>result)
{
    if (target < 0) return;
    if (target == 0) {
        // for (auto it : temp) {
        //     cout << it << " ";
        // }
        // cout << endl;
        vector<ll> t;
        t = temp;
        result.push_back(t);
    }
    for (ll i = start; i < v.size(); i++) {
        temp.push_back(v[i]);
        combination_sum(v, i, target - v[i], temp, result);
        temp.erase(temp.end() - 1);
    }
}

void solve()
{
    ll n, target;
    cin >> n >> target;
    vector<ll> v;
    for (ll i = 0; i < n; ++i)
    {
        ll k;
        cin >> k;
        v.push_back(k);
    }

    vector<vector<ll>> result;
    vector<ll>temp;
    combination_sum(v, 0, target, temp, result);
    for (auto it : result) {
        for (auto e : it) {
            cout << e << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
