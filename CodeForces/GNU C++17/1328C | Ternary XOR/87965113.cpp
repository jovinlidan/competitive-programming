#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n;
  string s, a, b;
  cin >> n >> s;
  b = s;
 
  for(int i = 0; i < n; i++)
  {
 
   if(s[i] == '1')
   {
    a.push_back('1');
    b[i] = '0';
    break;
 
   }else {
    a.push_back('0' + ((s[i] - '0') / 2));
    b[i] = ('0' + ((s[i] - '0') / 2));
   }
 
  }
  while(a.length() != s.length())a.push_back('0');
  cout << a << '\n' << b << '\n';
 }
 
 
 
 
 
 
 
 
}
 