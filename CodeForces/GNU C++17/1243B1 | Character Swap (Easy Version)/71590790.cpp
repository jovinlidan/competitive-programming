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
  string s, t;
  int n;
  cin >> n;
  cin >> s >> t;
  int diff=0, first, last;
 
  for(int i = 0; i < n; i++)
  {
   if(s[i] != t[i])
   {
    if(diff == 0)first = i;
    else last = i;
    diff++;
   }
  }
  if(diff >= 3)cout << "No\n";
  else
  {
   if(diff == 1)
   {
    swap(s[first], t[first]);
   }
   else if(diff == 2)
   {
    swap(s[first], t[last]);
   }
   if(s == t)cout << "Yes\n";
   else cout << "No\n";
 
  }
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}