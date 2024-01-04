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
  int n, x, m, lefts, rights;
  cin >> n>> x >> m;
  lefts = x, rights = x;
  for(int i = 0; i < m; i++)
  {
   int l, r;
   cin >> l >> r;
   if(l <= rights && r >= lefts)
   {
    lefts = min(l, lefts);
    rights = max(r, rights);
 
   }
 
 
  }
   cout << rights-lefts+1 << '\n';
 }
 
 
 
 
}