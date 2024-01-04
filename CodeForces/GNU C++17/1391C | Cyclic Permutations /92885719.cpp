#include <bits/stdc++.h>
#define lli long long
 
using namespace std;
const int mod = 1000000007;
lli fact(lli n)
{
    lli ans = 1;
    for(int i = 2;i <= n; i++)
    {
        ans *= i;
        if(ans > mod)
        {
            ans %= mod;
        }
    }
    return ans;
}
 
 
lli factTwo(lli n)
{
    n--;
    lli ans = 1;
    for(int i = 0; i < n; i++)
    {
        ans *= 2;
        if(ans > mod)
        {
            ans %= mod;
        }
    }
    return ans;
 
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    lli n;
    cin >> n;
    cout << (fact(n)-factTwo(n) + mod) % mod << '\n';
}