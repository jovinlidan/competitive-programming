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
 
  if(mn*2 >= mx)
  {
   cout << pow(mn*2,2);
  }
  else
  {
   cout << pow(mx, 2);
  }
  cout << '\n';
 }
 
 
 
 
}