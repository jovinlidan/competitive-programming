#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli n, k, ans=0;
  cin >> n >> k;
  if(k == 1) cout << n << endl;
  else
  {
   while(n!= 0)
   {
    lli sisa = n % k;
    ans+= sisa;
    n-= sisa;
    if(n == 0)break;
    ans++;
    n /= k;
 
   }
   cout << ans << endl;
 
  }
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}