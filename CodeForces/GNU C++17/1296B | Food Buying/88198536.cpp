#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        lli n;
        cin >> n;
        double ans = 0;
 
        while(n >= 10)
        {
            ans += n - (n%10);
            n = n%10 + n/10;
        }
       ans+=n;
        cout << (int)ans << '\n';
    }
}