#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, m, mn, mx;
  cin >> n >> m;
  mn = min(n, m);
  mx = max(n, m);
  int ans = 1;
  if(mx % 2 == 0)
  {
   ans *= mx / 2;
   ans*=mn;
  }
  else
  {
   mx --;
   ans *= mx/2;
   ans *= mn;
   ans+= ceil(mn/2.0);
  }
  cout << ans << '\n';
 
 
 }
 
 
 
 
}