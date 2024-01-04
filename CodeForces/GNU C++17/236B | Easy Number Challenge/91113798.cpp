#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
 
int d[1000005] = {};
 
void solve()
{
    //memset(d, 1, sizeof d);
    d[1] = 1;
 
    for(int i = 2; i <= 1000000; i++)
    {
        d[i]++;
        for(int j = i; j <= 1000000; j+=i)d[j]++;
    }
   // cout << d[5] << "INI\n";
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    solve();
 
    int a, b, c;
    ull ans = 0, mod = 1073741824;
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            for(int k = 1; k <= c; k++)
            {
                ans += d[i*j*k];
                ans %= mod;
                //cout << d[i * j * k] << '\n';
            }
        }
    }
    cout << ans << '\n';
    return 0;
}