#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  unsigned long long int  ll;
typedef pair<ll, ll> pii;
 
void dfs()
{
    int dirX[] = {0, 0};
    int dirY[] = {1, -1};
 
 
 
 
}
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    int last;
    for(int i = sy; i <= m; i++)
    {
        cout << sx << " " << i << '\n';
    }
    for(int i = 1; i < sy; i++)
    {
        cout << sx << " " << i << '\n';
        last = i;
    }
    int newLast = last;
    for(int i = 1; i <= n; i++)
    {
        if(i == sx)continue;
        last = newLast;
        for(int j = last; j <= m; j++)
        {
            cout << i << " " << j << '\n';
            newLast = j;
        }
        for(int j = 1; j < last; j++)
        {
            cout << i << " " << j << '\n';
            newLast = j;
        }
    }
 
    return 0;
}