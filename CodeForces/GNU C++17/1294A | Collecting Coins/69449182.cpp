#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  lli n, a, b, c, mx = 0, total =0;
  cin >> a >> b >> c >> n;
  mx = max(a, max(b, c));
  total += mx-a;
  total += mx-b;
  total += mx-c;
  n = n-total;
  if(n < 0) cout << "NO\n";
  else
  {
   if(n % 3 == 0) cout << "YES\n";
   else cout << "NO\n";
 
  }
 
 
 
 
 
 
 }
 
 
 
 
 
 return 0;
}