#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 
  int a, b, c, x, y, z;
  cin >> x >> y >> z;
  a = sqrt(x*z/y);
  b = sqrt(x*y/z);
  c = sqrt(y*z/x);
 
  cout << (a*4) + (b * 4) + (c * 4) << '\n';
 
 
}