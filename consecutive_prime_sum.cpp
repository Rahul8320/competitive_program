#include<bits/stdc++.h>
#include <vector>
using namespace std;

bool isPrime(int k)
{
	for (int j=2;j<=k/2;j++)
	{
		if(k%j==0)
			return false;
	}
	return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    while(n--)
    {
    	int num;
        cin>>num;
        vector<int> v;
        for(int i=2;i<=num;++i)
        {
        	if(isPrime(i))
        		v.push_back(i);
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
        	int sum=0;
        	for(int j=i;j<v.size();j++)
        	{
        		if(sum<num)
        			sum+=v[j];
        		else 
        			break;
        		// cout<<sum<<endl;
        	}
        	if(sum==num)
        		ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
