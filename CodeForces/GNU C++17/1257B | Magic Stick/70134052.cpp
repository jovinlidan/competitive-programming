#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int tc;
 cin >> tc;
 
 while(tc--)
 {
  int x, y;
  cin >> x >> y;
  if(x >= y) cout << "YES\n";
  else if(x == 1) cout << "NO\n";
  else if(x == 2 && y != 3) cout << "NO\n";
  else if(x == 3 && y != 3) cout << "NO\n";
  else cout << "YES\n";
 }
 
 
 
 
 
 
 
 
 
 
 return 0;
}