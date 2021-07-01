#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string swap(string s,int i,int l)
{
    char ch = s[i];
    s[i]=s[l];
    s[l]=ch;

    return s;
}

void permute(string s,int l,int r)
{
    if(l==r){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<r;i++){
        s = swap(s,l,i);
        permute(s,l+1,r);
        s = swap(s,l,i);
    }
    return;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    
    string str;
    cin>>str;
    permute(str,0,str.length());

    return 0;
}
