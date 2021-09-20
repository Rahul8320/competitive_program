#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
Approach: The idea is to represent N as a sequence of length L+1 as:
N = a + (a+1) + (a+2) + .. + (a+L)
=> N = (L+1)*a + (L*(L+1))/2
=> a = (N- L*(L+1)/2)/(L+1)
We substitute the values of L starting from 1 till L*(L+1)/2 < N
If we get ‘a’ as a natural number then the solution should be counted.
*/
void bestApproach()
{
    long long int n;
    cin >> n;
    long long int ct = 0;
    for (long long int i = 1; (i * (i + 1)) < 2 * n; i++) {
        double a = (1.0 * n - (i * (i + 1)) / 2) / (i + 1);
        if (a - (int)a == 0.0)
            ct++;
    }
    cout << ct << endl;
}

void betterSolve()
{
    ll n;
    cin >> n;
    int count = 0;
    int sum = 0;
    queue<int> q;
    for (int i = 1; i <= (n / 2) + 1; i++) {
        q.push(i);
        sum += i;
        while (sum > n) {
            sum -= q.front();
            q.pop();
        }
        if (sum == n) {
            count++;
        }
    }
    cout << count << endl;
}

//time conplexity: O(n*n)
// void solve()
// {
//     ll n;
//     cin >> n;
//     ll count = 0;
//     for (ll i = 1; i <= n / 2; i++) {
//         ll sum = 0;
//         for (ll j = i; j <= n / 2; j++) {
//             if (sum < n) {
//                 sum += j;
//             }
//             else
//                 break;
//         }
//         if (sum == n) {
//             count++;
//         }
//     }
//     cout << count << endl;
// }


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tc;
    cin >> tc;
    while (tc--) {
        // solve();
        // betterSolve();
        bestApproach();

        return 0;
    }
}