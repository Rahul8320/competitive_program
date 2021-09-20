#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int brr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> brr[i];
    }
    int x = 0;
    if (n == 2) {
        int s1 = brr[0] - arr[0];
        int s2 = brr[0] - arr[1];
        x = min(abs(s1), abs(s2));
    }
    sort(arr, arr + n);
    if (n == 3) {
        int s1 = brr[0] - arr[0];
        int s2 = brr[1] - arr[2];
        x = min(abs(s1), abs(s2));
    }
    if (n > 3 ) {
        int target = 0;
        if (n < 10)
            target = n / 2;
        target = 10;
        map<int, int> mp1, mp2;
        for (int i = 0; i < target; i++) {
            int t = brr[i] - arr[i] ;
            mp1[t++];
        }
        for (int i = n - 1; i >= 0; i--) {
            if (target < 0) {
                break;
            }
            int t = brr[i - 1] - arr[i] ;
            mp2[t++];
            target--;
        }
        for (auto it : mp1)
        {

        }
    }
    cout << x << endl;
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
