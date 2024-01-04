#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
// NGOPEK ? //
lli is_prime(lli n) {
 
    if (n == 1) {
        return false;
    }
    lli i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return i;
        }
        i += 1;
    }
    return -1;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    lli n;
    cin >> n;
 
    if(n % 2 == 0)cout << n / 2;
    else
    {
        lli ans = is_prime(n);
        if(ans == -1)cout << 1;
        else
        {
            n -= ans;
            cout << n/2 + 1 << '\n';
        }
    }
    cout << '\n';
 
    return 0;
}