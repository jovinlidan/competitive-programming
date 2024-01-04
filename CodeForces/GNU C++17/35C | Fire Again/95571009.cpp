#include <bits/stdc++.h>
#define mxN 2005
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
 
vector<vector<pii>> adj(mxN);
vector<ll> st,en, di;
bool vis[mxN][mxN] = {};
ll x, y, px, n, m, w, k, py;
queue<pii> q;
 
bool isSafe(int x, int y)
{
    return (x >= 1) && (x <= n) && (y >= 1) && (y <= m) && (!vis[x][y]);
}
 
void bfs()
{
    int dirX[] = {0, 1, 0, -1};
    int dirY[] = {1, 0, -1, 0};
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
 
        for(int i = 0 ; i < 4; i++)
        {
            px = dirX[i] + x;
            py = dirY[i] + y;
            if(isSafe(px, py))
            {
                q.push({px, py});
                vis[px][py] = 1;
 
            }
        }
 
    }
    cout << x << " " << y << '\n';
    return;
}
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
    cin >> k;
 
    for(int i = 0; i < k; i++)
    {
        cin >> x >> y;
        vis[x][y] = 1;
        q.push({x, y});
    }
    bfs();
 
    return 0;
}