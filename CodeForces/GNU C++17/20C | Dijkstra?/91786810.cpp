#include <bits/stdc++.h>
#define lli unsigned long long int
#define mxN 100005
#define INF 10e18
 
using namespace std;
typedef pair<lli,int> pii;
 
int n, m, a, b, w, parent[mxN] =  {};
 
vector<vector<int>> adj(mxN);
bool valid = false;
unordered_map<int , unordered_map<int, int>> weightData;
 
vector <lli> distances(mxN, INF);
void bfs(int x)
{
    priority_queue<pii, vector<pii>, greater<pii> > q;
    q.push({0,x});
    distances[x] = 0;
    while(!q.empty())
    {
        pii temp = q.top();
        q.pop();
        x  = temp.second;
 
 
        for(int i = 0; i < adj[x].size(); i++)
        {
            int px = adj[x][i];
            lli incr = weightData[x][px];
            if(distances[x]  + incr < distances[px])
            {
                parent[px] = x;
                if(px == n)
                {
                    valid = true;
                }
                distances[px] = distances[x] + incr;
                q.push({distances[px],px});
            }
 
        }
    }
}
void printPath(int j)
{
    if (parent[j] == - 1) return;
    printPath(parent[j]);
 
    cout << " " << j;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
 
    for(int i = 0; i < m ;i++)
    {
        cin >> a >> b>> w;
        adj[a].push_back(b);
        adj[b].push_back(a);
        weightData[a][b] = w;
        weightData[b][a] = w;
 
    }
    bfs(1);
    if(valid)
    {
        //cout << "T\n";
        //cout << parent[n];
        cout << 1;
        parent[1] = -1;
        printPath(n);
 
 
    }
    else cout << -1;
    cout << '\n';
 
 
    //cout << ans << '\n';
    //cout<< distances[n] << '\n';
 
    return 0;
}