#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
        string s;
        cin >> s;
        int length = s.length();
        for(int i = 0; i < length; i++)
  {
   if(s[i] == '?')
   {
    set<char> abc;
    abc.insert('a');
    abc.insert('b');
    abc.insert('c');
    abc.insert('?');
    if(i == 0)
    {
     if(s[i+1] == 'a')s[i] = 'b';
     else if(s[i+1] == 'b')s[i] = 'a';
     else if(s[i+1] == 'c') s[i] = 'a';
     else if(s[i+1] == '?')s[i] = 'a';
     else s[i] = 'a';
    }
    else if(i == length-1)
    {
     if(s[i-1] == 'a')s[i] = 'b';
     else if(s[i-1] == 'b')s[i] = 'a';
     else if(s[i-1] == 'c') s[i] = 'a';
     else if(s[i-1] == '?')s[i] = 'a';
    }
    else
    {
//     if(s[i-1] == 'a' && s[i+1] == 'b') s[i] = 'c';
//     else if(s[i-1] == 'a' && s[i+1] == 'c') s[i] = 'b';
//     else if(s[i-1] == 'b' && s[i+1] == 'a') s[i] = 'c';
//     else if(s[i-1] == 'c' && s[i+1] == 'a') s[i] = 'b';
//     else if(s[i-1] == 'b' && s[i+1] == 'c') s[i] = 'a';
     abc.erase(s[i-1]);
     abc.erase(s[i+1]);
     if(abc.count('a'))s[i] = 'a';
     else if(abc.count('b'))s[i] = 'b';
     else if(abc.count('c'))s[i] = 'c';
 
    }
   }
  }
  bool valid = true;
  for(int i = 1; i < length; i++)
  {
   if(s[i] == s[i-1]) valid = false;
  }
  if(valid)cout << s << endl;
  else cout << -1 << endl;
 
 
 
 
 
 }
 
 
 
 
 
 
 
 
 return 0;
}