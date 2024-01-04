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
  int length;
  cin >> s >> t;
  length = s.length();
  bool valid = false;
 
  for(int i = 0; i < length; i++)
  {
   for(int j = 0; j < length; j++)
   {
    if(s[i] == t[j])
    {
     valid = true;
     goto SINI;
    }
   }
  }
  SINI:
  if(valid)cout << "YES\n";
  else cout << "NO\n";
 }
 
 
 
 
 
 
 
 
 
 
 return 0;
}