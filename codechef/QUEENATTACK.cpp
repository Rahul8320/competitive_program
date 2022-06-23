#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int arr[n+1][n+1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                arr[i][j] = 0;
            }
        }
        arr[x][y] = 1;
        int count = 0;
        int i = x - 1;
        int j = y - 1;
        while (i > 0 && j > 0)
        {
            i--;
            j--;
            arr[i][j] = 1;
        }
        i = x + 1;
        j = y + 1;
        while (i <= n && j <= n)
        {
            i++;
            j++;
            arr[i][j] = 1;
        }
        i = x - 1;
        j = y - 1;
        while (i <= n && j > 0)
        {
            i++;
            j--;
            arr[i][j] = 1;
        }
        i = x + 1;
        j = y + 1;
        while (i > 0 && j <= n)
        {
            i--;
            j++;
            arr[i][j] = 1;
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
        cout << count - 1 << endl;
    }

    return 0;
}