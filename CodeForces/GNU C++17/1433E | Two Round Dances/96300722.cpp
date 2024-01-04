#include <bits/stdc++.h>
#define mxN 100005
using namespace std;
typedef unsigned long long int ll;
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
 
    int n;
    ll ans= 1;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans/ (n*n / 2);
 
 
    return 0;
}
 