#include <bits/stdc++.h>
#define lli long long int
#define mxN 105
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef set<int> si;
typedef pair<si, pii>psii;
typedef pair<string, string> pss;
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k, temp, mx = -1e9;
        lli ans = 0;
        map<int, int> mp;
        cin >> n >> k;
 
        for(int i = 0;i < n; i++)
        {
            cin >> temp;
            temp%=k;
            if(temp == 0)continue;
            mp[k-temp]++;
            mx = max(mx, mp[k-temp]);
        }
        n -= mp[0];
 
        int cnt = 0, x = 0;
        while(0)
        {
            if(n == 0)break;
            if(mp[k-x])
            {
                mp[k-x]--;
                n--;
 
            }
            cnt++;
            x++;
 
            x%=k;
 
        }
        for(auto &i : mp)
        {
            int first = i.first;
            int second = i.second;
            if(!first)continue;
            if(second == mx)
            {
                ans = (lli)k * (second - 1) + (first) +1;
            }
 
 
        }
 
        cout << ans << '\n';
 
    }
 
 
 
 
 
 
 
 
    return 0;
}