#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int, int> pii;
int n, m, k;
char grid[505][505] = {};
 
bool isSafe(int i, int j)
{
    return (i >= 0 && i < n&& j >= 0 && j < m && grid[i][j] != '#' && grid[i][j] != 'X');
}
vector<pair<int, int>> ans;
 
void solve(int x, int y)
{
    //k--;
    int dirX[] = {1, 0, -1, 0};
    int dirY[] = {0, 1, 0, -1};
 
    bool vis[505][505] = {};
    stack<pii> q;
    q.push({x, y});
 
    vis[x][y] = 1;
    while(!q.empty())
    {
        x= q.top().first;
        y = q.top().second;
        q.pop();
 
        for(int i = 0; i < 4; i++)
        {
            int px = x+dirX[i];
            int py = y+dirY[i];
            if(isSafe(px, py) && !vis[px][py])
            {
                q.push({px, py});
                vis[px][py] = 1;
            }
        }
        ans.push_back({x, y});
 
 
 
    }
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    cin >> n >> m >> k;
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
 
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == '.' && k > 0)
            {
                ans.clear();
                solve(i, j);
                int length = ans.size();
                while(k-- && length--)
                {
                    int px = ans[length].first;
                    int py = ans[length].second;
                    grid[px][py] = 'X';
 
                }
            }
 
 
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << grid[i][j];
 
        }
        cout << '\n';
    }
 
 
 
 
 
}