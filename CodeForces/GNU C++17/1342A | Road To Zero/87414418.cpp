#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 long long int tc;
 cin >> tc;
 while(tc--)
 {
  long long int a, b, x, y;
  cin >> x >> y >> a >> b;
 
  if(x == 0 && y == 0)
  {
   cout << 0 << '\n';
  }
  else
  {
   long long int ans = 0;
   long long int mn = min(x, y);
   long long int mx = max(x, y);
   if(mn !=0 && mx != 0)
   {
    if(a*2 < b)
    {
     ans += (mx * a);
     ans += (mn * a);
    }
    else
    {
     mx -= mn;
     ans += (mn * b);
     ans += (mx * a);
 
    }
   }
   else
   {
    ans += (mx * a);
   }
   cout << ans << '\n';
 
  }
 
 
 }
 
 
}
 