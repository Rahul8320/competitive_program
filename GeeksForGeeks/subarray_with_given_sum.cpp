#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int arr[], int n, int s)
{
    vector<int> vc;
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == s)
        {
            vc.push_back(j + 1);
            vc.push_back(i + 1);
            return vc;
        }
        while (sum > s)
        {
            sum -= arr[j];
            j++;
            if (sum == s)
            {
                vc.push_back(j + 1);
                vc.push_back(i + 1);
                return vc;
            }
        }
    }

    vc.push_back(-1);
    return vc;
}

int main()
{

    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v = solve(arr,n,s);
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}