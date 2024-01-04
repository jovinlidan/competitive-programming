#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
 
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, x;
    cin >> n;
    int pref[n+5] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(i > 0)pref[i] = pref[i-1] + x;
        else pref[i] = x;
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(pref[i] == (pref[n-1]-pref[i]) )ans++;
    }
    cout << ans << '\n';
 
 
    return 0;
}
 
 