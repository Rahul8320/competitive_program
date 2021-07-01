/*
You are given an integer C. Let d be the smallest integer such that 2d is strictly greater than C.

Consider all pairs of non-negative integers (A,B) such that A,B<2d and A⊕B=C (⊕ denotes the bitwise XOR operation). Find the maximum value of A⋅B over all these pairs.
*/

/*
i/p-->
2
13
10
*/

/*
o/p -->
70
91
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin>>t;
    while(t--)
    {
    	ll c;
    	cin>>c;
    	ll temp = c;
    	ll i=0;
    	while(temp>0)
    	{
    		temp=temp/2;
    		i++;
    	}
    	ll b = pow(2,i-1)-1;
    	ll a = (b^c);
    	cout <<(a*b)<<endl;
    }

    return 0;
}