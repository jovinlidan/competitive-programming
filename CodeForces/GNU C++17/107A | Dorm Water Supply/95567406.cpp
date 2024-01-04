#include <bits/stdc++.h>
#define mxN 1005
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
 
vector<vector<pii>> adj(mxN);
vector<ll> st,en, di;
bool vis[mxN] = {};
ll degree[mxN] = {};
ll x, y, px, n, m, w;
void dfs(ll x, ll start)
{
    stack<int> q;
    q.push(x);
    ll mn = 1e18;
 
    while(!q.empty())
    {
        x = q.top();
        q.pop();
        vis[x] = 1;
        for(int i = 0; i < adj[x].size(); i++)
        {
            px = adj[x][i].second;
            w = adj[x][i].first;
            mn = min(mn, w);
            if(!vis[px])
            {
                q.push(px);
            }
        }
        if(adj[x].size() == 0 && x != start)
        {
            st.push_back(start);
            en.push_back(x);
            di.push_back(mn);
            return;
        }
    }
 
 
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y >> w;
        adj[x].push_back({w, y});
        degree[y]++;
    }
    for(int i= 1; i <= n; i++)
    {
        if(!vis[i] && !degree[i])
        {
            dfs(i, i);
        }
    }
    if(st.size() == 0)cout << 0;
    else
    {
        cout << st.size() << '\n';
        for(int i = 0 ; i < st.size(); i++)
        {
            cout << st[i] << " " << en[i] << " " << di[i] << '\n';
        }
    }
    cout << '\n';
    return 0;
}