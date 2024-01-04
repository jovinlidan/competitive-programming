#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int tc;
   cin >> tc;
   while(tc--)
   {
  string s, newS;
  cin >> s;
  newS.push_back(s[0]);
  for(int i = 1; i < s.length()-1;  i+=2)
  {
   newS.push_back(s[i]);
 
  }
  newS.push_back(s[s.length()-1]);
  cout << newS << '\n';
 
   }
 
}