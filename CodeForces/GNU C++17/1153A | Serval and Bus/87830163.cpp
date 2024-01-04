#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, t, s, d, ans= 0, mn = 1e9;
 
 cin >> n >> t;
 for(int i = 1; i <= n; i++)
 {
  cin >> s >> d;
  int x = s;
  if(x < t)
  {
   int cnt = (t-x)/d;
   x += (d*cnt);
   while(x < t)x+=d;
 
  }
  //cout << x << "- " << i << '\n';
  if(x < mn )
  {
   mn = x;
   ans = i;
  }
 }
 cout << ans << '\n';
 
 
 
 
 
 
}
 