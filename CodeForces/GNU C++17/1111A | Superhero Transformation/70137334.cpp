#include <bits/stdc++.h>
using namespace std;
 
bool isVowel(char s)
{
 if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return true;
 return false;
}
 
bool isConsonant(char s)
{
 if(s != 'a' && s != 'e' && s != 'i' && s != 'o' && s != 'u') return true;
 return false;
}
int main()
{
 
 string s, t;
 cin >> s >> t;
 if(s.length() != t.length())
 {
  cout << "No\n";
  return 0;
 }
 for(int i = 0; i < s.length(); i++)
 {
  if(isVowel(s[i]) && isVowel(t[i]))
  {
 
  }
  else if(isConsonant(s[i]) && isConsonant(t[i]))
  {
 
  }
  else
  {
   cout << "No\n";
   return 0;
  }
 }
 cout << "YES\n";
 return 0;
 
 
 
 
 
 
 
 return 0;
}