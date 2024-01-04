#include <bits/stdc++.h>
#define lli long long int
using namespace std;
unordered_map<int,int> mp;
lli solve(string s)
{
    lli res= 0, n = s.length();
    bool ends = false;
    for(int i = 0; i < n; i++)
    {
        if(mp[-(i+1)] == 0)
        {
            res+=n;
            ends = true;
            break;
        }
        else
        {
            res += mp[-(i+1)];
        }
    }
    if(!ends)res+=n;
 
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        mp.clear();
        cin >> s;
        int cur = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '+')cur++;
            else cur--;
            if(mp[cur] == 0)mp[cur] = i+1;
        }
        cout << solve(s) << '\n';
 
    }
 
    return 0;
}