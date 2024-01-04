#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
 
    int mn = min(n, m);
    int mx = max(n, m);
    char x = 'B', y = 'G';
    if(n > m)swap(x, y);
 
    string ans (n+m, y);
 
    for(int i = 1; i < n+m && mn--;i+=2 )
    {
        ans[i] = x;
    }
    cout << ans << '\n';
 
 
    return 0;
}