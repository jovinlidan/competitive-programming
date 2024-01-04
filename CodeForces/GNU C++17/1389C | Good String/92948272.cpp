#include <bits/stdc++.h>
#define lli long long int
#define mxN 100005
using namespace std;
void solve(string s)
{
    lli ans = 1e9;
    unordered_map<char, int> mp;
    for(int i = 0; i < s.length(); i++)mp[s[i]]++;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == j)continue;
            int cnt = 0;
            char x = (i+'0');
            char y = (j+'0');
            bool first = true;
            for(int k = 0; k < s.length(); k++)
            {
                if(s[k] == x  && first)first = !first;
                else if(s[k] == y && !first)
                {
                    cnt += 2;
                    first = !first;
                }
            }
            ans = min(ans, (lli)(s.length() - cnt));
        }
    }
    for(int i = 0; i < 10; i++)
    {
        char x = (i+'0');
        ans = min(ans,(lli) s.length() - mp[x]);
    }
    cout << ans << '\n';
 
 
 
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        solve(s);
 
    }
 
}