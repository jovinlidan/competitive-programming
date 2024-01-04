#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll sum = 0;
    cin >> n;
    int arr[n+5] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)sum += arr[i];
    }
    vector<ll> ans;
    for(int i = n-1; i >=0 ; i--)
    {
        if(arr[i] < 0)ans.push_back(sum + arr[i]);
        else ans.push_back(sum);
 
        if(arr[i] >= 0)sum -= arr[i];
    }
    for(int i = ans.size() - 1;i >= 0; i--)
    {
        cout << ans[i];
        if(i != 0)cout << " ";
    }
    cout << '\n';
 
 
    return 0;
}