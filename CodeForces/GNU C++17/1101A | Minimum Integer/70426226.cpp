#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli l, r, d;
  cin >> l >> r >> d;
  lli ans = 0;
  if(d < l || d > r) ans = d;
  else if(d >= l && d <= r)
  {
   lli temp = floor(r*1.0/d);
   temp++;
   ans = d*temp;
  }
  cout << ans << endl;
 
 
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}