/*
Finally, progress reached the Madoka family and she decided to play with her little sister in the sensational game Space Arrays.

The rules of the game are as follows:

Initially, a sequence a1,a2,…,aN is given.
The players alternate turns.
In each turn, the current player must choose an index i and increment ai, i.e. change ai to ai+1.
Afterwards, if there is no permutation p1,p2,…,pN of the integers 1 through N such that ai≤pi holds for each valid i, the current player loses.
Otherwise, the game continues with the next turn.
Madoka is asking you to help her ― tell her if the first player (the player that plays in the first turn) or second player wins this game if both play optimally.
*/

/*  i/p --->
4
4
1 2 3 3
4
1 1 3 3
5
1 2 2 1 5
3
2 2 3
*/

/* o/p ---->
First
Second
Second
Second
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
    	ll n;
    	cin>>n;
    	ll arr[n];
    	for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	int count=0;
    	int N=sizeof(arr)/sizeof(arr[0]);
    	sort(arr,arr+N);

    	for(ll i=0;i<n;i++)
    	{
    		if(arr[i]>(i+1))
    		{
    			count=2;
    			break;
    		}
    		while(arr[i]<(i+1))
    		{
    			arr[i]++;
    			count++;
    		}
    	}

    	if(count%2==0)
    	{
    		cout<<"Second"<<endl;
    	}
    	else
    		cout<<"First"<<endl;
    }

    return 0;
}