#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 int mx = 0, mn=0;
 mx = (n/7 * 2 + min(2, n % 7) ) ;
 
 while(n > 0)
 {
  n -= 5;
  if(n > 0)
  {
   mn += min(n, 2);
   n -= min(n, 2);
  }
 
 }
 cout << mn << " " << mx << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}