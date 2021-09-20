#include<bits/stdc++.h>
using namespace std;
#define ll long long


void TOH(int n, string source, string destination, string helper)
{
    if (n == 1)
    {
        cout << n << " move from " << source << " to " << destination << endl;
        return;
    }
    TOH(n - 1, source, helper, destination);
    cout << n << " move from " << source << " to " << destination << endl;
    TOH(n - 1, helper, destination, source);
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n;
    cin >> n;
    string s, d, h;
    // cout << " Enter source,destination,helper" << endl;
    cin >> s >> d >> h;
    TOH(n, s, d, h);

    return 0;
}
