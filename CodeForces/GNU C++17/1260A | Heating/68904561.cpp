#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 
 lli n, c, sum, mod = 0;
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  lli ans =  0;
  cin >> c >> sum;
  mod = sum % c;
  for(int j = 0; j < c; j++)
  {
   lli temp;
   if(mod > 0)
   {
    temp = floor(sum / c) + 1;
    mod--;
   }
   else temp = floor(sum/c);
   ans += (temp * temp);
  }
  cout << ans << endl;
 
 }
 
 
 
 return 0;
}