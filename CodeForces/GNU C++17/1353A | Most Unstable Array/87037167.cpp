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
  int n, x;
  cin >> n >> x;
  if(n == 1)cout << 0;
  else if(n == 2)cout << x;
  else cout << x*2 ;
  cout << '\n';
 
 
 }
 
 
 
 
}