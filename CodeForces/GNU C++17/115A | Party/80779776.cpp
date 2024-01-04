#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int n, parent[2005] = {};
int ans = -1e9;
int solve(int x, int byk)
{
    byk+=1;
    if(parent[x] == -1)return byk;
    return solve(parent[x], byk);
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n;
 
    for(int i = 1; i <= n; i++)
    {
        cin >> parent[i];
    }
    for(int i = 1; i <= n; i++)
    {
        ans = max(ans, solve(i, 0));
    }
    cout << ans << '\n';
 
 
    return 0;
}