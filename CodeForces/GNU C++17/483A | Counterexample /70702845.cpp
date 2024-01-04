#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli a, b, temp, mid;
 cin >> a >> b;
 temp = a+1;
 
 if(b-a+1 < 3)
 {
  cout << -1 << endl;
  return 0;
 }
 if(a % 2 == 0)
 {
  cout << a << " " << a+1 << " " << a+2 << endl;
 }
 else
 {
  if(b-a+1 >= 4)
  {
   cout << a+1 << " " << a+2 << " " << a+3 << endl;
  }
  else
  {
   lli x, y, z;
   x = a;
   y = a+1;
   z = a+2;
   if((__gcd(x, z) != 1) && (__gcd(x, y) == 1) && (__gcd(y, z) == 1))
   {
    cout << x << " " << y << " " << z << endl;
   }
   else cout << -1 << endl;
  }
 }
 
 
 
 
 
 
 
 
 
 return 0;
}