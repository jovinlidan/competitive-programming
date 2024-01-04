#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli s, i, exp;
  cin >> s >> i >> exp;
 
  if(s+exp <= i) cout << 0 << endl;
  else if(exp == 0 && (s > i)) cout << 1 << endl;
  else
  {
   lli ansL = (s+exp) - i;
   lli tAns = ceil(ansL / 2.0);
   cout << min(exp +1 , tAns ) <<endl;
  }
 
 }
 
 
 
 
 
 
 
 return 0;
}