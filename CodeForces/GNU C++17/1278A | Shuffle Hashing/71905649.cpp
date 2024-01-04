#include <bits/stdc++.h>
using namespace std;
 
string removeChar(string s, char x)
{
 string temp = "";
 bool once = true;
 int length = s.length();
 for(int i = 0; i < length; i++)
 {
  if(s[i] == x && once)
  {
   once = false;
   continue;
  }
  temp.push_back(s[i]);
 }
 return temp;
 
}
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  string s, h, temp;
  bool valid = false;
  cin >> s >> h;
  int lastIdx=  0;
  sort(s.begin(), s.end());
  int hLength = h.length();
  for(int i = 0; i < hLength; i++)
  {
   temp += h[i];
   if(temp.length() == s.length())
   {
    sort(temp.begin(), temp.end());
    if(temp == s)
    {
     valid = true;
     //cout << temp << " " << s << endl;
    }
    temp = removeChar(temp, h[lastIdx]);
    lastIdx++;
   }
 
  }
  if(valid) cout << "YES\n";
  else cout << "NO\n";
 
 
 }
 
 
 
 
 
 return 0;
}