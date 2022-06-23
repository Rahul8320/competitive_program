#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            str += (s[i] + 32);
        }

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            str += s[i];
        }
    }

    int size = str.length();
    for (int i = 0; i < size / 2; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << isPalindrome("A mama");
    return 0;
}