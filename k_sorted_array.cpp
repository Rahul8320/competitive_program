//Given an array of n distinct elements. Check whether the given array is a k sorted array or not. A k sorted array is an array where each element is at most k distance away from its target position in the sorted array.
#include<iostream>
#include<string>
#include<map>

using namespace std;

string isKSortedArray(int arr[], int n, int k)
{
	//code here.
	bool flag = true;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp.insert({arr[i], i});
	}
	int pos = 0;
	for (auto it : mp) {
		if (abs(it.second - pos) > k) {
			flag = false;
			break;
		}
		pos++;
	}
	if (flag) return "Yes";
	else return "No";
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << isKSortedArray(arr, n, k) << endl;
	return 0;
}