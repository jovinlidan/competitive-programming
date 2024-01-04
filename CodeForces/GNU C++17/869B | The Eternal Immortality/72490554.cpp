#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli a, b;
 cin >>a >> b;
 if(b - a >= 10)
 {
  cout << 0 << endl;
 }
 else
 {
        if(a > b)
  {
   cout << 0 << endl;
  }
  else if(a == b)
  {
   cout << 1 << endl;
  }
  else
  {
            lli ans = b % 10;
   lli gap =  b -a ;
            b--;
            gap--;
   while(gap--)
   {
    ans *= (b % 10);
    b--;
   }
   cout << ans % 10  << endl;
 
  }
 
 }
 
 
 
 
 
 
 
 
 
 return 0;
}