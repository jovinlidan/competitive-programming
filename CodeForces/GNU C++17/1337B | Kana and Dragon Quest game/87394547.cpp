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
  int x, n, m;
  cin >> x  >> n >> m;
  while(n--)
  {
   if(x <= 20)break;
   x = (x/2)+10;
  }
  while(m--)x-=10;
 
   if(x <=0) cout << "YES\n";
   else cout << "NO\n";
 }
}