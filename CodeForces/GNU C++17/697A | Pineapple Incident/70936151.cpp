#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli t, x, s;
 cin >> t >> x >> s;
 if(x == 0 )
 {
  if(t+1 == s || t == s)cout << "YES\n";
  else
  {
   cout << "NO\n";
  }
  return 0;
 }
 if(s / x == 0 || abs(s-t) < x)
 {
  if(s == t) cout << "YES\n";
  else cout << "NO\n";
 }
 else
 {
 
  lli temp = abs(s-t)/ x;
  temp *= x;
  temp += t;
  if(s == temp || s == temp+1 )
  {
   cout << "YES\n";
  }
  else cout << "NO\n";
  //cout << temp;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}