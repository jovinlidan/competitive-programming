#include <bits/stdc++.h>
#define lli long long int
using namespace std;
unordered_map<int, bool> vis;
 
int n, parent[1005] = {};
int solve(int x)
{
    if(vis[x])return x;
    vis[x] = true;
    return solve(parent[x]);
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
        vis.clear();
        if(i != 1)cout << " ";
        vis[i] =  true;
        cout << solve(parent[i]);
    }
    cout << '\n';
 
 
 
 
 
 
    return 0;
}