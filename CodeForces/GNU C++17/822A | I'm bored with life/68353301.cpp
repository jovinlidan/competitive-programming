#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli fact(lli x)
{
 if(x == 1) return 1;
 return x * fact(x-1);
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
    lli a, b;
    cin >> a >> b;
 
    cout << fact(min(a, b)) << endl;
 
 
 
 
 
 
 return 0;
 
}