/* array rotaion by k element in right direction using an extra array
Time complexity : O(n)
Space Complexity : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll brr[n]; // creating a new array
    k = k % n; // if k is large than n, (k % n) < n
    for (ll i = 0; i < n; i++) {
        if (i + k >= n) {
            brr[i + k - n] = arr[i];
        }
        else {
            brr[i + k] = arr[i];
        }
    }

    for (ll i : brr) // print the new array
        cout << i << " ";
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