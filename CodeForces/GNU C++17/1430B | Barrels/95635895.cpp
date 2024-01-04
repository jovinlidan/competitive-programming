#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
ll tc, n, k;
int arr[mxN] = {};
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> tc;
    while(tc--)
    {
        //vec.clear();
        //vec.resize(mxN);
        cin >> n >> k;
        for(int i = 0; i < n; i++)cin >> arr[i];
        if(k)
        {
            sort(arr, arr+n, greater<int>());
 
            ll mx = arr[0];
            for(int i = 1; i < n && k--; i++)mx+= arr[i];
            cout << mx << '\n';
 
        }
    }
 
    return 0;
}