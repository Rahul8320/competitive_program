/* Leetcode
1641 : Count Sorted Vowel Strings
Given an integer n, return the number of strings of length n that consist only of vowels (a, e, i, o, u) and are lexicographically sorted.
A string s is lexicographically sorted if for all valid i, s[i] is the same as or comes before s[i+1] in the alphabet.
Link : https://leetcode.com/problems/count-sorted-vowel-strings/
*/

#include <bits/stdc++.h>
using namespace std;

int countVowelStrings(int n)
{
    if (n == 1)
    {
        return 5;
    }
    int a = 5;
    int e = 4;
    int i = 3;
    int o = 2;
    int u = 1;
    for (int k = 3; k <= n; k++)
    {
        a = (a + e + i + o + u);
        e = (e + i + o + u);
        i = (i + o + u);
        o = (o + u);
        u = u;
    }
    int sum = (a + e + i + o + u);
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << countVowelStrings(3); // output -> 35

    cout << "\n";
    return 0;
}