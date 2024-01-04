#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli a, b, c;
 cin >> a >> b >> c;
 if(a == b)
 {
  cout << "YES\n";
  return 0;
 }
 
 if((a > b && a+c > a) || (a < b && a+c < a) )
 {
  cout << "NO\n";
  return 0;
 }
 int kurg = b-a;
 if(c == 0)
 {
  if(a == b) cout << "YES\n";
  else cout << "NO\n";
  return 0;
 }
 if(kurg % c == 0) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
 return 0;
}