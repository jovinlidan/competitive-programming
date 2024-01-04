#include <bits/stdc++.h>
#define lli long long int
#define mxN 100005
using namespace std;
 
int n, k, z;
int dp[mxN][6] = {}, arr[mxN] = {};
lli solve(int i, int lefts, int moves)
{
    if(i < 0 || i >=n || moves == 0)return 0;
    if(dp[i][lefts] != 0)return dp[i][lefts];
    lli ans = 0;
    if( i < n)
    {
        ans = max(ans, arr[i] + solve(i+1, lefts, moves-1));
    }
    if(lefts > 0 && i >= 0)
    {
        ans = max(ans, arr[i] + solve(i-1, lefts-1, moves-1));
    }
    return dp[i][lefts] = ans;
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k >> z;
        memset(dp, 0, sizeof (dp));
        for(int i = 0; i < n; i++)cin >> arr[i];
 
        cout << solve(0, z, k+1)  << '\n';
 
    }
 
 
}