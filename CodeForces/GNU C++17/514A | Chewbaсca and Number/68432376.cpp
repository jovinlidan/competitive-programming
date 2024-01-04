#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 string s;
 cin >> s;
 
 for(int i = 0; i < s.length(); i++)
 {
  if(i == 0 && s[i] == '9')
  {
   cout << s[i];
   continue;
  }
  int temp = s[i] -'0';
  if(temp > 9 -( s[i]-'0'))
  {
   cout << 9 -( s[i]-'0');
  }else
  {
   cout << s[i];
  }
 }
 
 
 
 
 
 return 0;
}