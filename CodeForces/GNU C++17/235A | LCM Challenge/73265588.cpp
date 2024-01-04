#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
lli lcm(lli x, lli y)
{
    return x * (y *1.0/ __gcd(x, y));
}
int main()
{
 
//    while(1)
//    {
//        lli x, y, z;
//        cin >> x >> y >> z;
//        cout << lcm(x, lcm(y, z)) <<endl;
//
//    }
    lli n, ans ;
    cin >> n;
    if(n % 2 == 0)
    {
        ans = lcm(n-1, lcm(n-2, n-3));
        ans = max(ans, lcm(n, lcm(n-1, n-3)));
    }
    else ans = lcm(n, lcm(n-1, n-2));
    cout << max(n, ans);
 
 
}