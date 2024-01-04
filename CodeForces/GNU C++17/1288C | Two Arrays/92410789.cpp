#include <bits/stdc++.h>
#define lli long long int
#define mxN 10005
using namespace std;
typedef pair<lli,int> pii;
 
const int mod = 1000000007;
int n, m;
lli fact[mxN] = {};
 
void solve()
{
    fact[1] = 1;
    for(int i = 2; i <= mxN; i++)
    {
        fact[i] = (fact[i-1] * i)%mod;
    }
 
 
}
int modInverse(int a )
{
    int m = mod;
    int m0 = m;
    int y = 0, x = 1;
    if (m == 1)return 0;
 
    while (a > 1)
    {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
 
    return x;
}
 
int main()
{
    // << modInverse(24);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    solve();
    cin >> n >> m;
 
    lli num1 = fact[n+2*m-1];
    lli num2 = modInverse(fact[2*m]) % mod;
    lli num3 = modInverse(fact[n-1]) % mod;
 
    //for(int i = 0; i < 1005; i++)cout << fact[i] << " ";
//cout << num1 << " " << num2 << " " << num3 << "\n";
    cout << (num1 *(num2 * num3%mod)%mod)<< '\n';
 
 
    return 0;
}