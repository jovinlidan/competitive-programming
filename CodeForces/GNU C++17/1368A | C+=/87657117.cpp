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
  long long int  a, b, n, x, y;
  cin >> x >> y >> n;
  long long int  cnt = 0;
  a = min(x, y);
  b = max(x, y);
  while(1)
  {
   if(cnt%2 == 0)a+=b;
   else b+=a;
   cnt++;
   if(a > n || b > n)break;
  }
  cout << cnt << '\n';
 
 }
 
}