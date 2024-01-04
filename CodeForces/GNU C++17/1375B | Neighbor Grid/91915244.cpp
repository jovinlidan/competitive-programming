#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
 
        cin >> n >> m;
        int arr[305][305] = {};
        bool valid = true;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0 ; j < m; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] > (4 - ((i == 0) + (i == n-1) + (j == 0) + (j == m-1))))
                {
                    valid = false;
                }
                else
                {
                    arr[i][j] = 4 -((i == 0) + (i == n-1) + (j == 0) + (j == m-1));
                }
            }
        }
        if(valid)
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
            {
                for(int j = 0 ; j < m; j++)
                {
                    cout << arr[i][j];
                    cout << " ";
                }
                cout << '\n';
            }
        }else cout << "NO\n";
 
    }
 
    return 0;
}