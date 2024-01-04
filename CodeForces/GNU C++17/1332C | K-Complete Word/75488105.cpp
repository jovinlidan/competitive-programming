#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> checker;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc, mx= -1e9, total = 0, ans = 0;
    cin >> tc;
    while(tc--)
    {
        ans = 0;
        int n, k;
        string s;
        cin >> n >> k >> s;
        for(int i = 0; i < k/2; i++)
        {
            mx = -1e9;
            total = 0;
            for(int j = i; j < n; j+=k)
            {
                total++;
                checker[s[j]]++;
                mx = max(mx, checker[s[j]]);
            }
 
            for(int j = k-(i+1); j < n; j+=k)
            {
                total++;
                checker[s[j]]++;
                mx = max(mx, checker[s[j]]);
            }
            ans += (total - mx);
            checker.clear();
            //cout << total << "TOTAL\n";
        }
        if(k % 2 == 1)
        {
            mx = -1e9;
            total = 0;
            for(int j = k/2; j < n; j+=k)
            {
                total++;
                checker[s[j]]++;
                mx = max(mx, checker[s[j]]);
            }
            ans += (total - mx);
            checker.clear();
 
        }
 
 
        cout << ans << endl;
 
    }
 
 
 
 
 
    return 0;
}