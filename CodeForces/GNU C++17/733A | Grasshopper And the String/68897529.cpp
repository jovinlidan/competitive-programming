#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
 string s;
 cin >> s;
 lli cPos=0, mx=INT_MIN;
 
 for(int i = 0; i < s.length(); i++)
 {
  if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
  {
   mx= max(i+1-cPos, mx);
   cPos = i+1;
  }
  if(i==s.length()-1)
  {
   mx = max(mx, s.length()+1-cPos);
 
  }
 }
 cout << mx << endl;
 
 
 
 
 
 
 return 0;
}
 