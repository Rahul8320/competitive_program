#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> res;
    int maxEle = 0;
    for (int i = 0; i < n; i++) {
        maxEle = max(arr[i], maxEle);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxEle)
            res.push_back(i + 1);
    }
    int count = 0;
    for (auto it : res) {
        if (it >= k) {
            count++;
            count += (n - it);
        }

    }
    cout << count << endl;
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
