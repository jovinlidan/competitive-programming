#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 string s, kata="";
 bool zero = false;
 cin >> s;
 for(int i = 0; i < s.length(); i++)
 {
  if(s[i] == '0' && !zero)
  {
   zero = true;
   continue;
  }
  kata.push_back(s[i]);
 
 }
 if(!zero)
 {
  for(int i = 1; i < kata.length(); i++)
  {
   cout << kata[i];
  }
  cout << endl;
 }
 else cout << kata << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}