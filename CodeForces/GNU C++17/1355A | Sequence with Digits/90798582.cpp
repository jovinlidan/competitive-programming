#include <bits/stdc++.h>
using namespace std;
long long solve(long long x)
{
    long long mn = 1e9, mx = -1e9;
    while(x > 0)
    {
        long long int dig = x%10;
        mx = max(mx, dig);
        mn = min(mn, dig);
        x/=10;
    }
    return mx*mn;
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
        long long   n, k;
        cin >> n >> k;
        k--;
        while(k--)
        {
            long long ans = solve(n);
            if(ans == 0)break;
            else n+=ans;
        }
        cout << n << '\n';
 
    }
 
 
    return 0;
}