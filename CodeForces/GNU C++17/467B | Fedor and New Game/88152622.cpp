#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int solve(int n)
{
    int ans = 0;
    for (int i = 0; i < 32; ++i) {
        if (n & (1 << i)) {
            ++ans;
        }
    }
    return ans;
}
 
int main()
{
    int n, m , k;
    cin >> n >> m >> k;
    int arr[m+2] = {};
    for(int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        if(solve((arr[i] ^ arr[m]) )<= k)ans++;
    }
    cout << ans << '\n';
}