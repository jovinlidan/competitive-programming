#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  unsigned long long int  ll;
typedef pair<ll, ll> pii;
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll totalNeed = (y * k) + k;
        ll first = (totalNeed - 1);
        cout << (first + (x-1) - 1) / (x-1) + k << '\n';
 
    }
 
    return 0;
}