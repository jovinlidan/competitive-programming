#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    if(n > 2)
    {
        n *= n;
        if(n % 2 == 0)
        {
            n /= 2;
            n/=2;
            cout << n-1 << " " << n+1 << endl;
        }
        else
        {
 
            cout << n/2 << " " << n/2+1 << endl;
        }
 
    }
    else cout << -1 << endl;
 
 
 
 
    return 0;
}