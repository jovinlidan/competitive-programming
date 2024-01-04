#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        lli a, b, c, d;
        cin >> a >> b >> c >>d;
        set<int> s;
        s.insert(a);
        cout << (c-a) * (d-b) + s.count(a) << '\n';
    }
 
 
    return 0;
}