#include <bits/stdc++.h>
using namespace std;
int n, m, ans= 0, l , r, temp;
bool cats[100005] = {};
bool vis[100005] = {false};
 
vector<vector<int>> adj(100005);
 
void solve(int x, int cons)
{
    if(vis[x])return;
    vis[x] = true;
    if(cons > m)return;
    for(int i = 0; i < adj[x].size(); i++)
    {
        if(cats[adj[x][i]])solve(adj[x][i], cons+1);
        else solve(adj[x][i], 0);
    }
//    cout << adj[x].size() << " " << x <<" ini \n";
    if(adj[x].size() == 1 && x != 1)ans++;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        cats[i] = temp;
    }
 
    for(int i = 1; i < n; i++)
    {
        cin >> l >> r;
        //int mn = 1e9, mx = -1e9;
        //mn = min(l, r);
        //mx = max(l, r);
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    //cout << adj[3].size();
    if(cats[1])solve(1, 1);
    else solve(1, 0);
 
    cout << ans << '\n';
 
    return 0;
}