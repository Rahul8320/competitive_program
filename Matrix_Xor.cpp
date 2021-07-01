/*
Chef has a tasty ingredient ― an integer K. He defines a tasty matrix A with N rows (numbered 1 through N) and M columns (numbered 1 through M) as Ai,j=K+i+j for each valid i,j.

Currently, Chef is busy in the kitchen making this tasty matrix. Help him find the bitwise XOR of all elements of this matrix.
*/

/* i/p--
2
2 2 5
2 3 7

o/p--
14
5
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int min(int x, int y)
{
	return (x<y);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll TC;
    cin>>TC;
    while (TC--)
    {
        ll n,m,k;
        cin>>n>>m>>k;

        // 1st column
        ll ans = 0;
        for (ll i=1;i<=n;i++)
        {
        	if(min(i,m)%2 == 1)
        	{
        		ans ^= (k+i+1);
        	}
        }

        // Last Row
        for(ll i=2;i<=m;i++)
        {
        	if(min(n,m-i+1)%2 == 1)
        	{
        		ans ^= (k+n+i);
        	}
        }
        cout<<ans<<endl;
    }
    return 0;
}