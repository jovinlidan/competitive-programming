#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli c, m, x, ans= 0;
  cin >> c >> m >> x;
 
  if(x >= c && x >= m)
  {
   ans+= min(m, c);
   cout << ans << endl;
   continue;
  }
  else if (x >= min(c, m) && x <= max(c, m))
  {
   ans+= min(m, c);
   cout << ans << endl;
   continue;
  }
  if(c >= x && m >= x)
  {
   lli mn = min(c, min(m, x));
   ans+= mn;
   c -= mn;
   m -= mn;
   x -= mn;
  }
  if(x == 0)
  {
   if(c == m)
   {
    ans += (c+m)/3;
    c = 0;
    m = 0;
   }
   else
   {
    lli mn = min(c, m);
    if(mn == c)
    {
     lli mn2 = min((lli)(m/2.0), mn);
     lli mod = m % 2;
     ans += mn2;
     mn -= mn2;
     m  = 0;
     ans += abs(c-mn2+mod)/3;
 
    }
    else
    {
     lli mn2 = min((lli)(c/2.0), mn);
     lli mod = c % 2;
     ans += mn2;
     mn -= mn2;
     c  = 0;
     ans += abs(m-mn2+mod)/3;
 
    }
 
   }
  }
 
 
  cout << ans << endl;
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}