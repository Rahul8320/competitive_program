#include<bits/stdc++.h>
using namespace std;
#define ll long long

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        int temp = n - i;
        while (temp--) {
            cout << " ";
        }
        temp = i;
        while (temp--) {
            cout << "#";
        }
        cout << endl;
    }
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    staircase(n);

    return 0;
}