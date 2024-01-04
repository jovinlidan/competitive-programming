#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
int n;
//int dp[mxN] = {};
//int solve(int mx, ll total)
//{
//    if(dp[mx] != -1)return dp[mx];
//    if(mx >= mxN)return -1e9;
//    //cout << mx << '\n';
//    if(total >= n)return 0;
//    int val = 1e9;
//
//    val = min(val, 1 + solve(mx+1, total + 1));
//    val = min(val, 1 + solve(mx, total+mx));
//    return dp[mx] = val;
//
//}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
//        memset(dp, -1, sizeof dp);
//        cout << solve(1, 0) << '\n';
        cin >> n;
 
        int base = 1, cur = 1, occurs = 1;
        while(base < n)
        {
            base += occurs;
            cur++;
            if(cur % 2 == 0)occurs++;
 
        }
        cout << cur-1 << '\n';
 
 
 
    }
 
    return 0;
}
 
//1
//2
//2
//
//3
//3
//
//4
//4
//4
 