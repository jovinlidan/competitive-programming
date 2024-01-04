#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int a= 0, b = 0, c = 0, mn = 1e9, lefts = 0;
  string s;
  cin >> s;
 
  for(int i = 0; i < s.length(); i++)
  {
   if(s[i] == '1')a++;
   else if(s[i] == '2')b++;
   else if(s[i] == '3')c++;
 
   while(a > 0 && b > 0 && c > 0)
   {
    mn = min(mn, a+b+c);
    if(s[lefts] == '1')a--;
    else if(s[lefts] == '2')b--;
    else if(s[lefts] == '3')c--;
    lefts++;
   }
  }
  if(mn == 1e9)cout << 0 << '\n';
  else cout << mn << '\n';
 
 
 
 
 }
 
 
 
 
 
}
 