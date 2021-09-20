// Find sum of all dies for a given number
// input -> 3 ->[1,2,3] -> o/p ->(1*2+2*3+3*1)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    ll n;
    cin >> n;
    ll sum = 0, sqsum = 0;
    for (ll i = 1; i <= n; i++) {
        sum += i;
        sqsum += (i * i);
    }
    ll ans = (sum * sum - sqsum) / 2;
    cout << ans << endl;
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

/*
Time :- O(n)
space :- O(1)
*/