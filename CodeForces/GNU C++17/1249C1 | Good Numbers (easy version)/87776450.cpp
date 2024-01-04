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
  int n, temp;
  bool gas = true;  // BELI GAS DIWARONGGG IPOOOOLL, GASSSS POLLLLLLLLLLL
  cin >> n;
 
  while(1)
  {
   temp = n;
   gas = true;
   while(temp > 0)
   {
    if(temp % 3 == 2)
    {
     n++;
     gas = false;
     break;
    }
    temp/=3;
   }
   if(gas)break;
  }
  cout << n << '\n';
 
 
 
 
 }
}