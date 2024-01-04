#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, ans = 0, temp, mx = -1e9;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        ans += temp;
        mx = max(mx, temp);
    }
    long long a = ceil(ans * 1.0/(n-1)) ;
    if(mx<= a)cout << a << '\n';
    else cout << mx << '\n';
}