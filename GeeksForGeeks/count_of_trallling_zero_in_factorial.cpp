#include<iostream>
using namespace std;

int main() {
    int n;cin>>n;
    
    if(n < 5){
        cout << 0<<endl;
        return 0;
    }

    int count = 0;
    for(int i=5;i<=n;i=i*5){
        count += (n/i);
    }
    cout<<count<<endl;

    return 0;
}