#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
bool chck(string b)
{
 for(int i = 0; i < b.length(); i++)
 {
  if(b[i] != '9') return false;
 
 }
 return true;
 
}
 
int main()
{
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli a;
  string b;
  cin >> a >> b;
  lli leng = b.length() -1 + chck(b);
  cout << a * leng << endl;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}