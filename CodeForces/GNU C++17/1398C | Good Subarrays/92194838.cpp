#include <bits/stdc++.h>
#define lli long long int
#define mxN 100005
#define INF 10e18
 
using namespace std;
typedef pair<lli,int> pii;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[n+5] = {};
        for(int i = 0; i < n; i++)
        {
            arr[i] = (s[i] - '0')-1;
        }
 
        unordered_map<int, lli> mp;
        lli ans = 0, r =0;
        mp[0] = 1;
 
        for(int i = 0; i < n; i++)
        {
            r+= arr[i];
            ans += mp[r];
            mp[r]++;
        }
        cout << ans << '\n';
 
    }
 
    return 0;
}