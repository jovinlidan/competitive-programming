#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, x, y;
 cin >> n>> x >> y;
 string s;
 cin >>s ;
 int ans = 0, length = s.length();
 
 reverse(s.begin(), s.end());
 
 for(int i = 0; i < length; i++)
 {
  if(i >= x)break;
  if(i == y)
  {
   if(s[i] != '1')
   {
    s[i] = '1';
    ans++;
   }
   continue;
  }
  if(s[i] != '0')
  {
   s[i] = '0';
   ans++;
  }
 }
 
 
 
 cout << ans << endl;
 
 
 
 
 
 return 0;
}