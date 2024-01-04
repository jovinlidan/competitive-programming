#include <bits/stdc++.h>
using namespace std;
#define mxN 100005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
bool cmp (pair<int, int> l , pair<int, int> r)
{
    return l.second < r.second;
}
ll modpow(ll x, ll y, ll m)
{
    ll res = 1;
    while(y > 0)
    {
        if(y & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
 
    return res;
}
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int start =0, ends = 0, ls = 0, le = 0;
    string s;
    cin >> s;
    int dirX[] = {0, 1, 0, -1};
    int dirY[] = {1, 0, -1, 0};
    unordered_map<char, int> mp;
    mp['R'] = 0;
    mp['D'] = 1;
    mp['L'] = 2;
    mp['U'] = 3;
    int n = s.length();
    bool v =1;
    unordered_map<int , unordered_map<int, bool>> vis;
    for(int i = 0; i < n; i++)
    {
        //vis[start][ends] = 1;
        ls = start;
        le = ends;
        start += dirX[mp[s[i]]];
        ends += dirY[mp[s[i]]];
        if( (vis[start][ends]|| vis[start-1][ends] || vis[start][ends-1] || vis[start+1][ends] || vis[start][ends+1])) v= 0;
        vis[ls][le] = 1;
        //cout << start << ends << '\n';
    }
     //   if(vis[start][ends]|| vis[start-1][ends] || vis[start][ends-1] || vis[start+1][ends] || vis[start][ends+1]) v= 0;
    if(v)cout << "OK\n";
    else cout << "BUG\n";
 
 
    return 0;
}