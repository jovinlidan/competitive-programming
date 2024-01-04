#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef set<int> si;
typedef pair<si, pii>psii;
 
char grid[9][9] = {};
int dx[] = {0,1,0,-1,0,1,-1,-1,1};
int dy[] = {0,0,1,0,-1,1,-1,1,-1};
 
bool isSafe(int x, int y)
{
    return (x >= 0) && (x < 8) && (y >= 0) && (y<8);
}
 
 
bool dfs()
{
    stack<piii> s;
    s.push({ 0, {7, 0}});
 
    while(!s.empty())
    {
        int x = s.top().second.first;
        int y = s.top().second.second;
        int weight = s.top().first;
        s.pop();
 
        if(weight >= 8)
        {
            return 1;
        }
        for(int i = 0; i < 9; i++)
        {
            int px = x+dx[i];
            int py = y+dy[i];
 
            if(isSafe(px, py) && grid[px-weight-1][py] != 'S' && grid[px-weight][py] != 'S')
            {
                //cout << px << " " << py << " " << weight<< '\n';
                s.push({weight+1,{px, py}});
            }
        }
    }
    return 0;
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }
    if(dfs())
    {
        cout << "WIN\n";
    }
    else cout << "LOSE\n";
    return 0;
}