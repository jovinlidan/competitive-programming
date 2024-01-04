#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  unsigned long long int  ll;
typedef pair<ll, ll> pii;
 
 
int cl(int a, int b)
{
    return (a + b - 1)/ b;
 
}
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << 2 << '\n';
        int x = cl(n + n-1, 2);
     //   cout << x << '\n';
        cout << n << " " << n-1 << '\n';
        n-=2;
        for(int i = n; i >= 1; i--)
        {
            cout << x << " " << i << '\n';
            x = cl(x + i, 2);
        }
    }
 
    return 0;
}