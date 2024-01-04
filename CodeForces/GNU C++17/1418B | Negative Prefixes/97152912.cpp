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
int n,x;
int arr[mxN] = {};
int dp[mxN][100] = {};
 
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    const int mod = 1000000007;
   // cout << modpow(2,1000000000 ,mod) << endl;
 
 
 
   int tc;
   cin >> tc;
   while(tc--)
   {
        int n;
        cin >> n;
        int arr[n+5] = {}, cond[n+5] = {};
        for(int i = 0; i < n; i++)cin >> arr[i];
        for(int i = 0; i < n; i++)cin >> cond[i];
        vector<int> arg;
        for(int i = 0; i < n; i++)
        {
            if(!cond[i])arg.push_back(arr[i]);
        }
        sort(arg.begin(), arg.end(), greater<int>());
       int idx = 0;
       for(int i = 0; i < n; i++)
       {
           if(i != 0)cout << " ";
           if(cond[i])cout << arr[i];
           else cout << arg[idx], idx++;
 
       }
       cout << '\n';
   }
 
 
    return 0;
}