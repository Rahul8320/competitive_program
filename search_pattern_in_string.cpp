#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<int> search_pattern(string pattern, string text)
{
	vector<int> result;
	int target = pattern.length();
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == pattern[0]) {
			if (text.compare(i, target, pattern) == 0) {
				result.push_back(i + 1);
			}
		}
	}
	if (result.size() == 0) result.push_back(-1);
	return result;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string pattern, text;
	cin >> pattern >> text;
	vector<int> result = search_pattern(pattern, text);
	for (auto e : result) {
		cout << e << " ";
	}
	cout << endl;
	return 0;
}