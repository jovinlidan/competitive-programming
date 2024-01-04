#include <bits/stdc++.h>
#define mxN 100005
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
vector<vector<ll>> adj(mxN);
int degree[mxN] = {};
const int mod = 1e9+7;
ll x, y, n, m;
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, x=0,xx=0,ans=0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '<')x++;
            else if(s[i] == '>')xx++;
            else if(s[i] == '-')
            {
                ans++;
                if(s[(i+1) % n] != '-')ans++;
            }
 
        }
        if(x && xx)cout << ans;
        else cout << n;
        cout << '\n';
 
 
    }
 
 
    return 0;
}
 