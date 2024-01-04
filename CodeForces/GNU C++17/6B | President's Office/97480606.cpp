#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m;
    map<char, bool> mp;
    char boss;
    cin >> n >> m >> boss;
    char grid[n+3][m+3] = {};
    mp[boss] = 1;
    mp['.'] = 1;
    mp[grid[n+1][1]] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(grid[i][j] == boss)
            {
                ans += 1-mp[grid[i][j+1]];
                mp[grid[i][j+1]] = 1;
                ans += 1-mp[grid[i][j-1]];
                mp[grid[i][j-1]] = 1;
                ans += 1-mp[grid[i+1][j]];
                mp[grid[i+1][j]] = 1;
                ans += 1-mp[grid[i-1][j]];
                mp[grid[i-1][j]] = 1;
            }
        }
    }
    cout << ans << '\n';
 
 
 
    return 0;
}