//Given an integer N, find a prime number S such that all digits of N occur in a contiguous sequence. There may be multiple answers. Print any one of them.



#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(ll num) {
    for (ll i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (isPrime(n)) {
        cout << n << endl;
    }
    else {
        ll i = 100;
        ll arr[5] = {0, 1, 3, 5, 7};
        ll k = 1;
        while (i--) {
            ll j = 0;
            while (j < 5) {
                n = n * (pow(10, k)) + arr[j];
                if (isPrime(n)) {
                    cout << n << endl;
                    break;
                }
                j++;
            }
            if (j != 5) break;
            k++;
        }
    }
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
