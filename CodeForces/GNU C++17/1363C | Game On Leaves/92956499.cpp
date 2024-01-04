#include <bits/stdc++.h>
#define lli long long int
#define mxN 100005
using namespace std;
 
typedef pair<int,int> pii;
int n, x, u, v;
vector<vector<int>> adj(1005);
 
unordered_map<int ,bool > vis;
int bfs(int x)
{
    int cnt = 0;
    queue<int> q;
 
    q.push(x);
    vis[x] = 1;
    while(!q.empty())
    {
        x  = q.front();
        cnt++;
        q.pop();
      //  cout << x <<"-n\n";
        for(int i = 0; i < adj[x].size(); i++)
        {
            int px = adj[x][i];
            if(!vis[px])
            {
                q.push(px);
                vis[px] = 1;
            }
        }
 
    }
    return cnt;
 
 
 
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
        adj.clear();
        for(int i = 0; i < 1005; i++)
        {
            adj[i].clear();
        }
        vis.clear();
 
       cin >> n >> x;
       for(int i = 0; i < n-1; i++)
       {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
       }
       if(adj[x].size() <= 1)cout << "Ayush\n";
       else
       {
           int ans = 0;
            vis[x] = 1;
            for(int i = 0; i < adj[x].size(); i++)
            {
                int px = adj[x][i];
                ans += bfs(px);
            }
            if(ans % 2  == 0)cout << "Ashish\n";
            else cout << "Ayush\n";
       }
 
    }
 
}