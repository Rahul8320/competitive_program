#include<bits/stdc++.h>
using namespace std;
#define ll long long

string timeConversion(string s) {
    string sub = s.substr(8, 2);
    if (sub == "PM") {
        string str = s.substr(0, 2);
        if (str < "12") {
            int t = stoi(str);
            t += 12;
            s.replace(0, 2, to_string(t));
        }
    }
    if (sub == "AM") {
        string str = s.substr(0, 2);
        if (str == "12") {
            s.replace(0, 2, "00");
        }
    }
    s.replace(8, 2, "");
    return s;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    getline(cin, s);

    string result = timeConversion(s);
    cout << result << endl;

    return 0;
}