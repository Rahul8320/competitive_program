#include<bits/stdc++.h>
using namespace std;


int diagonalDifference(vector<vector<int>> arr) {
	int s1 = 0, s2 = 0;
	long unsigned int size = arr.size();
	for (long unsigned int i = 0; i < size; i++) {
		s1 += arr[i][i];
		cout << arr[i][i] << " ";
	}
	cout << endl << s1 << endl;
	for (long unsigned int i = size - 1, j = 0; j < size; i--) {
		s2 += arr[i][j];
		cout << arr[i][j] << " ";
		j++;
	}
	cout << endl << s2 << endl;
	return abs(s1 - s2);
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<vector<int>> arr;
	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int j = 0; j < n; j++) {
			int t;
			cin >> t;
			temp.push_back(t);
		}
		arr.push_back(temp);
	}

	cout << diagonalDifference(arr) << endl;

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}