#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int toInt(string s)
{
 stringstream hasil(s);
 int x=0;
 hasil >> x;
 return x;
}
 
string toString(int s)
{
 stringstream ss;
 ss << s;
 return ss.str();
}
 
int main()
{
 lli a, b, c;
 cin >> a >> b;
 c = a +b;
 
 string i, j, k, x = "", y= "", z = "";
 i = toString(a);
 j = toString(b);
 k = toString(c);
 
 for(int u =0; u < i.length(); u++)
 {
  if(i[u] == '0')continue;
  x.push_back(i[u]);
 }
 for(int u =0; u < j.length(); u++)
 {
  if(j[u] == '0')continue;
  y.push_back(j[u]);
 }
 for(int u =0; u < k.length(); u++)
 {
  if(k[u] == '0')continue;
  z.push_back(k[u]);
 }
 if( toInt(x) + toInt(y) == toInt(z)) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}