#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
typedef pair<int, int> pii;
 
string t1 = "", t2 = "";
 
int toInt(string s)
{
    stringstream cvt(s);
    int x = 0;
    cvt >> x;
    return x;
}
char grid[10][10]={};
bool vis[10][10] = {};
bool isSafe(int x, int y)
{
    return x>= 0 && x < 8 && y>=0 && y < 8;
}
int dfsX(int x, int y, bool change)
{
    int ans = 0;
 
    for(int i = 0; i < x; i++)
    {
        if(grid[i][y] == 'B')
        {
            ans++;
            vis[i][y] = change;
        }
    }
 
    for(int i = x; i < 8; i++)
    {
        if(grid[i][y] == 'B')
        {
            ans++;
            vis[i][y] = change;
        }
    }
    return ans;
}
 
int dfsY(int x, int y, bool change)
{
    int ans = 0;
 
    for(int i = 0; i < y; i++)
    {
        if(grid[x][i] == 'B')
        {
            ans++;
            vis[x][i] = change;
        }
    }
 
    for(int i = y; i < 8; i++)
    {
        if(grid[x][i] == 'B')
        {
            ans++;
            vis[x][i] = change;
        }
    }
    return ans;
 
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(!vis[i][j] && grid[i][j] == 'B')
            {
                int xx = dfsX(i, j, 0);
                int yy = dfsY(i, j, 0);
                if(xx > yy)
                {
                    if(xx == 8)
                    {
                        dfsX(i, j, 1);
                        ans++;
                    }
                    else
                    {
                        vis[i][j] = 1;
                        ans++;
                    }
                }
                else
                {
                    if(yy == 8)
                    {
                        dfsY(i, j, 1);
                        ans++;
                    }
                    else
                    {
                        vis[i][j] = 1;
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << '\n';
 
    return 0;
}
 
 