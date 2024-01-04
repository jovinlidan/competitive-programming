#include <bits/stdc++.h>
#define lli long long int
#include <algorithm>
#include <cstdio>
using namespace std;
 
 
bool isSqrt(lli x)
{
 if((floor(sqrt(x)) * floor(sqrt(x))) == x) return 1;
 return 0;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, lastNum, cuNum, ans=0, fiAns = 0;
 cin >> n;
 for(lli i = 0; i < n; i++)
 {
  if(i == 0) cin >> ans;
  else
  {
   cin >> cuNum;
   ans = __gcd(ans, cuNum);
  }
 
 }
 if(ans == 1)
 {
  cout << 1 << endl;
  return 0;
 }
 //cout << sqrt(ans) << endl;
 for(int i = 1; i <= floor(sqrt(ans)); i++)
 {
  if(ans % i == 0)fiAns++;
 }
 cout << fiAns*2 - isSqrt(ans) << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}