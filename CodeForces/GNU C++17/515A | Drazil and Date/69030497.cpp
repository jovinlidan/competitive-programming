#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli a, b, s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    if(a == 0 && b == 0 && s == 2)
    {
        cout << "Yes\n";
        return 0;
    }
    else
    {
        if((a + b) <= s && (s - a+b) % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
 
    }
 
 
 
 
 
 
    return 0;
}