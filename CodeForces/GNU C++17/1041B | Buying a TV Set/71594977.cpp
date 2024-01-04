#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli a, b, x, y;
 cin >> a >> b >> x >> y;
 lli temp = __gcd(x, y);
 x/= temp;
 y /= temp;
 
 cout << min(a/x, b/y) << endl;
 
 
 
 
 
 
 
 return 0;
}