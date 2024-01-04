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
    const int mod = 1000000007;
 
    int n;
    cin >> n;
    int arr[n+5] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int idx = 0;
    vector<int> ans(n+5);
    for(int i = 1; i < n; i+=2)
    {
        ans[i] = arr[idx];
        idx++;
    }
    for(int i = 0; i < n; i+=2)
    {
        ans[i] = arr[idx];
        idx++;
    }
    cout << ceil(n/2.0) - 1 << '\n';
    for(int i = 0; i < n; i++)
    {
        if(i != 0)cout << " ";
        cout << ans[i];
    }
    cout << '\n';
 
 
    return 0;
}