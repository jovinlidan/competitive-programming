#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    lli tc;
    cin >> tc;
    while(tc--)
    {
        lli n, g, b;
        cin >> n >> g >> b;
        lli mid = ceil(n/2.0);
        lli ans = mid + (mid-1)/ g * b;
        cout << max(ans, n) << endl;
    }
 
 
 
 
 
 
 
 
 
    return 0;
}