#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef pair<pii, string> piis;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m, ans = 0;
        char arr[105][105] = {};
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if(j == m-1)
                {
                    if(arr[i][j] == 'R')ans++;
                }
                else if(i == n-1)
                {
                    if(arr[i][j] == 'D')ans++;
                }
            }
        }
        cout << ans << '\n';
 
 
 
 
 
 
 
    }
}