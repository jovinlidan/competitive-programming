#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 string s, t;
 int ans = 0, sIdx, tIdx;
 cin >> s >> t;
 int length;
 sIdx = s.length()-1;
 tIdx = t.length()-1;
 if(s.length() <= t.length())
 {
   length= s.length()-1;
 }
 else
 {
   length= t.length()-1;
 
 }
 for(int i = length; i >= 0; i--)
 {
  //cout << s[sIdx] << endl;
  if(s[sIdx] == t[tIdx])ans+=2;
  else break;
  sIdx--;
  tIdx--;
 }
 //cout << length << endl;
 cout << (s.length()+t.length()) - ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}