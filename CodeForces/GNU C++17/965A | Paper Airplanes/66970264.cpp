#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    long double k, n, s, p, ans=0;
    cin >> k >> n >> s >> p;
 
    ans = ceil((ceil(n/s) * k)/p);
    cout << int(ans);
 
 
    return 0;
}