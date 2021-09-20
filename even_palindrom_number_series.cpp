#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin >> n;
    ll first = 0;
    ll second = 2;
    ll count = 2;
    cout << first << " " << second << " ";
    ll c = 4 * second + first;
    while (c <= n) {
        cout << c << " ";
        count++;
        first = second;
        second = c;
        c = 4 * second + first;
    }
    cout << endl;
    cout << count << endl;
}

void fibonacci()
{
    ll n;
    cin >> n;
    ll first = 0;
    ll second = 1;
    cout << first << " " << second << " ";
    ll c = first + second;
    ll count = 2;
    while (c <= n) {
        cout << c << " ";
        count++;
        first = second;
        second = c;
        c = first + second;
    }
    cout << endl;
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
    fibonacci();
    return 0;
}

/*
4 = 2 + 3
5 = 3 + 4
6th = 4th + 5th
= 2 + 3 + 3 + 4
= 2 + 2 * 3 + 4
= 2 + 3 * 3 + 2
= 2 + 3 * 3 + 1 + 0
= 4 * 3 + 0
3th = 4 * 2nd + 1st
4th = 4 * 3th + 2nd
nth = n - 1 th * 4 + n - 2 th
*/