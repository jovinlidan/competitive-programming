#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
int parent[1005] = {};
bool vis[1005] = {};
unordered_map<int, unordered_map<int, int>> mp;
set<pii> st;
vector<pair<int, pii>> emp;
int finds(int x)
{
    if(parent[x] == x)return x;
    return parent[x] = finds(parent[x]);
}
void unions(int x, int y)
{
    int px = finds(x);
    int py = finds(y);
    if(px != py)
    {
        parent[py] = px;
    }
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    for(int i = 0;i <= 1000; i++)parent[i] = i;
    int n, xxx, m, x, y, c;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> xxx;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y >> c;
        if(!st.count({x, y}))mp[x][y] = c;
        else mp[x][y] = min(mp[x][y], c);
        st.insert({x, y});
    }
    for(auto i : st)
    {
        x = i.first;
        y = i.second;
        emp.push_back({mp[x][y], {x, y}});
    }
    sort(emp.begin(), emp.end());
 
    int ans = 0, cnt =0;
    for(int i = 0; i < emp.size(); i++)
    {
        c = emp[i].first;
        x = emp[i].second.first;
        y = emp[i].second.second;
        //cout << x << " " << y << '\n';
        if(y == finds(y) )
        {
            unions(x, y);
            ans+=c;
            vis[x] = 1;
            cnt++;
           // cout << x <<"-" << y << '\n';
        }
    }
    if(cnt != n-1)cout << -1 << '\n';
    else cout << ans << '\n';
 
 
 
 
 
}