#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli a, b, mn, mx, ans=0;
 cin >> a >> b;
 
 while (a != 1 && b != 1)
 {
  //cout << a << "-" << b << endl;
  if(max(a, b) % min(a, b) == 0) break;
 
 
  if( a > b)
  {
   lli hsl = floor(a * 1.0/b);
   ans += hsl;
   a -= (b * hsl);
 
 
  }
  else if ( a < b)
  {
   lli hsl = floor(b * 1.0/a);
   ans += hsl;
   b -= (a * hsl);
  }
  else
  {
   break;
  }
 }
 ans += (max(a, b) / min(a, b));
 
 cout << ans << endl;
 
 return 0;
}