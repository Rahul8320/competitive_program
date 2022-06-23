#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;cin>>n;
	vector<int> vc;
	for(int i=0;i<n-1;i++){
		int k;cin>>k;
		vc.push_back(k);
	}

	// total of sum best approach lest time and lest space
	int total = (n*(n+1))/2;
	for(auto it:vc){
		total -= it;
	}
	cout<<total<<endl;

	// create an new array
	// int arr[n+1] = {0};
	// for(auto it:vc){
	// 	arr[it] = 1;
	// }
	// for(int i=1;i<=n;i++){
	// 	if(arr[i] != 1){
	// 		cout<<i<<endl;
	// 		break;
	// 	}
	// }

	// using map 
	// unordered_map<int,int> mp;
	// for(auto it:vc){
	// 	mp[it]++;
	// }
	// for(int i=1;i<=n;i++){
	// 	if(mp[i] != 1){
	// 		cout<<i<<endl;
	// 		break;
	// 	}
	// }


	return 0;
}