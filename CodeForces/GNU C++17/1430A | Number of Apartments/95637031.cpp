#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
 
bool dp[334][201][143] = {};
bool v = 0;
bool solve(int x, int a, int b, int c)
{
    if(v)return v;
    if(x == 0)
    {
        v= 1;
       cout << a << " " << b << " " << c << '\n';
       return dp[a][b][c] = 1;
    }
    if(x < 0)return dp[a][b][c] = 0;
    bool aa = solve(x - 3, a+1, b, c);
    bool bb = solve(x - 5, a, b+1, c);
    bool cc = solve(x - 7, a, b, c+1);
 
    return dp[a][b][c] = aa | bb | cc;
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        //memset(dp, 0, sizeof dp);
        v= 0;
        int n;
        cin >> n;
        solve(n, 0, 0, 0);
        if(!v)cout << -1 << '\n';
    }
 
 
    return 0;
}