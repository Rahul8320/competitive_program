#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n,m;
    cin>>n>>m;
    ll given_arr[n];
    for (ll i=0;i<n;i++)
    {
    	cin>>given_arr[i];
    }
//  Given array print -----------------
    // cout<<"Given array : \n";
    // for(int i=0;i<n;i++)
    // {
    // 	cout<<given_arr[i]<<" ";
    // }
    // cout<<endl;
// -------------------------
    ll arr[m+1]={0};
    for(ll i=0;i<n;++i)
    {
    	arr[given_arr[i]]++;
    }
//  our array print --------------------
    // cout<<"Our array : \n";
    // for(int i=0;i<=m;i++)
    // {
    // 	cout<<arr[i]<<" ";
    // }
    // cout<<endl;
//  -----------------------------------

    ll count=0;
    for (ll i=0;i<=m;++i)
    {
    	while(arr[i]>=3)
    	{
    		count++;
    		arr[i]=arr[i]-3;
    	}
    }

    for (ll i=0;i<=m;i++)
    {
    	while(arr[i]>=1 && i<=m-2)
    	{
    		if(arr[i+1]>=1 && arr[i+2]>=1)
    		{
    			count++;
    			arr[i+2]--;
    			arr[i+1]--;
    		}
    		arr[i]--;
    	}
    }

    cout<<count<<endl;

	return 0;    
}
