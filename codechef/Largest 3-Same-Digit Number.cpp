// 2264. Largest 3 - Same - Digit Number in String

#include <bits/stdc++.h>
using namespace std;

string largestGoodInteger(string num)
{
    vector<string> vc;
    for (int i = 0; i < num.length(); i++)
    {
        string str = "";
        char ch = num[i];
        if (num[i + 1] == ch && (i + 1) < num.length())
        {
            i++;
            if (num[i + 1] == ch && (i + 1) < num.length())
            {
                str += num[i];
                str += num[i];
                str += num[i];
            }
        }
        if (str != "")
        {
            vc.push_back(str);
        }
    }
    if (vc.size() == 0)
    {
        return "";
    }
    sort(vc.begin(), vc.end());
    return vc[vc.size() - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << largestGoodInteger("6777133339");
    return 0;
}