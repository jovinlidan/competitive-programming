#include <bits/stdc++.h>
#define mxN 105
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
int parent[mxN] = {};
vector<vector<int>> adj(mxN);
int x, y, px, n, m;
bool dfs()
{
    int loops = 0, res = 0;
    set<int> cnt;
    bool vis[mxN] = {};
    stack<int> q;
    q.push(1);
 
    while(!q.empty())
    {
        x = q.top();
        q.pop();
        vis[x] = 1;
        cnt.insert(x);
        for(int i = 0; i < adj[x].size(); i++)
        {
            px = adj[x][i];
            if(!vis[px])
            {
                loops = 0;
                q.push(px);
                parent[px] = x;
            }
            else if(parent[x] != px)
            {
                loops++;
                if(loops == 1)res++;
                //cout << loops << '\n';
            }
        }
    }
    //cout << loops << '\n';
    //cout << res << '\n';
    return (res >= 1) && (res <= 2)     && (cnt.size() == n);
 
 
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
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(dfs())cout << "FHTAGN!\n";
    else cout << "NO\n";
    return 0;
}